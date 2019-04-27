#ifndef DATA_H
#define DATA_H


struct Data{
private:
    short m_dia;
    short m_mes;
    short m_ano;
    bool  m_ok = false; // no C++ 11 ou superior, a inicialização pode ser feita in class
    enum{FEVEREIRO = 2, JULHO = 7};
    enum{MIN_ANO = 1900, MAX_ANO = 2100};
public:
//    Data() : ok(false){ //no C++ antigo, a inicialização era feita desta maneira. E os atributos precisavam estar na mesma ordem que foram declarados na classe
//    }

    //Data(){} // no C++ antigo
    Data() = default; // no C++11 ou superior

    //Data(int dia, int mes, int ano) : this->dia(dia), this->mes(mes), this->ano(ano)
    Data(short dia, short mes, short ano);

    void validar();

    void alterar(short dia, short mes, short ano);

    void imprimir();

    bool anoBissexto() const;

    short ultimoDiaDoMes() const;
};

#endif // DATA_H
