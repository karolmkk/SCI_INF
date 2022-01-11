#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
#include <algorithm>
#include "sortowanie.h"
using namespace std;

int main()
{
	vector <int> val;
	sortowanie obj;
	int x = 0;
	int i;
	srand(time(NULL));
	for (i = 0; i < 20000; i++)
	{
		x = rand() % 200000;
		val.push_back(x);
	}

	auto start = std::chrono::steady_clock::now();
	obj.bobelkowanie(val);
	auto end = std::chrono::steady_clock::now();
	chrono::duration<double> elapsed_seconds = end - start;
	cout << "---BubbleSort---- \nElapsed time: " << elapsed_seconds.count() << " s\n";

	start = std::chrono::steady_clock::now();
	obj.wstawienie(val);
	end = std::chrono::steady_clock::now();
	elapsed_seconds = end - start;
	cout << "----Insertion---- \nElapsed time: " << elapsed_seconds.count() << " s\n";

	start = std::chrono::steady_clock::now();
	obj.wybor(val);
	end = std::chrono::steady_clock::now();
	elapsed_seconds = end - start;
	cout << "----Selection---- \nElapsed time: " << elapsed_seconds.count() << " s\n";
	
	int s;
	s = val.size() - 1;
	start = std::chrono::steady_clock::now();
	obj.quicksort(0,s, val);
	end = std::chrono::steady_clock::now();
	elapsed_seconds = end - start;
	cout << "----QuickSort---- \nElapsed time: " << elapsed_seconds.count() << " s\n";

}


