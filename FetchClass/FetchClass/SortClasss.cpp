#include "stdafx.h"
#include "SortClasss.h"


SortClasss::SortClasss()
{
}

void SortClasss::selection(int a[]) {
	int menor, auxiliar;
	for (int i = 0; i < sizeof(a); i++) {
		menor = i;
		for (int j = i + 1; j < sizeof(a); j++) {
			if (a[j] < a[menor]) {
				menor = j;
			}
		}
		auxiliar = a[i];
		a[i] = a[menor];
		a[menor] = auxiliar;
	}
}

void SortClasss::insertion(int a[]) {
	int temp, j;
	for (int i = 1; i < sizeof(a); i++) {
		temp = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}

void SortClasss::bubble(int a[]) {
	int temp;
	for (int i = 1; i < sizeof(a); i++) {
		for (int j = 0; j < sizeof(a) - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


void SortClasss::quickSort(int a[], int inicio, int fin) {  
	int i = inicio;
	int j = fin;
	int pivote = a[inicio + fin] / 2;

	do {
		while (a[i] < pivote) {
			i++;
		}
		while (a[j] > pivote) {
			j--;
		}
		if (i <= j) {
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (inicio < j) {
		quickSort(a, inicio, j);
	}
	if (i < fin) {
		quickSort(a, i, fin);
	}
}

void SortClasss::mergeSort(int arr[], int inicio, int fin) {
	if (inicio < fin) {
		int mitad = (inicio + fin) / 2;
		mergeSort(arr, inicio, mitad);
		mergeSort(arr, mitad + 1, fin);

		merge(arr, inicio, mitad, fin);
	}
}

void SortClasss::merge(int arr[], int inicio, int mitad, int fin) {
	int* helper = new int[sizeof(arr)];

	for (int i = inicio; i <= fin; i++) { 
		helper[i] = arr[i];
	}

	int i = inicio;
	int j = mitad + 1;
	int k = inicio;

	while (i <= mitad && j <= fin) {
		if (helper[i] <= helper[j]) {
			arr[k] = helper[i];
			i++;
		}
		else {
			arr[k] = helper[j];
			j++;
		}
		k++;
	}
	while (i <= mitad) {
		arr[k] = helper[i];
		k++;
		i++;
	}
}

SortClasss::~SortClasss()
{
}