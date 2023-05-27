#include <iostream>
//m#include <sstream>
#include <limits>
#include "craft.h"

int main(int argvCounter, char* argvValues[])
{
    /*std::istringstream input("1\n"
        "some non-numeric input\n"
        "2\n");*/
std::cout << "\n\tnumero de argumentos en funcion : " << argvCounter << std::endl;
for (int i = 0; i < argvCounter; i++)
    std::cout << "\telemento[" << i << "]= " << argvValues[i] << std::endl;
std::cout << "\n\n";

    for (;;) {
        int nada;
        std::cin >> nada;

        if (std::cin.bad() || std::cin.eof()) 
        {
            break;
        }
        else if (std::cin.fail()) {
            std::cin.clear(); // unset failbit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // skip bad input
        }
        else {
            std::cout << nada << '\n';
            if (nada == 0)
                break;
        }
    }
}