#include <iostream>
#include <vector>

using namespace std;

//Passagem de parametro por cópia
void imprimir(vector<int> v)
{
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << '\n';
}

//Passagem de parametro por endereço
//void imprimir(vector<int> *v)
//{
//    for(int i = 0, x = (*v).size(); i < x; ++i)
//        cout << (*v)[i] << '\n';
//}

//Passagem de parametro por endereço
void aumentar(int *a, int *b, int *c)
{
    *a += 10;
    *b += 20;
    *c += 30;
}

//Passagem de parametro por cópia
void aumentar(int a, int b, int c)
{
    a += 10;
    b += 20;
    c += 30;
}

struct Node
{
    int valor;
    Node *esquerda = nullptr;
    Node *direita  = nullptr;
};

enum class Tipo : char
{
    INT,
    DOUBLE,
    STRING
};

void imprimir(void *ponteiro, Tipo tipo)
{
    if(tipo == Tipo::INT)
        cout << *((int*)ponteiro) << '\n';
    else if(tipo == Tipo::DOUBLE)
        cout << *((double*)ponteiro) << '\n';
    else if(tipo == Tipo::STRING)
        cout << *((string*)ponteiro) << '\n';
}

void imprimir(int *a)
{
    if(a)
        cout << "*a: " << *a << '\n';
}

void imprimir(int a)
{
    cout << "a: " << a << '\n';
}

int main()
{
    imprimir(nullptr);







//    int a = 10;
//    double b = 20.5;
//    string c = "Herik";
//    imprimir(&a, Tipo::INT);
//    imprimir(&b, Tipo::DOUBLE);
//    imprimir(&c, Tipo::STRING);

//    int x = 0, y = 0, z = 0;
//    aumentar(x, y, z);
//    cout << "x: " << x << '\n';
//    cout << "y: " << y << '\n';
//    cout << "z: " << z << '\n';

//    vector<int> x;
//    x.resize(100, 0);
//    imprimir(&x);

    return 0;
}
