#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
string tekst;
int wybor;
int x;

string szyfr_cezara(string tekst, int x)
{
	
		cout << "podaj wspolczynnik przesuniecia: ";
		cin >> x; 

		if (x < 26) 
		{
			if (x > 0)
			{
					for (int i = 0; i <= tekst.length(); i++) 
			
				if (tekst[i] >= 65 && tekst[i] <= 90 - x) tekst[i] = int(tekst[i]) + x; 
				else if (tekst[i] >= 91 - x && tekst[i] <= 90) tekst[i] = int(tekst[i]) - 26 + x; 
				else if (tekst[i] >= 97 && tekst[i] <= 122 - x) tekst[i] = int(tekst[i]) + x; 
				else if (tekst[i] >= 123 - x && tekst[i] <= 122) tekst[i] = int(tekst[i]) - 26 + x; 
			}

			return tekst;


		}
		
}

string szyfr_przestawieniowy(string tekst) {
	string szyfr(tekst.length(), '.');
	for (int i = 0; i < tekst.length(); i++) {
		if (i % 2 == 0) {
			szyfr[i + 1] = tekst[i];
		}
		else if (i % 2 == 1) {
			szyfr[i - 1] = tekst[i];
		}
	}
	if (tekst.length() % 2 == 1) {
		szyfr[tekst.length() - 1] = tekst[tekst.length() - 1];
	}
	return szyfr;
}


string poloczenie(string tekst) {
	tekst = szyfr_przestawieniowy(tekst);
	return szyfr_cezara(tekst, x);
}
string cof_przes(string tekst) {
	string szyfr(tekst.length(), '.');
	for (int i = 0; i < tekst.length(); i++) {
		if (i % 2 == 0) {
			szyfr[i] = tekst[i + 1];
		}
		else if (i % 2 == 1) {
			szyfr[i] = tekst[i - 1];
		}
	}
	if (tekst.length() % 2 == 1) {
		szyfr[tekst.length() - 1] = tekst[tekst.length() - 1];
	}
	return szyfr;
}


string cofanie_skracania(string tekst, int x) {
	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] > 123 || tekst[i] < 96) {
			tekst[i] = tekst[i];
		}
		else if (tekst[i] - x < 97) {
			tekst[i] = tekst[i] - x + 26;
		}
		else {
			tekst[i] = tekst[i] - x;
		}
	}
	return tekst;
}





string cofnij(string tekst, int x) {
	if (x == 0) {
		return cof_przes(tekst);
	}
	string odszyfrowanie = cofanie_skracania(tekst, x) + "     " + cof_przes(cofanie_skracania(tekst, x)); ;
	return odszyfrowanie;
}
int main()
{

	cout << "napisz tekst, ktory chcesz zaszyfrowac:";
	getline(cin, tekst);

	cout << "twoj tekst: " << tekst << endl;
	cout << "ktory algorytm chcesz wybrac?\n1-szyfr cezara\n2-szyfr przestawieniowy\n3-oba szyfry\n4-odszyfruj kod\n";
	while (true)
	{
		cin >> wybor;

		if (wybor == 1)
		{
			cout << szyfr_cezara(tekst, x);




		}
		else if (wybor == 2)
		{
			cout << szyfr_przestawieniowy(tekst);




		}
		else if (wybor == 3)
		{


			cout << szyfr_przestawieniowy(szyfr_cezara(tekst, x));


		}
		else if (wybor == 4)
		{

			for (int i = 0; i < 26; i++)
			{
				cout << cofnij(tekst, i);
				cout << endl;
			}



		}
		else
		{
			cout << "nie wpisales odpowiedniej komendy.";
		}


	}
}