#include<iostream>//libreria para la entrada y salidas de datos
#include"Bienvenida.h"
using namespace std;//para ya no estar utilizando std:: antes de cada cin y cout
int main() {//Funcion Principal
	

	
	Bienvenida* v1 = new Bienvenida();
	v1->imprimir();

	return 0;
}