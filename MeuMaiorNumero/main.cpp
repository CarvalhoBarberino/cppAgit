#include <iostream>

using namespace std;

inline int maior(int a, int b){
    return a > b ? a : b;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = maior(a, b);
    cout << "O maior entre " << a << " e " << b << " é " << c << endl;
    return 0;
}
