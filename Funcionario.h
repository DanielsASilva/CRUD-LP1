#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

// Superclasse! É aqui que todas as informações gerais dos funcionários serão instanciadas 
class Funcionario{
  public:
    Funcionario();
    ~Funcionario();

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
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(std::string adress);
    void setTelefone(std::string phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setTipoFuncionario(int functionaryType);
    void setPosicao(std::string position);
    void setSalario(float salary);
  
  // Os atributos estarão como "protected" porque serão herdados pelas subclasses
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

};

#endif
