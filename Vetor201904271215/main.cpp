#include <iostream>
#include <vector>
#include <memory>

//void imprimir(int a); //Cópia - C/C++
//void imprimir(int *a); //Endereço - C/C++
//void imprimir(int &a); //Endereço - C++
//void imprimir(int &&a); //Referencia RValue - C++ 11 >

using namespace std;

template <typename T>
class Vetor
{
    T *m_elements;
    unsigned int m_size;
public:
    Vetor()
    {
        //Inicializar m_elements e m_size
        m_elements = nullptr ;
        m_size = 0;
    }
//    Vetor(const Vetor &v)
//    {
//        //Criar vetor com tamanho de v.m_size
//        //Copiar elementos de v.m_elements
//    }
//    Vetor(Vetor &&v)
//    {
//        //Fazer jogada de pointeiros
//    }
//    Vetor & operator =(const Vetor &v)
//    {
//        //Deletar o vetor atual
//        //Criar vetor com tamanho de v.m_size
//        //Copiar elementos de v.m_elements
//    }
//    Vetor & operator =(Vetor &&v)
//    {
//        //Fazer jogada de pointeiros
//    }
//    ~Vetor()
//    {
//        //Limpa o vetor
//    }
//    void clear()
//    {
//        //Limpa o vetor
//    }
    void push_back(const T &value)
    {
        //Cria um vetor temporario com m_size + 1
        T *temp = new T[m_size + 1];
        //Copiar o vetor antigo para o temporario
        for(int i = 0; i < m_size; ++i){
            temp[i] = m_elements[i];
        }
        //Inserir o novo elemento no temporario
        temp[m_size] = value;
        //Deletar o vetor antigo
        delete [] m_elements;
        //Fazer com que o vetor antigo aponte para o novo
        m_elements = temp;
        //Incrementar o m_size
        ++m_size;
    }
//    void push_back(T &&value)
//    {
//        //Cria um vetor temporario com m_size + 1
//        T *temp = new T[m_size + 1];
//        //Copiar o vetor antigo para o temporario
//        for(int i = 0; i < m_size; ++i){
//            temp[i] = m_elements[i];
//        }
//        //Mover o novo elemento no temporario
//        //Deletar o vetor antigo
//        delete [] m_elements;
//        //Fazer com que o vetor antigo aponte para o novo
//        m_elements = temp;
//        //Incrementar o m_size
//        ++m_size;
//    }
    unsigned int size() const
    {
        //Retorna o numero de elementos do vetor
        return m_size;
    }
//    T &operator [](unsigned int index) const
//    {
//        //Retorna um elemento dada uma posição
//    }
    T getElement(int index){
        return m_elements[index];
    }
};

int main()
{
    Vetor<int> x = Vetor<int>();
    x.push_back(37);
    x.push_back(41);
    x.push_back(47);
    x.push_back(53);
    cout << "----" << endl;

    for(unsigned int i = 0; i < x.size(); ++i)
        cout << x.getElement(i) << endl;

    return 0;
}
