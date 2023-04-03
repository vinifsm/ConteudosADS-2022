#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Produtos{
	int cod;
	char descricao[40];
	int codFornecedor;
	int qtdEstoque;
	int estoqueMin;
	int estoqueMax;
	float valor;
};

struct Fornecedor{
	int cod;
	char nome[30];
	char endereco[35];
	char telefone[10];
	char cidade[25];
	char uf[2];
	char cnpj[10];
};

string buscarFornecedor (struct Fornecedor f1[], int contf1, string &telefone, int cod){
    int i = 0, f = contf1;
    int m = (i + f) / 2;
    for (; f >= i && cod != f1[m].cod; m = (i + f) / 2){
        if (cod > f1[m].cod)
            i = m + 1;
        else
            f = m - 1;
    }
    if (cod == f1[m].cod){
        telefone=f1[m].telefone;
        return(f1[m].nome);
	}
    else{
    	telefone="Não Encontrado";
        return("Não Encontrado");
    }
}


void leituraProdutos (struct Produtos p1[], int &contador,struct Fornecedor f1[],int contf1){
    int i = 0; 
    for (int saida = 1; i < 20 && saida != 0; i++){
        cout << "\n\nCodigo do Produto " << (i+1) << ": ";
        cin >> p1[i].cod;
        if (p1[i].cod > 0){
        	string telefone;
            cout << "Descrição: ";
            cin >> p1[i].descricao;
            cout << "Código do fornecedor: ";
            cin >> p1[i].codFornecedor;
            cout << "Nome do Fornecedor: " << buscarFornecedor(f1,contf1,telefone,p1[i].codFornecedor) << endl;
            cout << "Quantidade em estoque: ";
            cin >> p1[i].qtdEstoque;
            cout << "Estoque Mínimo: ";
            cin >> p1[i].estoqueMin;
            cout << "Estoque Máximo: ";
            cin >> p1[i].estoqueMax;
            cout << "Valor: ";
            cin >> p1[i].valor;
        }
        else saida = 0;
    }
    contador = i-1;
}

void leituraFornecedor (struct Fornecedor f1[], int &contador){
    int i = 0;
    for (int saida = 1; i < 20 && saida != 0; i++){
        cout << "\n\nCodigo do Fornecedor " << (i+1) << ": ";
        cin >> f1[i].cod;
        if (f1[i].cod > 0){
            cout << "Nome: ";
        	cin >> f1[i].nome;
            cout << "Endereco: ";
            cin >> f1[i].endereco;
            cout << "Telefone: ";
            cin >> f1[i].telefone;
            cout << "Cidade: ";
            cin >> f1[i].cidade;
            cout << "Estado: ";
            cin >> f1[i].uf;
            cout << "CNPJ: ";
            cin >> f1[i].cnpj;
        }
        else saida = 0;
    }
    contador = i-1;
}

void inclusaoProdutos (struct Produtos p1[], int contp1, struct Produtos p2[], int contp2, struct Produtos p3[], int &contp3){
    int i = 0, j = 0, k = 0; // i (contador de p1) j (contador de p2) k (contador de p3)
    for (;i < contp1 && j < contp2;k++){
        if (p1[i].cod < p2[j].cod){
            p3[k].cod = p1[i].cod;
            strcpy (p3[k].descricao,p1[i].descricao);
            p3[k].codFornecedor=p1[i].codFornecedor;
            p3[k].qtdEstoque=p1[i].qtdEstoque;
            p3[k].estoqueMin=p1[i].estoqueMin;
            p3[k].estoqueMax=p1[i].estoqueMax;
            p3[k].valor=p1[i].valor;
            i++;
            }
        else {
            p3[k].cod = p2[i].cod;
            strcpy (p3[k].descricao,p2[i].descricao);
            p3[k].codFornecedor=p2[i].codFornecedor;
            p3[k].qtdEstoque=p2[i].qtdEstoque;
            p3[k].estoqueMin=p2[i].estoqueMin;
            p3[k].estoqueMax=p2[i].estoqueMax;
            p3[k].valor=p2[i].valor;
            j++;
        }
    }
    while (i < contp1){
            p3[k].cod = p1[i].cod;
            strcpy (p3[k].descricao,p1[i].descricao);
            p3[k].codFornecedor=p1[i].codFornecedor;
            p3[k].qtdEstoque=p1[i].qtdEstoque;
            p3[k].estoqueMin=p1[i].estoqueMin;
            p3[k].estoqueMax=p1[i].estoqueMax;
            p3[k].valor=p1[i].valor;
        i++;
        k++;
    }
    while (j < contp2){
        p3[k].cod = p2[i].cod;
        strcpy (p3[k].descricao,p2[i].descricao);
        p3[k].codFornecedor=p2[i].codFornecedor;
        p3[k].qtdEstoque=p2[i].qtdEstoque;
        p3[k].estoqueMin=p2[i].estoqueMin;
        p3[k].estoqueMax=p2[i].estoqueMax;
        p3[k].valor=p2[i].valor;
        j++;
        k++;
    }
    contp3 = k;
}

