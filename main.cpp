#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <math.h>
using namespace std;
struct Objektas
{
    string pasisveikinimas;
    string vardas;
    int plot;
    void nusk()
    {
    cout << "Iveskite varda: ";
    cin >> vardas;
    cout << "Iveskite lentele ploti : ";
    cin >> plot;
    int ilg = vardas.length();
    if (vardas[ilg-1]=='a')
    {
        pasisveikinimas = " Sveika, ";
    }
        else pasisveikinimas = " Sveikas, ";
    pasisveikinimas += vardas+"!";
///////////////////////////////////////////////////
    for (int i = 0; i < pasisveikinimas.length() + 3 ; i++) cout <<"*";
    cout << endl;
    for (int i = 0; i < plot; i++) {
        if (i == plot / 2)
            cout << "*" + pasisveikinimas + " *" << endl;
        else {
            cout << "*";
            for (int j = 0; j < pasisveikinimas.length(); j++) cout <<" ";
            cout << " *" << endl;
        }
    }
    for (int i = 0; i < pasisveikinimas.length() + 3; i++) cout <<"*";
    cout << endl;
}
};
int main()
{
    Objektas V1;
    V1.nusk();
    return 0;
}

