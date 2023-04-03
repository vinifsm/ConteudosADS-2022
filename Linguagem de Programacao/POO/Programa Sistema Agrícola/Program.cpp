#include <iostream>
#include <conio.h>
#include <locale.h>
#include "AreaPlantio.h"
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	AreaPlantio arPlantio1;
	Agricultor agr1;
	Insumo ins1;
	TipoInsumo tpIns1;

	arPlantio1.imprimir();
	
	tpIns1.imprimir();
	tpIns1.ler();
	tpIns1.imprimir(); 
	
	arPlantio1.setValor(300000);
	cout << "\n\nValor da area de plantio arPlantio1:" << arPlantio1.getValor();
	
	TipoInsumo tpIns2(12,"Adubo");
	
	cout << "\n\nTipo do insumo tpIns1:"<<tpIns2.getDescricao();

	agr1.ler();
	arPlantio1.setProdutor(agr1);
	arPlantio1.imprimir();

	ins1.setQuantidade(50);
	ins1.setId(4);
	ins1.setIdTipoInsumo(tpIns2.getId());
	ins1.setDescricaoTipoInsumo(tpIns2.getDescricao());
	ins1.imprimir();
	
	arPlantio1.setInsumo(ins1);
	arPlantio1.imprimir();
}

