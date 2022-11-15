#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario{
  public:
    Funcionario();
    ~Funcionario();

    virtual int getCodigo() = 0;
    virtual std::string getNome() = 0;
    virtual std::string getEndereco() = 0;
    virtual std::string getTelefone() = 0;
    virtual int getDataDia() = 0;
    virtual int getDataMes() = 0;
    virtual int getDataAno() = 0;
    virtual int getTipoFuncionario() = 0;
    virtual std::string getPosicao() = 0;
    virtual float getSalario() = 0;
  
    virtual void setCodigo(int code) = 0;
    virtual void setNome(std::string name) = 0;
    virtual void setEndereco(float adress) = 0;
    virtual void setTelefone(int phone) = 0;
    virtual void setDataDia(int day) = 0;
    virtual void setDataMes(int month) = 0;
    virtual void setDataAno(int year) = 0;
    virtual void setTipoFuncionario(int functionaryType) = 0;
    virtual void setPosicao(std::string position);
    virtual void setSalario(float salary) = 0;
  
  protected:
    int codigo;
    std::string posicao;
    std::string nome;
    std::string endereco;
    std::string telefone;
    int dataDia;
    int dataMes;
    int dataAno;
    int tipoFuncionario;
    float salario;
  private:

};

#endif
