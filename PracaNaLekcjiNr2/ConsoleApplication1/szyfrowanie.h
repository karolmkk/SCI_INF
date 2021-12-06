#pragma once
using namespace std;
class szyfrowanie
{	
public:
	int x;
	string tekst;
	string szyfr_cezara(string tekst);
	string szyfr_przestawieniowy(string tekst);
	string poloczenie(string tekst);
	string cofanie_przestawieniowe(string tekst);
	string cofanie_skracania(string tekst, int x);
	string cofnij(string tekst, int x);
};

