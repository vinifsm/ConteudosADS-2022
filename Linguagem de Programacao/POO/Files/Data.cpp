//Data.cpp
#include "Data.h";
#include "Processo.h"
int main () {
    Data data1;
    data1.imprimir();


    //data1.ano = 4567;
    //data1.mes = 17;


    data1.setAno(4567);
    data1.setMes(16);
    data1.setDia (32);
    data1.imprimir();

    Data data2(28, 2, 2022);
    data2.imprimir();

    cout << "Data: " << data2.getDia() << endl;

    Processo processo1;
    processo1.imprimir();
}
