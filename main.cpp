#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <math.h>
using namespace std;

int main()
{
    string pasisveikinimas;
    string vardas;
    string rem1, rem2, rem3, rem4, rem5;
    cout << "Iveskite varda: ";
    cin >> vardas;
    int ilg = vardas.length();
    if (vardas[ilg-1]=='a')
    {
        pasisveikinimas = " Sveika, ";
    }
        else pasisveikinimas = " Sveikas, ";
    pasisveikinimas += vardas+"!";
///////////////////////////////////////////////////
    rem1 = ""; rem2 = "*"; rem3 = "*"; rem4 = "*"; rem5 = "";
    for (int i = 0; i < pasisveikinimas.length()+3; i++, rem1 += "*", rem5 += "*")
    {
        if ( i == pasisveikinimas.length())
        {
            rem2 += " *"; //antros eilutes galas
            rem4 += " *"; //ketvirtos eilutes galas
        }
        else
        {
            rem2 += " "; //jeigu eilutes tai ne galas, dedami tarpai 2-oj ir 4-oj eilutej
            rem4 += " ";
        }
    }
    rem3 += pasisveikinimas + " *";
    cout << rem1 << endl; cout << rem2 << endl; cout << rem3 << endl; cout << rem4 << endl; cout << rem5 << endl;
    return 0;
}

