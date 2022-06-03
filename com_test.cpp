#include "com_class.cpp"

int main()
{
    cout << "//////////////////////////////////////////////////////////////////" << endl;
    complex test1_a(125, 3);
    complex test1_b(13, -1);
    cout << "TEST 1 : by data entry in the main code." << endl << endl;
    cout << "Method test a.print() : "; test1_a.print();
    cout << "Method test b.print() : "; test1_b.print(); cout << endl;
    cout << "Reload Method '+' : " << test1_a + test1_b << endl;
    cout << "Reload Method '-' : " << test1_a - test1_b << endl;
    cout << "Reload Method '*' : " << test1_a * test1_b << endl;
    cout << "Reload Method '/' : " << test1_a / test1_b << endl;
    test1_a = test1_b;
    cout << "Reload Method '=' : " << test1_a << "=" << test1_b << endl;
    return 0;
}
