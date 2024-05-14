/*
* Bloque 7. Cadenas de caracteres 
* 
* Ejercicio 2
* 
* Pedir al usuario una cadena de caracteres, almacenarla en 
* un arreglo y copiar todo su contenido hacia otro arreglo
* de caracteres.
* 
*/
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main() {

	char usuario[30];
	char Arreglo[20];

	cout << "\nDigite su nombre completo: ";
	cin.getline(usuario,20);

	strcpy_s(Arreglo,usuario);

	cout << "El arreglo de caracteres es: "<<Arreglo<<endl;



	cin.get();
	return 0;
}
