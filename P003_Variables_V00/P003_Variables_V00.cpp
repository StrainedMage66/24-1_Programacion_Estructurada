// P003_Variables_V00
// Omar Yael Garcia Agiular
// 11/09/23

#include <iostream>
#include <string>

int main()
{
    //TipoDeVariable--NombreDeLaVariable--inicializacion 
    bool mi_primer_booleano = true; // true = abierto // false = cerrado 
    int entero = 0;
    int r = 0;
    float flotante = 0.0;
    char character = 'a';
    char cadenacaracteres[100] = "Hola";
    std::string string = "Hola muy wenas";
    
    std::cout << "Buenos dias!\n";
    std::cout<< "En el boleante tienes guardado: " << mi_primer_booleano << std::endl;
    std::cout<< "En el entero el numero registrado es: " << entero << std::endl;
    std::cout<< "En el flotante tienes registrado: " << flotante << std::endl;
    std::cout<< "El caracter que tienes guardadi es:  "<<character<<std::endl;
    std::cout<< "En la cadena de caracteres tienes registrado: "<<cadenacaracteres<<std::endl; 
    std::cout<< "El string que tienes guardado es: "<<string<<std::endl;

    std::cout << "Deseas realizar cambios? \n Si = 1 \t No = 2" << std::endl;
    std::cin >> r;
    if (r == 1)
    {
        std::cout<< "Escribe el nuevo valor de tu boleante \n tiene que ser 1 o 0" << std::endl;
        std::cin>> mi_primer_booleano; 
        
        std::cout<< "Escribe el nuevo valor de tu entero:" << std::endl;
        std::cin >> entero;

        std::cout << "Escribe un nuevo valor para tu flotante: " << std::endl;
        std::cin >> flotante;

        std::cout << "Escribe un nuevo caracter: " << std::endl;
        std::cin >> character;

        std::cout << "Escribe una nueva cadena de caracteres: " << std::endl;
        std::cin >> cadenacaracteres;

        std::cout << "Escribe algo para tu string: " << std::endl;
        std::cin >> string;

        std::cout << "En el boleante tienes guardado: " << mi_primer_booleano << std::endl;
        std::cout << "En el entero el numero registrado es: " << entero << std::endl;
        std::cout << "En el flotante tienes registrado: " << flotante << std::endl;
        std::cout << "El caracter que tienes guardadi es:  " << character << std::endl;
        std::cout << "En la cadena de caracteres tienes registrado: " << cadenacaracteres << std::endl;
        std::cout << "El string que tienes guardado es: " << string << std::endl;
    }
    
}
