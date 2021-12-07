#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>
#include "klucze.h"
using namespace std;
int main() {

	klucze obj;
	pair <int, int> publiczny(obj.robienie_n(obj.n), 7);
	publiczny.first = obj.robienie_n(obj.n);
	publiczny.second = 7;
	
	cout << "p: " << obj._p(obj.p) << endl;
	cout << "q: " << obj.q_(obj.q) << endl;
	cout << "yn: " << obj.robienie_eulera(obj.eul) << endl;
	cout << "[KLUCZ PUBLICZNY]:" << endl;
	cout << "n: " << publiczny.first << endl;
	cout << "e: " << publiczny.second << endl;

	pair <int, int> prywatny(obj.generowanie_d(obj.d), obj.robienie_n(obj.n));;
	publiczny.first = obj.generowanie_d(obj.d);
	publiczny.second = obj.robienie_n(obj.n);
	cout << "[KLUCZ PRYWATNY]:" << endl;
	cout << "d: " << prywatny.first << endl;
	cout << "n: " << prywatny.second << endl;


}