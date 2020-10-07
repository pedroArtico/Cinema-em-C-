//////////////.cpp/////////////
#include "Dataa.h"

Dataa::Dataa()
{
	diaSemana=0;
	mes=0;
	ano=0;
	hora=0;
	minuto=0;
}
 Dataa::Dataa(int diaSemana, int mes, int ano, int hora, int minuto){
	this->diaSemana=diaSemana;
	this->mes=mes;
	this->ano=ano;
	this->hora=hora;
	this->minuto=minuto;
}

	void Dataa::setDiaSemana(int diaSemana){
		 this->diaSemana=diaSemana;
	}
	int Dataa::getDiaSemana(){
		return diaSemana;
	}
	
	void Dataa::setMes(int mes){
		this->mes=mes;
	}
	int Dataa::getMes(){
		return mes;
	}
	void Dataa::setAno(int ano){
		this->ano=ano;
	}
	int Dataa::getAno(){
		return ano;
	}
	void Dataa::setHora(int hora){
		this->hora=hora;
	}
	int Dataa::getHora(){
		return hora;
	}
	void Dataa::setMinuto(int minuto){
		this->minuto=minuto;
	}
	int Dataa::getMinuto(){
		return minuto;
	}
	//int Data::comparar_datas(int dia, int mes, int ano, int hora, int minuto){
		
	//}







