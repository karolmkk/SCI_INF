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
	int left;
	int right;
	vector <int> liczby;
	vector <int> bobelkowanie(vector <int> liczby);
	vector <int> wstawienie(vector <int> liczby);
	vector <int> wybor(vector <int> liczby);
	void quicksort(int left, int right, vector<int>& vec);

};

