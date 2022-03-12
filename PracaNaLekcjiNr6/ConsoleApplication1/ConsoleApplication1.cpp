#include <iostream>
#include "vector.h"
using namespace std;




int main()
{
	cout << "napisz rozmiar tablicy: \n";
	int givensize = 0;
	cin >> givensize;
	vector obj(givensize);
	obj.pokaz(obj.size);
	int value;
	cout << "\ndodaj wartosc do tablicy:";
	cin >> value;
	obj.DodajElement(value);
	obj.rozmiar(obj.size);
	obj.pokaz(obj.size);
	cout << "\nodejmie  wartosc do tablicy:";
	obj.UsunElement();
	obj.rozmiar(obj.size);
	obj.pokaz(obj.size);
	int index = 0;
	cout << "\npodaj index:";
	cin >> index;
	obj.odczyt(index);
	cout << "\n==============";
	cout << "\ndodawanie";
	cout << "\n==============\n";
	cout << "\npodaj index:";
	int val;
	cin >> value;
	cout << "\npodaj liczbe";
	int liczba;
	cin >> liczba;
	obj.insert(value, liczba);
	obj.rozmiar(obj.size);
	obj.pokaz(obj.size);
	cout << "\n==============";
	cout << "\nodejmowanie";
	cout << "\n==============";
	cout << "\npodaj index:";
	int index2;
	cin >> index2;
	obj.remove(index2);
	obj.rozmiar(obj.size);
	obj.pokaz(obj.size);
	

	



	



	
	



	
}

