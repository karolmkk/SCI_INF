#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <chrono>
#include "sortowanie.h"
using namespace std;
sortowanie obj;



int main()
{
	
	
	int x = 0;
	int i;
	srand(time(NULL));
	for (i = 0; i < 1000; i++)
	{
		x = rand() % 10000;
		obj.val.push_back(x);
	}
	int odp;
	while (true) {
		cout << "------Choice_Answer-------\n1-show_value\n2-BubbleSort\n3-Instertion\n4-Selection\n5-QuickSort\n6-finding\n7-recurance_finding\n";
		cin >> odp;

		if (odp == 1) {
			obj.show_value(obj.val);
		}
		else if (odp == 2) {
			auto start = std::chrono::steady_clock::now();
			obj.bobelkowanie(obj.val);
			auto end = std::chrono::steady_clock::now();
			chrono::duration<double> elapsed_seconds = end - start;
			cout << "---BubbleSort---- \nElapsed time: " << elapsed_seconds.count() << " s\n";
		}
		else if (odp == 3) {
			auto start = std::chrono::steady_clock::now();
			obj.wstawienie(obj.val);
			auto end = std::chrono::steady_clock::now();
			chrono::duration<double> elapsed_seconds = end - start;
			cout << "----Insertion---- \nElapsed time: " << elapsed_seconds.count() << " s\n";
		}
		else if (odp == 4) {
			auto start = std::chrono::steady_clock::now();
			obj.wybor(obj.val);
			auto end = std::chrono::steady_clock::now();
			chrono::duration<double> elapsed_seconds = end - start;
			cout << "----Selection---- \nElapsed time: " << elapsed_seconds.count() << " s\n";
		}
		else if (odp == 5) {
			int s;
			s = obj.val.size() - 1;
			auto start = std::chrono::steady_clock::now();
			obj.quicksort(0, s, obj.val);
			auto end = std::chrono::steady_clock::now();
			chrono::duration<double> elapsed_seconds = end - start;
			cout << "----QuickSort---- \nElapsed time: " << elapsed_seconds.count() << " s\n";
		}
		else if (odp == 6) {
			cout << "wprowadz wartosc\n";
			cin >> obj.w;
			cout << "index nr: " << obj.finding(obj.val, obj.w) << endl;

		}
		else if (odp == 7) {
			int s;
			s = obj.val.size() - 1;
			cout << "wprowadz wartosc\n";
			cin >> obj.w;
			int w;
			w = obj.recurtion(0, obj.val.size() - 1, obj.w);
			cout << "liczba wywolan: " << obj.temp << endl;
			cout << "index nr : " << obj.recurtion(0, obj.val.size() - 1, obj.w) << endl;
			
		}
		else {
			cout << "ERROR" << endl;
		}


	}

}


