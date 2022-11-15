#ifndef GERENTE_H
#define GERENTE_H
#include <string>
#include "Funcionario.h"

class Gerente : public Funcionario{
  public:
    Gerente();
    Gerente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, std::string telefone, float salario, std::string areaSupervisao);
    ~Gerente();

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
    std::string getAreaSupervisao();
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(float adress);
    void setTelefone(int phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setTipoFuncionario(int functionaryType);
    void getPosicao(int position);
    void setSalario(float salary);
    void setAreaSupervisao(std::string areaSupervisao);
  
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
  
    std::string areaSupervisao;
};

#endif
