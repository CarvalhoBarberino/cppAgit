#include <iostream>

int minimo(int a, int b){
    return a > b ? b : a;
}
int maximo(int a, int b){
    return a < b ? b : a;
}
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c;

    c = minimo(a, b);
    cout << "O menor valor entre " << a << " e " << b << " = " << c << endl;

    c = maximo(a, b);
    cout << "O maior valor entre " << a << " e " << b << " = " << c << endl;
    return 0;
}
