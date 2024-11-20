// 9.1 Dynamic Array 2-3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Pregunta por numeros y cada que se añade se pone en el arrey en orden

#include <iostream>
#include <string>
using namespace std;

class Array
{
public:
	int* num = new int [1]{ 0 }; //Array como puntero
	int capacidad = 1;

	void resize(int newNum)
	{
		//Nueva capacidad
		int new_cap = capacidad + 1;
		//Crear nuevo array
		int* nuevo = new int[new_cap];

		//Copiar els numeros existents
		for (int i = 0; i < capacidad; i++)
		{
			nuevo[i] = num[i];
		}

		//Borrar el antiguo y actualizar
		delete[] num;
		num = nuevo;
		capacidad = new_cap;
	}
	void print()
	{
		cout << "\nArray:\n";
		for (int i = 0; i <= capacidad; i++)
		{
			cout << num[i] << "-";
		}
	}
};
int main()
{
	Array a;
	int num;
	while (true)
	{
		cout << "\nIntroduce un numero: "; cin >> num;
		a.resize(num);
		a.print();
	}

	int cap = 0;
	

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
