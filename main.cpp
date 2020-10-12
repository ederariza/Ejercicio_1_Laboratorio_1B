
/*
Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
*/

#include <iostream>
#include <string.h>

using namespace std;

char otraforma(char letra);

int main(){

    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' ||  letra == 'o' || letra == 'O' ||  letra == 'u' || letra == 'U')
        cout << letra << " es una vocal" << endl;

    else if ((letra >= 'A' && letra <='Z') || (letra >= 'a' && letra <='z'))
        cout << letra << " es una consonante" << endl;

    else
        cout <<"No es una letra" << endl;

    otraforma(letra); //Funcion otra forma de hacer el ejercicio

    return 0;

}


char otraforma(char letra){

    char arreglo[] = "AEIOU";
    string valor;

    if ((letra >= 'A' && letra <='Z') || (letra >= 'a' && letra <='z'))

        for (int i = 0; i <= static_cast<int>(strlen(arreglo)); i++){
            if (letra == arreglo[i] || letra == arreglo[i] + ('a' - 'A')){
                valor = "vocal";
                cout << letra << " es una " << valor << endl;
                break;
            }

            else{

                 if (i ==static_cast<int>(strlen(arreglo)) ){
                     valor = "consonante";
                     cout << letra << " es una " << valor << endl;
                     break;
                 }
            }
    }

    else
         cout <<  "No es una letra" << endl;

    return 0;
}
