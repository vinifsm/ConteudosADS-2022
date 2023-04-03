//Data.cpp
#include "Data.h"
//#include "TipoProcesso.h"
#include "Processo.h"
int main () {
	
	Data data1(11,9,2005);
   
   Processo p6;
   p6.imprimir();
   
   getch();
   Processo processo1;
   processo1.imprimir();
   processo1.TipoProcesso::imprimir();
   processo1.setId(15);
   processo1.setDescricao("Horas Exatas");
   processo1.setHora("19:45");
   processo1.TipoProcesso::setId(17);
   processo1.TipoProcesso::setDescricao("Trabalhista");
   processo1.imprimir();
   processo1.setDescricaoTipoProcesso("Empresarial");
   processo1.imprimir();

	Processo processo2 (15,"Judicial",23,"Furtou",data1,"22:46");
	processo2.imprimir();
	
	Data data3 = processo2.getEntrada();
	cout << endl << "Data3: " << data3.getDataString() << endl;
	cout << "Data3: " << processo2.getEntrada().getDataString() << endl;
	cout << "Dia entrada processo2: " 
					   <<processo2.getEntrada().getDia() << endl;
}

