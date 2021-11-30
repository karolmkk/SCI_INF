#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <utility>
#include "klucze.h"
using namespace std;
int main() {
	int a, b;
	printf("[wprowadz p]:");
	pair <int, int> klucz;
	klucze nazwa;
	klucz=nazwa.klucz_publiczny();
	cout << "n: " << klucz.first << endl;
	cout << "e: " << klucz.second << endl;

}


