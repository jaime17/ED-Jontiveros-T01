#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "BinClass.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
	BinClass os;
	cout << "Ingrese el tamano del arreglo: " << endl;
	int tam;
	cin >> tam;
	os.setArray(os.RandArray(tam));
	cout << "Se mostrara el arreglo" << endl;
	os.showArray();
	cout << "Se ordenara el arreglo" << endl;
	int inicio = 0;
	int fin = sizeof(os.getArray()) - 1;
	os.mergeSort(os.getArray(), inicio, fin);
	os.showArray();
	cout << "Ingrese el numero cuya posicion desea conocer: " << endl;
	cin >> tam;
	int p = os.bFetch(tam);
	os.showFetch(p);


	system("pause");
	return 0;
}
