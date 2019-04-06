#include <iostream>

using namespace std;

void dobrarPorPonteiros(int *a, int *b, int *c){
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

void dobrarPorReferencia(int &a, int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{



    int a, b, c;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terçeiro numero: ";
    cin >> c;
    //dobrarPorPonteiros(&a, &b, &c);
    dobrarPorReferencia(a, b, c);
    cout << a << endl << b << endl << c << endl;

    //Exemplo de uso de referencia{
//    int universidade = 1;
//    int &USP = universidade;
//    cout << "universidade: " << universidade << endl;
//    cout << "&universidade: " << &universidade << endl;
//    cout << "USP: " << USP << endl;
//    cout << "&USP: " << &USP << endl;
    //}



    return 0;
}
