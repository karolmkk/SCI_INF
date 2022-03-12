#pragma once
class vector
{
public:
	unsigned int size;
	int* tab;
 	vector(unsigned int size) {
		this->size = size;
		tab = new int[size];
		for (int i = 0; i < size; i++) {
			tab[i] = 0;
		}
	}
	~vector() {
		delete[] tab;
	}
	
	void DodajElement(int value);
	void rozmiar(unsigned int size);
	void pokaz(unsigned int size);
	void UsunElement();
	void odczyt(int value);
	void insert(int value, int liczba);
	void remove(int value);

};

