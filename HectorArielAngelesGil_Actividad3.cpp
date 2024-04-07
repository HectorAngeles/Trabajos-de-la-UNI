#include <iostream>
#include <string>

char obtenerPrimeraVocalInterna(const std::string& str) {
    for (size_t i = 1; i < str.length(); ++i){
        char c = str[i];
        if ( c == 'A' || c== 'E' || c=='I' || c=='O' || c=='U')
        return c;
    }
    return 'X'; //si no se encuentra ninguna vocal interna, entonces se utiliza X
}
// funcion principal para realizar el calculo del RFC

std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apelidoMaterno, const std::string& fechadeNacimiento ) {
    std::string rfc;
    
    //se optiene la letra inicial y la primera vocal interna del apellidoPaterno
    char letraInicial = apellidoPaterno[0];
    char PrimeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    
    // se optiene la letra inicial del apellido Materno o se usa una X si no cuenta con apellido Materno
    char inicialApellidoMaterno = (!apelidoMaterno.empty()) ? apelidoMaterno[0] : 'X';
    
    //se optiene la letra inicial del primer nombre o se sustituye por una 'X' si no optienen
    char inialNombre = nombre[0];
    
    //se optienen los dos ultimos dijitos del año de nacimiento 
    std::string anio = fechadeNacimiento.substr(2,2);
    
    //se optiene el mes y el dia de nacimiento
    std::string mes = fechadeNacimiento.substr(5,2);
    std::string dia = fechadeNacimiento.substr(8,2);
    
    // se crea el RFC 
    rfc = letraInicial;
    rfc += PrimeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inialNombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    return rfc;
}

int main () {
    std::string nombre, apellidoPaterno, apelidoMaterno, fechadeNacimiento;
    
    std::cout << "ingresa el nombre (s): ";
    std::getline(std::cin, nombre);
    
    std::cout << "ingresa el apellido paterno: ";
    std::getline(std::cin, apellidoPaterno);
    
    std::cout << "ingresa el apellido materno (si no tiene presione enter): ";
    std::getline(std::cin, apelidoMaterno);
    
    std::cout << "ingresa la fecha de nacimiento (yyyy-mm-dd): ";
    std::getline(std::cin, fechadeNacimiento);
    
    std::string rfc = calcularRFC(nombre, apellidoPaterno, apelidoMaterno, fechadeNacimiento);
    std::cout << "RFC: " << rfc << std::endl;
    
    return 0;}