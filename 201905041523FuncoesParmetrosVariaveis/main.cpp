#include <iostream>
#include <stdarg.h>
#include <stdio.h>

//using namespace std;

//int soma (int nParam, ...){
//    va_list lista;
//    va_start(lista, nParam);
//    int result = 0;
//    for(int i = 0; i < nParam; ++i){
//        result += va_arg(lista, int);
//    }
//    va_end(lista);
//    return result;
//}

//int main()
//{
//    cout << soma(3, 40, 60, 50);
//    return 0;
//}


using namespace std;

template<typename A>
int soma (A...){
    
}

int main()
{
    cout << soma(3, 40, 60, 50);
    return 0;
}
