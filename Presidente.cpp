#include "Presidente.h"
#include <string>
    
Presidente::Presidente() : Funcionario(){
        
}

Presidente::Presidente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, float salario, std::string areaFormacao, std::string areaAcademicaMax){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->salario = salario;
    this->areaFormacao = areaFormacao;
    this->areaAcademicaMax = areaAcademicaMax;
}

Presidente::~Presidente(){
    
}

int Presidente::getCodigo(){
    return codigo;
}

       
std::string Presidente::getNome(){
    return nome;
}
    
std::string Presidente::getEndereco(){
    return endereco;
}

std::string Presidente::getTelefone(){
    return telefone;
}
    
int Presidente::getDataDia(){
    return dia;
}
    
int Presidente::getDataMes(){
    return mes;
}
    
int Presidente::getDataAno(){
    return ano;
}

int Presidente::getTipoFuncionario(){
    return tipoFuncionario;
}
    
float Presidente::getSalario(){
    return salario;
}

std::string Presidente::getAreaFormacao(){
    return areaFormacao;
}

std::string Presidente::getAreaAcademicaMax(){
    return areaAcademicaMax;
}

void Presidente::setCodigo(int code){
    codigo = code;
}

void Presidente::setNome(std::string name){
    nome = name;
}

void Presidente::setEndereco(float adress){
    endereco = adress;
}

void Presidente::setTelefone(int phone){
    telefone = phone;
}

void Presidente::setDataDia(int day){
    dia = day;
}

void Presidente::setDataMes(int month){
    mes = month;
}

void Presidente::setDataAno(int year){
    ano = year;
}

void Presidente::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Presidente::setSalario(float salary){
    salario = salary;
}

void Presidente::setAreaFormacao(std::string academicWorkfield){
    areaFormacao = academicWorkfield;
}

void Presidente::setAreaAcademicaMax(std::string academicDegree){
    areaAcademicaMax = academicDegree;
}
