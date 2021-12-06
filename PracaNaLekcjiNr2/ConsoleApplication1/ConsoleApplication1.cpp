#include <iostream>
#include <string>
#include <stdlib.h>
#include "szyfrowanie.h"
using namespace std;
string tekst;
int x;

int main()
{
	int wybor;
	szyfrowanie obj;
	cout << "napisz tekst, ktory chcesz zaszyfrowac:";
	getline(cin, tekst);

	cout << "twoj tekst: " << tekst << endl;
	cout << "ktory algorytm chcesz wybrac?\n1-szyfr cezara\n2-szyfr przestawieniowy\n3-oba szyfry\n4-odszyfruj kod\n";
		cin >> wybor;
		if (wybor == 1)
		{
			cout << obj.szyfr_cezara(tekst);
		}
		else if (wybor == 2)
		{
			cout << obj.szyfr_przestawieniowy(tekst);
		}
		else if (wybor == 3)
		{
			cout << obj.szyfr_przestawieniowy(obj.szyfr_cezara(tekst));
		}
		else if (wybor == 4)
		{

			for (int i = 0; i < 26; i++)
			{
				cout << obj.cofnij(tekst, i);
				cout << endl;
			}
		}
		else
		{
			cout << "nie wpisales odpowiedniej komendy.";
		}
		return 0;
	
}
