#include <iostream>
#include <chrono>
#pragma once 
using namespace std;
class ListElement
{
public:
    int value;
    ListElement* nextElement;
};
class List
{
    ListElement* head, * tail;
public:
    List() {
        head = nullptr;
        tail = nullptr;
    }
    ~List() {

    }

void Add(int val) {
    ListElement* wsk = new ListElement();
    wsk->nextElement = nullptr;
    wsk->value = val;
    if (head == nullptr) {
        head = wsk;
        tail = wsk;
    }
    else if(head != nullptr){
        tail->nextElement = wsk;
        tail = tail->nextElement;
    }
}
void show() {
    ListElement* temp = head;
    while (temp) {

        cout << temp->value << " ";
        temp = temp->nextElement;
    }
    cout << "\n";
}
void remove() {
    ListElement* temp = head;
    ListElement* temp2;
    temp2 = temp->nextElement;

    while (temp2->nextElement) {
        temp = temp->nextElement; 
        temp2 = temp2->nextElement;
    }
    if (temp != nullptr) {
        delete[] temp2;
        temp->nextElement = nullptr;
        tail = temp;
    }
}
void Index(int val) {
    ListElement* temp = head;

    for (int i = 1; i < val; i++) {
        temp = temp->nextElement;
    }
    cout << temp->value << "\n";
}

};

int main()
{
    List obj;
    int val;
    int odp = 0;
    srand(time(NULL));
    while (true){
        cout << "1 - dodawanie wartosci do listy\n";
        cout << "2 - odejmowanie ostatniej wartosci od listy\n";
        cout << "3 -  pokazywanie danego indexu listy\n";
        cout << "4 - tworzeenie 10000 elementowej listy\n";
        cout << "5 - pokazywanie calej listy listy\n";

        cin >> odp;
        if (odp == 1) {
            cout << "Podaj wartosc wskaznika: \n";
            cin >> val;
            auto start = std::chrono::steady_clock::now();
            obj.Add(val);
            auto end = std::chrono::steady_clock::now();
            chrono::duration<double> elapsed_seconds = end - start;
            cout << "\nelapsed time: " << elapsed_seconds.count() << "s\n";
        }
        else if (odp == 2) {
            obj.remove();
        }
        else if (odp == 3) {
            cout << "PODAJ INDEX: ";
            cin >> val;
            auto start = std::chrono::steady_clock::now();
            obj.Index(val);
            auto end = std::chrono::steady_clock::now();
            chrono::duration<double> elapsed_seconds = end - start;
            cout << "\nelapsed time: " << elapsed_seconds.count() << "s\n";
        }
        else if (odp == 4) {
            auto start = std::chrono::steady_clock::now();
            for (int i = 0; i < 10000; i++) {
                val = rand() % 20000;
                obj.Add(val);

            }
            auto end = std::chrono::steady_clock::now();
            chrono::duration<double> elapsed_seconds = end - start;
            cout << "\nelapsed time: " << elapsed_seconds.count() << "s\n";
        }
        else if (odp == 5) {
            auto start = std::chrono::steady_clock::now();
            obj.show();
            auto end = std::chrono::steady_clock::now();
            chrono::duration<double> elapsed_seconds = end - start;
            cout << "\nelapsed time: " << elapsed_seconds.count() << "s\n";
        }
        else {
            cout << " ERROR\n";
        }
    }









}

