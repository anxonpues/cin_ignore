#include <iostream>
//m#include <sstream>
#include <limits>
#include <string>
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

std::string bigrollo {};
    for (;;) {
        int nada;
        std::cin >> nada;

        if (std::cin.bad() || std::cin.eof()) 
        {
            break;
        }
        else if (std::cin.fail()) { // se ejecuta esto y nada pasa a ser 0 se pierde nada!
            std::cin.clear(); // unset failbit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // skip bad input
        }
        else {
            std::cout << nada << '\n';
            bigrollo += nada;
            if (nada == '0')
                break;
        }
    }
    std::cout << bigrollo << std::endl;
}