void inclusaoFornecedores (struct Fornecedor f1[], int contf1, struct Fornecedor f2[], int contf2, struct Fornecedor f3[], int &contf3){
    int i = 0, j = 0, k = 0; // i (contador de f1) j (contador de f2) k (contador de f3)
    for (;i < contf1 && j < contf2;k++){
        if (f1[i].cod < f2[j].cod){
            f3[k].cod = f1[i].cod;
            strcpy (f3[k].nome,f1[i].nome);
            strcpy (f3[k].endereco,f1[i].endereco);
            strcpy (f3[k].telefone,f1[i].telefone);
            strcpy (f3[k].cidade,f1[i].cidade);
            strcpy (f3[k].uf,f1[i].uf);
            strcpy (f3[k].cnpj,f1[i].cnpj);
            i++;
            }
        else {
            f3[k].cod = f2[i].cod;
            strcpy (f3[k].nome,f2[i].nome);
            strcpy (f3[k].endereco,f2[i].endereco);
            strcpy (f3[k].telefone,f2[i].telefone);
            strcpy (f3[k].cidade,f2[i].cidade);
            strcpy (f3[k].uf,f2[i].uf);
            strcpy (f3[k].cnpj,f2[i].cnpj);
            j++;
        }
    }
    while (i < contf1){
    	f3[k].cod = f1[i].cod;
    	strcpy (f3[k].nome,f1[i].nome);
    	strcpy (f3[k].endereco,f1[i].endereco);
        strcpy (f3[k].telefone,f1[i].telefone);
        strcpy (f3[k].cidade,f1[i].cidade);
        strcpy (f3[k].uf,f1[i].uf);
        strcpy (f3[k].cnpj,f1[i].cnpj);
        i++;
        k++;
    }
    while (j < contf2){
        f3[k].cod = f2[i].cod;
        strcpy (f3[k].nome,f2[i].nome);
        strcpy (f3[k].endereco,f2[i].endereco);
        strcpy (f3[k].telefone,f2[i].telefone);
        strcpy (f3[k].cidade,f2[i].cidade);
        strcpy (f3[k].uf,f2[i].uf);
        strcpy (f3[k].cnpj,f2[i].cnpj);
        j++;
        k++;
    }
    contf3 = k;
}

void buscarProduto (struct Produtos p1[], int contp1, int cod, struct Fornecedor f1[],int contf1){
    int i = 0, f = contp1;
    string telefone;
    int m = (i + f) / 2;
    for (; f >= i && cod != p1[m].cod; m = (i + f) / 2){
        if (cod > p1[m].cod)
            i = m + 1;
        else
            f = m - 1;
    }
    if (cod == p1[m].cod){
        cout << "\n\n Produto Encontrado";
        cout << "\nCodigo do Produto: " << p1[m].cod;
        cout << "\tDescrição: " << p1[m].descricao;
        cout << "\tCódigo do Fornecedor: " << p1[m].codFornecedor;
        cout << "\tNome do Fornecedor: " << buscarFornecedor(f1,contf1,telefone,p1[m].codFornecedor);
        cout << "\tQuantidade em Estoque: " << p1[m].qtdEstoque;
        cout << "\tEstoque Mínimo: " << p1[m].estoqueMin;
        cout << "\tEstoque Máximo: " << p1[m].estoqueMax;
		cout << "\tValor: " << p1[m].valor;
		cout << "\tValor Total: " << p1[m].qtdEstoque*p1[m].valor;    
    }
    else
        cout << "\n\n Produto nao Encontrado";
    getch();
}

void mostrar (struct Produtos p1[], int contp1, struct Fornecedor f1[], int contf1){
	string telefone;
	float valorTotal=0;
    cout << "\n\nLista dos produtos com estoque abaixo do mínimo" << endl;
    for (int i = 0; i < contp1; i++){
    	if(p1[i].qtdEstoque<p1[i].estoqueMin){
    		int qtdCompra = p1[i].estoqueMin - p1[i].qtdEstoque;
    		float valorCompra = qtdCompra * p1[i].valor;
			valorTotal+=valorCompra; 
    		cout << endl << "\tCódigo: " << p1[i].cod;
    		cout << "\tDescrição: " << p1[i].descricao;
    		cout << "\tQuantidade em estoque: " << p1[i].qtdEstoque;
    		cout << "\tEstoque Máximo: " << p1[i].estoqueMax;
    		cout << "\tQuantidade a ser comprada: " << qtdCompra;
    		cout << "\tValor da compra: " << valorCompra;
    		cout << "\tNome do Fornecedor: " << buscarFornecedor(f1,contf1,telefone,p1[i].codFornecedor);
    		cout << "\tTelefone do Fornecedor: " << telefone;
		}	
    }
    cout << "\n\nValor total das Compras: " << valorTotal;
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Produtos p1[20], p2[20], p3[40];
	struct Fornecedor f1[20], f2[20], f3[40];
	int contp1, contp2, contp3, contf1, contf2, contf3, cod;
	
	leituraFornecedor(f1,contf1);
	
	leituraProdutos(p1,contp1,f1,contf1);
	
	cout << "\nDigite o código que será buscado: ";
	cin >> cod;
	
	buscarProduto(p1,contp1,cod,f1,contf1);
	
	mostrar(p1,contp1,f1,contf1);
}
