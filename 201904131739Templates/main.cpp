#include <iostream>

using namespace std;

template<class TIPO_GENERICO> TIPO_GENERICO minimo(TIPO_GENERICO x, TIPO_GENERICO y){
    return x<y ? x : y;
}

template<class TIPO_GENERICO> TIPO_GENERICO maximo(TIPO_GENERICO x, TIPO_GENERICO y){
    return x>y ? x : y;
}

template<class TIPO_GENERICO> TIPO_GENERICO soma(TIPO_GENERICO x, TIPO_GENERICO y){
    return x + y;
}

int main()
{
    int x = 30, y = 40;
    cout << "minimo: " << minimo(x, y) << endl;
    cout << "maximo: " << maximo(x, y) << endl;
    cout << "soma: " << soma(x, y) << endl;

    float xf = 30, yf = 40;
    cout << "minimo: " << minimo(xf, yf) << endl;
    cout << "maximo: " << maximo(xf, yf) << endl;
    cout << "soma: " << soma(xf, yf) << endl;

    string xs = "Ola ", ys = "mundo";
    cout << "soma: " << soma(xs, ys) << endl;
    return 0;
}
