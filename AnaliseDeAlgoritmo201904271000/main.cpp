#include <iostream>

using namespace std;

int potenciaDeDoisLenta(int expoente){
    //Complexidade: 1 + 1 + n + n + n + 1 = 3 + 3n
    int r = 1;
    for(int i = 0; i < expoente; ++i)
        r = r * 2;
    return r;
}

int potenciaDeDoisRapida(int expoente){
    //Complexidade: 1 + 1 + 1 = 3
    return 2 << (expoente - 1);
}

int main()
{
    for(int i = 0; i <= 8; ++i){
        cout << "2^" << i << " = " << potenciaDeDoisRapida(i) << endl;
    }
    return 0;
}
