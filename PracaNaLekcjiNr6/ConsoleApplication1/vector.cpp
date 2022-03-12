#include "vector.h"
#include <iostream>
using namespace std;



void vector::DodajElement(int value) {
	int* tab2 = new int[size + 1];
	for (int i=0;i<size;i++) {
		tab2[i] = tab[i];
	}
	delete[] tab;
	tab2[size] = value;
	size++;
	
	tab = tab2;
}

void vector::rozmiar(unsigned int size) {
	cout << "\n================\n";
	cout << "tablica ma " << size << " elemetow\n";
	cout << "================\n";
}
void vector::pokaz(unsigned int size) {
	for (int i = 0; i < size; i++) {
		cout << tab[i] << " ";
	}
}
void vector::UsunElement() {
	int* tab2 = new int[size - 1];
	for (int i = 0; i < size -1; i++) {
		tab2[i] = tab[i];
	}
	delete[] tab;
	size--;
	tab = tab2;
}
void vector::odczyt(int value) {
	if (value >= 0) {
		cout << "index nr " << value << ": " << tab[value];
	
	}
}
void vector::insert(int value, int liczba) {
	int* tab2 = new int[size + 1];
	for (int i = 0; i < value; i++) {
		tab2[i] = tab[i];
	}
	tab2[value] = liczba;
	for (int i = value; i < size; i++) {
		tab2[i + 1] = tab[i];
	}
	size++;
	tab = tab2;
}

void vector::remove(int value) {
	int* tab2 = new int[size - 1];
	for (int i = 0; i < value; i++) {
		tab2[i] = tab[i];
	}
	for (int i = value; i < size; i++) {
		tab2[i - 1] = tab[i];
	}
	size--;
	tab = tab2;
}

