#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream finp;
    ofstream fout;

    finp.open("double.txt");

    double a;
    int sz = 0;
    while (true) {
        finp >> a;
        finp.ignore(256, ';');
        sz++;
        if (!finp.good())
            break;
    }

    finp.close();
    finp.open("double.txt");

    int i = 0;
    double *arr = new double[sz];
    while (true) {
        finp >> a;
        *(arr + i) = a;
        i++;
        if (!finp.good())
            break;
        finp.ignore(256, ';');

    }

    finp.close();
    fout.open("output.txt");

    for (int i = 0; i < sz; i++) {
        if ((*(arr + i) >= -1) && (*(arr + i) <= 1)){
        fout << scientific << asin(*(arr + i)) << endl;
        }
    }

    fout.close();
    delete [] arr;

    return 0;
}
