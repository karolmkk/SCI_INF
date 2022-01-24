#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
using namespace std;
class sortowanie
{
public:
	int w;
	int temp;
	vector <int> val;
	vector <int> bobelkowanie(vector <int>& liczby);
	vector <int> wstawienie(vector <int>& liczby);
	vector <int> wybor(vector <int>& liczby);
	void quicksort(int left, int right, vector<int>& vec);
	void show_value(vector <int>& liczby);
	int finding(vector <int>& liczby, int index);
	int recurtion(int left, int right, int index);
};

