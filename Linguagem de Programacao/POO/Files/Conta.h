//Conta.h
#include <iostream>
using namespace std;

//interface da classe
class Conta{
    private:  //atributos
        int numConta;
        string titular;
        float saldo;
    public: //métodos
        Conta();
        Conta(int, string, float);
        Conta(int, string);

        //get
        int getNumConta();
        string getTitular();
        float getSaldo();

        //set
        void setNumConta(int);
        void setTitular(string);
        void setSaldo(float);

        void imprimir();

};

Conta::Conta () {
   this->numConta = 0;
   this->titular = "";
   this->saldo = 0;
}

Conta::Conta(int numConta, string titular, float saldo){
    this->numConta = numConta;
    this->titular = titular;
    this->saldo = saldo;
}

Conta::Conta(int numConta, string titular){
    this->numConta = numConta;
    this->titular = titular;
    this->saldo = 0;
}

void Conta::imprimir(){
    cout << "\nImprimir Conta\n";
    cout << "Numero da Conta: " << this->numConta << endl;
    cout << "Titular: " << this->titular << endl;
    cout << "Saldo: " << this->saldo << endl;
}

int Conta::getNumConta(){
  return this->numConta;
}

string Conta::getTitular(){
    return this->titular;
}

float Conta::getSaldo(){
    return this->saldo;
}

void Conta::setNumConta(int numConta){
    this->numConta = numConta;
}

void Conta::setTitular(string titular){
    this->titular = titular;
}

void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}



