//P_03.5_Calculadora_V0
//Omar Yael Garcia Aguilar
//13/09/23

#include <iostream>
#include <string>
#include<math.h>


int main()
{
    int opc = 0, m1 = 0, m2 = 0, rm = 0, d1 = 0, d2 = 0, s1 = 0, s2 = 0, rs = 0, r1 = 0, r2 = 0, rr = 0, raiz1 = 0;
    double p1 = 0, p2 = 0, rp = 0;
    float rd = 0.0, rraiz = 0.0;
    do
    {
        std::cout << "\t \t \t Hola! \n \t Este programa es una calculadora, elije la \n \t operacion que deseas realizar:" << std::endl;
        std::cout << "\t 1.- Multiplicacion \t 2.- Division \n\t 3.- Suma \t\t 4.- Resta \n\t 5.- Potencia \t\t 6.- Raiz \n\t\t\t 7.- Salir" << std::endl;
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            std::cout << "\tHas elegido la opcion de multiplicacion" << std::endl;
            std::cout << "\tEscribe el primer numero que deseas multiplicar: ";
            std::cin >> m1;
            std::cout << "\tAhora escribe el segundo numero: ";
            std::cin >> m2;
            rm = m1 * m2;
            std::cout << "\tTu respuesta es: " << rm << std::endl;
            break;

        case 2:
            std::cout << "\tHas elegido la opcion de division" << std::endl;
            std::cout << "\tEscribe el numero que deseas dividir: ";
            std::cin >> d1;
            std::cout << "\tAhora escribe el numero que lo va a dividir: ";
            std::cin >> d2;
            rd = d1 / d2;
            std::cout << "\tTu respuesta es: " << rd << std::endl;
            break;

        case 3:
            std::cout << "\tHas elegido la opcion de suma" << std::endl;
            std::cout << "\tEscribe el primer numero que deseas sumar: ";
            std::cin >> s1;
            std::cout << "\tAhora escribe el segundo numero: ";
            std::cin >> s2;
            rs = s1 + s2;
            std::cout << "\tTu respuesta es: " << rs << std::endl;
            break;

        case 4:
            std::cout << "\tHas elegido la opcion de resta" << std::endl;
            std::cout << "\tEscribe el primer numero: ";
            std::cin >> r1;
            std::cout << "\tAhora escribe la cantidad que le deseas restar: ";
            std::cin >> r2;
            rr = r1 - r2;
            std::cout << "\tTu respuesta es: " << rr << std::endl;
            break;

        case 5:
            std::cout << "\tHas elegido la opcion de la potencia" << std::endl;
            std::cout << "\t Escribe el numero que deseas elevar: ";
            std::cin >> p1;
            std::cout << "Ahora escribe por cuanto lo deseas elevar: ";
            std::cin >> p2;
            rp = pow(p1, p2);
            std::cout << "\tTu respuesta es: " << rp << std::endl;
            break;

        case 6:
            std::cout << "\tHas elegido la opcion de la raiz cuadrada" << std::endl;
            std::cout << "\tEscribe el numero que deseas sacar la raiz: ";
            std::cin >> raiz1;
            rraiz = sqrt(raiz1);
            std::cout << "\tTu respuesta es: " << rraiz << std::endl;
            break;
        }
    } while (opc < 7);
    std::cout << "Hasta luego!" << std::endl;
}

