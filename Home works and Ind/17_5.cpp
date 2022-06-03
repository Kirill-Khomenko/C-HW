#include <iostream>
#include <string>
#include <cmath>
#include <exception>
#define N 100
using namespace std;

class IntegerError: public logic_error {

public:
    IntegerError(string message): logic_error(message) {}
};


class OverflowError: public IntegerError {

public:
    OverflowError(): IntegerError("Overflow") {}
};


class ZeroDenominatorError: public IntegerError {

public:
    ZeroDenominatorError(): IntegerError("Zero denominator!") {}

};


class Three_byte_integer {

private:

    long integer;

public:

    explicit Three_byte_integer(long integer) {
        if(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1))
            this->integer = integer;
        else
            throw OverflowError();
    }
    Three_byte_integer(): Three_byte_integer(0) {}


    void print(ostream& out = cout) {
        out << integer;
    }

    void input(istream& inp = cin) {
        long integer = 0;
        inp >> integer;
        if(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1))
            this->integer = integer;
        else
            throw OverflowError();
    }

    void add(const Three_byte_integer& other) {
        integer = integer + other.integer;
        if(!(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1)))
            throw OverflowError();
    }

    void sub(const Three_byte_integer& other) {
        integer = integer - other.integer;
        if(!(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1)))
            throw OverflowError();
    }

    void multiply(const Three_byte_integer& other) {
        integer = integer * other.integer;
        if(!(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1)))
            throw OverflowError();

    }

    void division(const Three_byte_integer& other) {
        integer = integer / other.integer;
        if(!(integer >= pow(-2, 23) && integer <= (pow(2, 23) - 1)))
            throw OverflowError();
        if(other.integer == 0)
            throw ZeroDenominatorError();
    }

    Three_byte_integer operator+(const Three_byte_integer& other) {
        Three_byte_integer result(*this);
        result.add(other);
        return result;
    }

    Three_byte_integer operator-(const Three_byte_integer& other) {
        Three_byte_integer result(*this);
        result.sub(other);
        return result;
    }

    Three_byte_integer operator*(const Three_byte_integer& other) {
        Three_byte_integer result(*this);
        result.multiply(other);
        return result;
    }

    Three_byte_integer operator/(const Three_byte_integer& other) {
        Three_byte_integer result(*this);
        result.division(other);
        return result;
    }

};

int main() {

    int m;
    cout << "Enter m: ";
    cin >> m;
    Three_byte_integer* arr = new Three_byte_integer[N];
    int k = 0;
    Three_byte_integer suma;
    while (k < m) {
        try {
            cout << "Enter" << ends << k+1 << ends << "integer: " << endl;
            arr[k].input();
            suma = suma + arr[k];
        }
        catch (OverflowError& e) {
            cout << e.what() << endl;
            continue;
        }
        catch (IntegerError& e) {
            cout << e.what() << endl;
            break;
        }
        catch (exception& e) {
            cout << e.what() << endl;
            break;
        }
        catch (...) {
            cout << "Unknown exception was caught" << endl;
            break;
        }
        k++;

    }

    cout << endl << "Suma: ";
    suma.print();

    cout << endl << endl;



    int n;
    cout << "Enter n: ";
    cin >> n;
    Three_byte_integer x;
    try {
        cout << "Enter Three Byte Integer: ";
        x.input();
        Three_byte_integer tmp_x = x;
        for (int i = 1; i < n; i++) {
            x = x * tmp_x;
        }
        x.print();
    }
    catch (OverflowError& e) {
        cout << e.what() << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "Unknown exception was caught" << endl;
    }

    return 0;
}
