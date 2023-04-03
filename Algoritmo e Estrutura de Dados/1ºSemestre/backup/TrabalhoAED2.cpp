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

void menu (){
	system("cls");
	cout << "\n\nMenu";
	cout << "\n0 - Sair";
	cout << "\n1 - Ler Fornecedores";
	cout << "\n2 - Ler Produtos";
	cout << "\n3 - Incluir Fornecedores";
	cout << "\n4 - Incluir Produtos";
	cout << "\n5 - Buscar Produto";
	cout << "\n6 - Mostrar Produtos abaixo do estoque mínimo";
}

void copiarProduto (struct Produtos p1[], int &contp1,struct Produtos p2[],int contp2){
	for (int i=0;i<contp2;i++){
		p1[i].cod = p2[i].cod;
        strcpy (p2[i].descricao,p1[i].descricao);
        p1[i].codFornecedor=p2[i].codFornecedor;
    	p1[i].qtdEstoque=p2[i].qtdEstoque;
        p1[i].estoqueMin=p2[i].estoqueMin;
        p1[i].estoqueMax=p2[i].estoqueMax;
    	p1[i].valor=p2[i].valor;
	}
	contp1=contp2;
}

void copiarFornecedor (struct Fornecedor f1[], int &contf1, struct Fornecedor f2[], int contf2){
	for (int i=0;i<contf2;i++){
            f1[i].cod = f2[i].cod;
            strcpy (f1[i].nome,f2[i].nome);
            strcpy (f1[i].endereco,f2[i].endereco);
            strcpy (f1[i].telefone,f2[i].telefone);
            strcpy (f1[i].cidade,f2[i].cidade);
            strcpy (f1[i].uf,f2[i].uf);
            strcpy (f1[i].cnpj,f2[i].cnpj);
	}
	contf1=contf2;	
}

int buscarFornecedor (struct Fornecedor f1[], int contf1, int cod){
    int i = 0, f = contf1;
    int m = (i + f) / 2;
    for (; f >= i && cod != f1[m].cod; m = (i + f) / 2){
        if (cod > f1[m].cod)
            i = m + 1;
        else
            f = m - 1;
    }
    if (cod == f1[m].cod){
        return(m);
	}
    else{
        return(1000000);
    }
}


void leituraProdutos (struct Produtos p1[], int &contador,struct Fornecedor f1[],int contf1){
    int i = 0,m; 
    for (int saida = 1; i < 20 && saida != 0; i++){
        cout << "\n\nCodigo do Produto " << (i+1) << ": ";
        cin >> p1[i].cod;
        if (p1[i].cod > 0){
        	string telefone;
            cout << "Descrição: ";
            cin >> p1[i].descricao;
            cout << "Código do fornecedor: ";
            cin >> p1[i].codFornecedor;
            m = buscarFornecedor(f1,contf1,p1[i].codFornecedor);
            	while(m==1000000){
            		cout << "Digite um fornecedor válido: ";
            		cin >> p1[i].codFornecedor;
            		m = buscarFornecedor(f1,contf1,p1[i].codFornecedor);
				}
            cout << "Nome do Fornecedor: " << f1[m].nome;
            cout << "\nQuantidade em estoque: ";
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
            p3[k].cod = p2[j].cod;
            strcpy (p3[k].descricao,p2[j].descricao);
            p3[k].codFornecedor=p2[i].codFornecedor;
            p3[k].qtdEstoque=p2[j].qtdEstoque;
            p3[k].estoqueMin=p2[j].estoqueMin;
            p3[k].estoqueMax=p2[j].estoqueMax;
            p3[k].valor=p2[j].valor;
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
        p3[k].cod = p2[j].cod;
        strcpy (p3[k].descricao,p2[j].descricao);
        p3[k].codFornecedor=p2[j].codFornecedor;
        p3[k].qtdEstoque=p2[j].qtdEstoque;
        p3[k].estoqueMin=p2[j].estoqueMin;
        p3[k].estoqueMax=p2[j].estoqueMax;
        p3[k].valor=p2[j].valor;
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
            f3[k].cod = f2[j].cod;
            strcpy (f3[k].nome,f2[j].nome);
            strcpy (f3[k].endereco,f2[j].endereco);
            strcpy (f3[k].telefone,f2[j].telefone);
            strcpy (f3[k].cidade,f2[j].cidade);
            strcpy (f3[k].uf,f2[j].uf);
            strcpy (f3[k].cnpj,f2[j].cnpj);
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
        f3[k].cod = f2[j].cod;
        strcpy (f3[k].nome,f2[j].nome);
        strcpy (f3[k].endereco,f2[j].endereco);
        strcpy (f3[k].telefone,f2[j].telefone);
        strcpy (f3[k].cidade,f2[j].cidade);
        strcpy (f3[k].uf,f2[j].uf);
        strcpy (f3[k].cnpj,f2[j].cnpj);
        j++;
        k++;
    }
    contf3 = k;
}

void buscarProduto (struct Produtos p1[], int contp1, struct Fornecedor f1[],int contf1){
    int i = 0, f = contp1;
    int cod;
    string telefone;
    int m = (i + f) / 2;
    cout << "\nDigite o código que será buscado: ";
	cin >> cod;
    for (; f >= i && cod != p1[m].cod; m = (i + f) / 2){
        if (cod > p1[m].cod)
            i = m + 1;
        else
            f = m - 1;
    }
    if (cod == p1[m].cod){
    	int l;
        cout << "\n\n Produto Encontrado";
        cout << "\nCodigo do Produto: " << p1[m].cod;
        cout << "\tDescrição: " << p1[m].descricao;
        cout << "\tCódigo do Fornecedor: " << p1[m].codFornecedor;
        l=buscarFornecedor(f1,contf1,p1[m].codFornecedor);
        cout << "\tNome do Fornecedor: " << f1[l].nome;
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
	int m;
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
    		m = buscarFornecedor(f1,contf1,p1[i].codFornecedor);
    		cout << "\tNome do Fornecedor: " << f1[m].nome;
    		cout << "\tTelefone do Fornecedor: " << f1[m].telefone;
		}	
    }
    cout << "\n\nValor total das Compras: " << valorTotal;
    getch();
}

int main (){
	setlocale(LC_ALL,"Portuguese");
	struct Produtos p1[20], p2[20], p3[40];
	struct Fornecedor f1[20], f2[20], f3[40];
	int contp1, contp2, contp3, contf1, contf2, contf3, x, option;

	while(x==0){
		menu();
		
		cout << "\n\nDigite sua opção: ";
		cin >> option;
		
		switch(option){
			case 1:
				leituraFornecedor(f1,contf1);
				break;
			case 2:
				leituraProdutos(p1,contp1,f1,contf1);
				break;
			case 3:
				leituraFornecedor(f2,contf2);
				inclusaoFornecedores(f1,contf1,f2,contf2,f3,contf3);
				copiarFornecedor(f1,contf1,f3,contf3);
				break;
			case 4:
				leituraProdutos(p2,contp2,f1,contf1);
				inclusaoProdutos(p1,contp1,p2,contp2,p3,contp3);
				copiarProduto(p1,contp1,p3,contp3);
				break;
			case 5:	
				buscarProduto(p1,contp1,f1,contf1);
				break;
			case 6:
				mostrar(p1,contp1,f1,contf1);
				break;
			case 0:
				x=1;
				break;
		}
	}

}
