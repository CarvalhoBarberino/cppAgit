#include <vector>
#include <iostream>

using namespace std;

//Passagem de parametro por cópia - C/C++
//void imprimir(vector<int> v)
//{
//    for(int i = 0; i < v.size(); ++i)
//        cout << v[i] << '\n';
//}

//Passagem de parametro por endereço - C/C++
//void imprimir(vector<int> *v)
//{
//    for(int i = 0, x = (*v).size(); i < x; ++i)
//        cout << (*v)[i] << '\n';
//}

//Passagem de parametro por referencia - C++
void imprimir(vector<int> &v)
{
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << '\n';

    cout << "&v: " << &v << '\n';
}

//Passagem de parametros por rvalue - C++ 11 >
//void imprimir(vector<int> &&v)
//{
//    for(int i = 0; i < v.size(); ++i)
//        cout << v[i] << '\n';

//    cout << "&v: " << &v << '\n';
//}

int main()
{
    vector<int> x;
    x.resize(100, 0);
    imprimir(x);
    cout << "&x: " << &x << '\n';
    return 0;
}
