// 1_Apuntadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main( int argc, char** argv )
{
	//si el programa fue lanzado con argumentos..
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::cout << argv[i] << "\n";
			//toda acadena de texto termina con un /0
			int j = 0;
			int value = 0;
			std::cout << " "; 

			// argv[0][0]  


			do
			{
				value = (int)argv[i][j];
				std::cout << argv[i][j] << " = " << value << " 0x" << std::hex << value << "\n ";
				j++;
			} while (argv[i][j] != 0 );	


			std::cout << "\n";

		}
	}
	else
	{
		std::cout << "No se dieron argumentos. Cerrando\n";
	}

	//ejercicio 2 de apuntadores
	//forma C de asignar memoria 
	//int* x = (int*) malloc(sizeof(int));
	// forma C++ de asignar memoria
	int* x = new int;

	*x = 99;
	std::cout << "sizeof int " << sizeof(int) << "\n";
	std::cout << " x :" << *x << " en " << x  << "\n";

	*x = 'k';
	std::cout << "sizeof int " << sizeof(int) << "\n";
	std::cout << " x :" << *x << " en " << x << "\n";
	
	*(x + 1) = 18;
	std::cout << " x+1 :" << *(x+1) << " en " << x+1 << "\n";

	//arreglo de 100 enteros
	int* y = new int[100];
	memset(y, 0, 100*sizeof(int));

	//generar una lista de 100 enteros aleatorios
	int* acumulador = new int;
	*acumulador = 0;
	for (int i = 0; i < 100; i++)
	{
		y[i] = rand();
		std::cout << " y[" << i << "] = " << *(y+i) << "\n";
		*acumulador += y[i];
	}
	float promedio = *acumulador / 100.0;
	std::cout << " prmedio = " << promedio << "\n";
	return 0;
}
