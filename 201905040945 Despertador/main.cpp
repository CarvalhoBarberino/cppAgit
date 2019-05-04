#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

class Despertador
{
    void pausar(int milli){
        this_thread::sleep_for(milliseconds(milli));
    }
protected:
    virtual bool despertar() const = 0;
public:
    void iniciar(int milli){
        while(despertar()){
            pausar(milli);
        }
    }
};

class ChecarSMS : public Despertador
{
    bool despertar() const override
    {
        cout << "Verificando SMS...\n";
        return true;
    }
};

class ChecarEmail : public Despertador
{
    bool despertar() const override
    {
        cout << "Verificando email...\n";
        return true;
    }
};

int main()
{
    thread th1([]{ChecarSMS().iniciar(1000);});//[]{ChecarSMS().iniciar(1000);} eh uma função lambda
    thread th2([]{ChecarEmail().iniciar(3000);});

    th1.join();
    th2.join();
    return 0;
}
