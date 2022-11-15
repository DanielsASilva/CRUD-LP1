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
    int getPosicao();
    float getSalario();
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(float adress);
    void setTelefone(int phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setPosicao(std::string position);
    void setTipoFuncionario(int functionaryType);
    void setSalario(float salary);
  
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
