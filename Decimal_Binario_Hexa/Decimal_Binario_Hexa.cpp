// Decimal_Binario_Hexa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Conversiones.h";
using namespace std;


int main()
{
    int opcion = 4, opcion2;
    int decimal = 0;
    short int binario = 0;
    string hexadecimal;
    int* resultado;

    while (opcion != 0) {
        cout << "Adrian Alejandro Montes Mendoza - 22110135" << endl << endl;
        cout << "Conversor de numeros" << endl;
        cout << "Seleccione desde que valor quiere convertir." << endl;
        cout << "1 - [Decimal] -> [?]" << endl;
        cout << "2 - [Binario] -> [?]" << endl;
        cout << "3 - [Hexadecimal] -> [?]" << endl;
        cout << "0 - Salir" << endl;

        cin >> opcion;
        system("cls");

        if (opcion == 0) {
            break;
        }

        switch (opcion) {
        case 1: //Decimal -> Binario || Hexadecimal
            
            cout << "1 - [Decimal] -> [Binario]" << endl;
            cout << "2 - [Decimal] -> [Hexadecimal]" << endl;
            cout << "Otra tecla para regresar al menu" << endl;
            cin >> opcion2;
            system("cls");
            cout << "Ingrese el numero en formato decimal :";
            cin >> decimal;
            system("cls");
            if (opcion2 == 1) {
                cout << "El numero en binario es..." << endl;
                resultado = decimal_Binario(decimal, 16);
                for (int i = 15; i >= 0; i--) {
                    cout << resultado[i];
                }
            }
            else if (opcion2 == 2) {
                cout << "El numero en hexadecimal es..." << endl;
                decimal_a_Hexadecimal(decimal);
            }
            else break;

            break;
        case 2: //Binario -> Hexadecimal -> Decimal
          

            cout << "1 - [Binario] -> [Decimal]" << endl;
            cout << "2 - [Binario] -> [Hexadecimal]" << endl;
            cout << "Otra tecla para regresar al menu" << endl;
            cin >> opcion2;
            system("cls");
            cout << "Ingrese el numero en formato Binario: ";
            cin >> binario;
            
            if (opcion2 == 1) {
                cout << "El numero en decimal es: " << Binario_Decimal(binario);
            }
            else if (opcion2 == 2) {
                cout << "El numero en hexadecimal es: " << endl;
                decimal_a_Hexadecimal(Binario_Decimal(binario));

            }
            else break;


            break;
        case 3: //Hexadecimal -> Decimal -> Binario
            cout << "1 - [Hexadecimal] -> [Decimal]" << endl;
            cout << "2 - [Hexadecimal] -> [Binario]" << endl;
            cout << "Otra tecla para regresar al menu" << endl;
            cin >> opcion2;
            system("cls");
            cout << "Ingrese el numero en formato Hexadecimal: ";
            cin >> hexadecimal;
            system("cls");
            if (opcion2 == 1) {
                cout << "El numero en decimal es: " << endl;
                cout << hexadecimal_Decimal(hexadecimal);
            }
            else if (opcion2 == 2) {
                cout << "El numero en binario es :" << endl;
                resultado =  decimal_Binario(hexadecimal_Decimal(hexadecimal), 16);
                for (int i = 15; i >= 0; i--) {
                    cout << resultado[i];
                }

            }
            else break;

            break;
        
        }
        cout << endl;
        system("pause");
        system("cls");

        cout << "Volver al menu [?]" << endl;
        cout << "1 - Si" << endl;
        cout << "2 - No" << endl;
        cin >> opcion;
        system("cls");

        if (opcion != 1) {
            break;
        }
    }
}