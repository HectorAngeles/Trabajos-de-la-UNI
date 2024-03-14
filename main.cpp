#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "ingresa tu edad" << std::endl;
    std::cin >> edad;
    if (edad > 17){
        std::cout <<"usted es mayor de edad"  << std::endl;
    } else {
        std::cout <<"usted es menor de edad"  << std::endl;
    }

    return 0;
}
