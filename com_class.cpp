#include "com.h"

//Separate method for outputting a complex number
void complex :: print()
{
    if(im < 0)
      if(im == -1)
         cout << re << "-i" << endl;
      else
         cout << re << im << "i" << endl;
      else
         if(im == 1)
            cout << re << "+i"<< endl;
         else
            cout << re << "+" << im << "i" <<endl;
}

//Operator + overloading
complex complex :: operator + (complex &c)
{
    complex res;
    res.re = re + c.re;
    res.im = im + c.im;
    return res;
}

//Operator - overloading
complex complex :: operator - (complex &c)
{
    complex res;
    res.re = re - c.re;
    res.im = im - c.im;
    return res;
}

//Operator * overloading
complex complex :: operator * (complex &c)
{
    complex res;
    res.re = re * c.re - im * c.im;
    res.im = re * c.im + c.re * im;
    return res;
}

//Operator * (on integer) overloading
complex complex :: operator * (int a)
{
    complex res;
    res.re = a*re;
    res.im = a*im;
    return res;
}

//Operator / overloading
complex complex :: operator / (complex &c)
{
    complex res;
    res.re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
    res.im = (c.re * im - re * c.im) / (c.re * c.re + c.im * c.im);
    return res;
}

//Operator / (on integer) overloading
complex complex :: operator / (int a)
{
    complex res;
    res.re = re/a;
    res.im = im/a;
    return res;
}

//Operator = overloading
complex& complex :: operator = (complex c)
{
    re = c.re;
    im = c.im;
    return *this;
}

//Operator << overloading
ostream &operator<<(ostream &out, const complex &c)
{
    out << c.re;
    if (c.im != 0){
        if( c.im > 0 )
            out << "+";
        out << c.im << "i";
    }
    return out;
}

//Operator >> overloading
istream &operator >> (istream& in, complex& c)
{
    cout << "Input real part : ";
    in >> c.re;
    cout << "Input imaginary part : ";
    in >> c.im;
    return in;
}

