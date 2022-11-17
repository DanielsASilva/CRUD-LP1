#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
#include "Funcionario.h"

class Operador : public Funcionario{
  public:
    Operador();
    Operador(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone, std::string posicao, float salario);
    ~Operador();

    int getCodigo();
    std::string getNome();
    std::string getEndereco();
    std::string getTelefone();
    int getDataDia();
    int getDataMes();
    int getDataAno();
    int getTipoFuncionario();
    std::string getPosicao();
    float getSalario();
    //std::string getAreaSupervisao();
    //std::string getAreaFormacao();
    //std::string getAreaAcademicaMax();
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(std::string adress);
    void setTelefone(int phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setPosicao(std::string position);
    void setTipoFuncionario(int functionaryType);
    void setSalario(float salary);
    //void setAreaSupervisao(std::string supervisionArea);
    //void setAreaFormacao(std::string academicWorkfield);
    //void setAreaAcademicaMax(std::string academicDegree); 
  
  protected:

  private:
    int codigo;
    std::string nome;
    std::string endereco;
    std::string telefone;
    std::string posicao;
    int dataDia;
    int dataMes;
    int dataAno;
    int tipoFuncionario;
};

#endif
