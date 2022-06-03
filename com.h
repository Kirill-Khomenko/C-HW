#ifndef COM_H_INCLUDED
#define COM_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

class complex
{
public:
    double re, im;
    complex(){re = 0; im = 0;}
    complex(double re, double im){this->re = re; this->im = im;}
    complex (complex &c){re = c.re; im = c.im;}
    ~complex() {}
    void print();
    complex operator + (complex &c);
    complex operator - (complex &c);
    complex operator * (complex &c);
    complex operator * (int a);
    complex operator / (complex &c);
    complex operator / (int a);
    complex & operator = (complex);
    complex sqrt_complex(complex &c);
    friend std::istream& operator >>(std::istream&, complex&);
    friend std::ostream& operator << (std::ostream&, const complex&);
};


#endif // COM_H_INCLUDED
