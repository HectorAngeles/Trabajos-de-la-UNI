#include <stdio.h>
#include <iostream>
int main()
{
    float numero1;
    float numero2;
    std::cout << "Escribe el primer numero" << std::endl;
    std::cin >> numero1;
    std::cout << "escribe el segundo numero:" << std::endl;
    std::cin >> numero2;
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division =numero1 / numero2;
    
    std::cout << "la suma es:"<< suma << std::endl;
    std::cout << "la resta es:" << resta << std::endl;
    std::cout << "la multiplicación es:"<< multiplicacion << std::endl;
    std::cout << "la division es:"<< division << std::endl;

    return 0;
}

