#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
vector <int> bobelkowanie(vector <int> liczby) {

	for (int d = 0; d < liczby.size(); d++) {

		for (int j = 1; j < liczby.size() - d; j++) {
			if (liczby[j - 1] > liczby[j]) {
				swap(liczby[j - 1], liczby[j]);
			}
		}
	}

	return liczby;
}
vector <int> wstawienie(vector <int> liczby) {
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
int main()
{	
	vector <int> liczby;
	int x = 0;
	int i;
	int odp;
	srand(time(NULL));
	for (i = 0; i < 10000; i++)
	{
		x = rand() % 10000000;
		liczby.push_back(x);
	}
	auto start = std::chrono::steady_clock::now();
	bobelkowanie(liczby);
	auto end = std::chrono::steady_clock::now();
	chrono::duration<double> elapsed_seconds = end - start;
	cout << "-----bubble------ : " << elapsed_seconds.count() << " s\n";


	start = std::chrono::steady_clock::now();
	wstawienie(liczby);
	end = std::chrono::steady_clock::now();
	elapsed_seconds = end - start;
	cout << "----insertion---- : " << elapsed_seconds.count() << " s\n";
}

