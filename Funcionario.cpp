#include "Funcionario.h"

Funcionario::Funcionario(){
 
}

Funcionario::~Funcionario(){

}

int Funcionario::getCodigo(){
    return codigo;
}

       
std::string Funcionario::getNome(){
    return nome;
}
    
std::string Funcionario::getEndereco(){
    return endereco;
}

std::string Funcionario::getTelefone(){
    return telefone;
}
    
int Funcionario::getDataDia(){
    return dataDia;
}
    
int Funcionario::getDataMes(){
    return dataMes;
}
    
int Funcionario::getDataAno(){
    return dataAno;
}

int Funcionario::getTipoFuncionario(){
    return tipoFuncionario;
}

std::string Funcionario::getPosicao(){
    return posicao;   
}

float Funcionario::getSalario(){
    return salario;
}

std::string Funcionario::getAreaSupervisao(){
    return areaSupervisao;
}

std::string Funcionario::getAreaFormacao(){
    return areaFormacao;
}

std::string Funcionario::getAreaAcademicaMax(){
    return areaAcademicaMax;
}

void Funcionario::setCodigo(int code){
    codigo = code;
}

void Funcionario::setNome(std::string name){
    nome = name;
}

void Funcionario::setEndereco(std::string adress){
    endereco = adress;
}

void Funcionario::setTelefone(int phone){
    telefone = phone;
}

void Funcionario::setDataDia(int day){
    dataDia = day;
}

void Funcionario::setDataMes(int month){
    dataMes = month;
}

void Funcionario::setDataAno(int year){
    dataAno = year;
}

void Funcionario::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Funcionario::setPosicao(std::string position){
    posicao = position;   
}

void Funcionario::setSalario(float salary){
    salario = salary;
}

void Funcionario::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;
}

void Funcionario::setAreaFormacao(std::string academicWorkfield){
    areaFormacao = academicWorkfield;
}

void Funcionario::setAreaAcademicaMax(std::string academicDegree){
    areaAcademicaMax = academicDegree;
}
