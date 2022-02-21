#include "sortowanie.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;



vector <int> sortowanie::bobelkowanie(vector <int>& liczby) {

	for (int d = 0; d < liczby.size(); d++) {

		for (int j = 1; j < liczby.size() - d; j++) {
			if (liczby[j - 1] > liczby[j]) {
				swap(liczby[j - 1], liczby[j]);
			}
		}
	}
	return liczby;
}
vector <int> sortowanie::wstawienie(vector <int>& liczby) {
	int pom, j;
	for (int i = 1; i < liczby.size(); i++)
	{
		pom = liczby[i];
		j = i - 1;
		while (j >= 0 && liczby[j] > pom)
		{
			liczby[j + 1] = liczby[j];
			--j;
		}
		liczby[j + 1] = pom;
	}
	return liczby;
}
vector <int> sortowanie::wybor(vector <int>& liczby) {
	int index;
	for (int i = 0; i < liczby.size() - 1; i++)
	{
		index = i;
		for (int j = i + 1; j < liczby.size(); j++)
			if (liczby[j] < liczby[index])
				index = j;
		swap(liczby[i], liczby[index]);
	}
	return liczby;
}
void sortowanie::quicksort(int left, int right, vector<int>& vec) {
	int i = (left + right) / 2;
	int piwot = vec[i];
	vec[i] = vec[right];
	int j = left;
	for (int i = left; i < right - 1; i++)
	{
		if (vec[i] < piwot)
		{
			int temp = vec[i];
			vec[i] = vec[j];
			vec[j] = temp;
			j++;
		}
	}
	vec[right] = vec[j];
	vec[j] = piwot;
	if (left < j - 1) {
		quicksort(left, j - 1, vec);
	}
	if (j + 1 < right) {
		quicksort(j + 1, right, vec);
	}

}
void sortowanie::show_value(vector <int>& liczby) {
	for (int i = 0; i < liczby.size(); i++) {
		cout  << liczby[i] << "      ";
	}
	cout << endl;
}
int sortowanie::finding(vector <int>& liczby, int index) {
	for (int i = 0; i < liczby.size();) {
		if (liczby[i] == w) {
			index = i + 1;
			return index;
		}
		else {
			i++;
		}
	}
}
int sortowanie:: recurtion(int left, int right, int index) {
	int mid = (left + right) / 2;
	temp++;
	if (right < left) {
		return -1;
	}
	else if (val[mid] == index) {
		return mid;
	}
	else if (val.at(mid) < index) recurtion(mid + 1, right, index);
	else if (val.at(mid) > index) recurtion(left, mid - 1, index);
}



