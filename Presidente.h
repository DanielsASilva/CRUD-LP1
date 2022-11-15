#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include <string>
#include "Funcionario.h"

class Presidente : public Funcionario{
  public:
    Presidente();
    Presidente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, float salario, std::string areaFormacao, std::string areaAcademicaMax);
    ~Presidente();

    int getCodigo();
    std::string getNome();
    std::string getEndereco();
    std::string getTelefone();
    int getDataDia();
    int getDataMes();
    int getDataAno();
    int getTipoFuncionario();
    float getSalario();
    std::string getAreaSupervisao();
    std::string getAreaFormacao();
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(float adress);
    void setTelefone(int phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setTipoFuncionario(int functionaryType);
    void setSalario(float salary);
    void setAreaSupervisao(std::string supervisionArea);
    void setAreaFormacao(std::string academicDegree);
  
  protected:
    int codigo;
    std::string nome;
    std::string endereco;
    std::string telefone;
    std::string posicao;
    int dataDia;
    int dataMes;
    int dataAno;
    int tipoFuncionario;
    float salario;
  
    std::string areaFormacao;
  
    std::string areaAcademicaMax;
  private:

};

#endif
