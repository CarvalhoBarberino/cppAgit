#include <iostream>
#define ULTIMO_MES 12

const int ultimoMes = 12;

using namespace std;

int main()
{
    int mes = 5;

    if(mes == ULTIMO_MES){// O excesso de uso de uma variavel definida pelo #define gasta mais memoria
        //...
    }
    if(mes == ULTIMO_MES){// O excesso de uso de uma variavel definida pelo #define gasta mais memoria
        //...
    }
    if(mes == ULTIMO_MES){// O excesso de uso de uma variavel definida pelo #define gasta mais memoria
        //...
    }
    if(mes == ULTIMO_MES){// O excesso de uso de uma variavel definida pelo #define gasta mais memoria
        //...
    }

    if(mes == ultimoMes){// O excesso de uso de uma variavel definida pelo const gasta menos memoria
        //...
    }
    if(mes == ultimoMes){// O excesso de uso de uma variavel definida pelo const gasta menos memoria
        //...
    }
    if(mes == ultimoMes){// O excesso de uso de uma variavel definida pelo const gasta menos memoria
        //...
    }
    if(mes == ultimoMes){// O excesso de uso de uma variavel definida pelo const gasta menos memoria
        //...
    }

    return 0;
}
