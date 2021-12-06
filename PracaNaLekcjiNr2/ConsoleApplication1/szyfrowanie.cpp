#include <iostream>
#include <string>
#include <stdlib.h>
#include "szyfrowanie.h"
using namespace std;
string szyfrowanie::szyfr_cezara(string tekst)
{
	cout << "podaj wspolczynnik przesuniecia: ";
	cin >> x;
	if (x < 26)
	{
		if (x > 0)
		{
			for (int i = 0; i <= tekst.length(); i++) {

				if (tekst[i] >= 65 && tekst[i] <= 90 - x) tekst[i] = int(tekst[i]) + x;
				else if (tekst[i] >= 91 - x && tekst[i] <= 90) tekst[i] = int(tekst[i]) - 26 + x;
				else if (tekst[i] >= 97 && tekst[i] <= 122 - x) tekst[i] = int(tekst[i]) + x;
				else if (tekst[i] >= 123 - x && tekst[i] <= 122) tekst[i] = int(tekst[i]) - 26 + x;
			}
		}
		return tekst;
	}
}
string szyfrowanie::szyfr_przestawieniowy(string tekst) {
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
string szyfrowanie::poloczenie(string tekst) {
	tekst = szyfr_przestawieniowy(tekst);
	return szyfr_cezara(tekst);
}
string szyfrowanie::cofanie_przestawieniowe(string tekst) {
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
string szyfrowanie::cofanie_skracania(string tekst, int x) {
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
string szyfrowanie::cofnij(string tekst, int x) {
	if (x == 0) {
		return cofanie_przestawieniowe(tekst);
	}
	string odszyfrowanie = cofanie_skracania(tekst, x) + "     " + cofanie_przestawieniowe(cofanie_skracania(tekst, x)); ;
	return odszyfrowanie;
}