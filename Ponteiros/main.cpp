#include <iostream>

using namespace std;

void minhaFuncao(int *a, int *b, int *c){
    *a += 10;
    *b += 20;
    *c += 30;
}

int main()
{
    int a = 45, b = 81, c = 97;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    minhaFuncao(&a, &b, &c);
    cout << "Depois da \" minhaFuncao..." << endl;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    return 0;
}
