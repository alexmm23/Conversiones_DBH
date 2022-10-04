#pragma once
#include <iostream>
using namespace std;
int* decimal_Binario(int _decimal, int _tamano) {
    int* ArrBinario = new int[_tamano];
    for (int i = 0; i < _tamano; i++) {
        ArrBinario[i] = _decimal % 2;
        _decimal /= 2;
    }
    return ArrBinario;
    delete[_tamano] ArrBinario;

}
int* decimal_a_Hexadecimal(int _ndecimal) {
    int* DigitoHexa = new int[20];
    int residuo, resultado, i = 0, ndecimal;
    ndecimal = _ndecimal;
    char* Hexa = new char[20];

    do
    {
        residuo = ndecimal % 16;
        resultado = ndecimal / 16;
        DigitoHexa[i] = residuo;
        ndecimal = resultado;
        i++;
    } while (resultado > 15);
    DigitoHexa[i] = resultado;
    
    for (int j = i; j >= 0; j--)
    {
        if (DigitoHexa[j] == 10)
        {
            cout << "A";
        }
        else if (DigitoHexa[j] == 11)
        {
            cout << "B";
        }
        else if (DigitoHexa[j] == 12)
        {
            cout << "C";

        }
        else if (DigitoHexa[j] == 13)
        {
            cout << "D";

        }
        else if (DigitoHexa[j] == 14)
        {
            cout << "E";

        }
        else if (DigitoHexa[j] == 15)
        {
            cout << "F";

        }
        else
        {
            cout << DigitoHexa[j];

        }
    }
    cout << endl;
    return DigitoHexa;
    delete[] DigitoHexa;
    delete[] Hexa;

}
int contador_hex(int _ndecimal) {


    int* DigitoHexa = new int[20];
    int residuo, resultado, ndecimal;
    int i = 0;
    ndecimal = _ndecimal;

    do
    {
        residuo = ndecimal % 16;
        resultado = ndecimal / 16;
        DigitoHexa[i] = residuo;
        ndecimal = resultado;
        i++;
    } while (resultado > 15);
    DigitoHexa[i] = resultado;

    return i;
    delete[] DigitoHexa;
}
int contar_cifras(int _numero) {
    int num = 0;
    num = _numero;
    int cifras = 1;

    while (num >= 10) {
        num = num / 10;
        cifras++;
    }
    return cifras;
}
int Binario_Decimal(int _binario) {
    int binario = _binario;
    int resultado = 0, resto = 0;
    int* digito = new int[16];


    for (int i = 0; i < 16; i++) {

        digito[i] = binario % 10;
        binario /= 10;
    }

    for (int i = 15; i >= 0; i--) {
        resultado = (resto * 2) + digito[i];
        resto = resultado;

    }

    return resultado;
}
int hexadecimal_Decimal(string hexVal)
{
    int len = hexVal.size();

    // Initializing base value to 1, i.e 16^0
    int base = 1;

    int dec_val = 0;

    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;

            // incrementing base by power
            base = base * 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}