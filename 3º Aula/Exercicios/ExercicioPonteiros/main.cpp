#include <iostream>

using namespace std;

void dobrarValor(int *a, int *b, int *c)
{
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

void dobrarValor(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}


int main()
{
    int x = 10, y = 20, z = 30;
    //dobrarValor(&x, &y, &z);
    dobrarValor(x, y, z);
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "z: " << z << '\n';

    return 0;
}
