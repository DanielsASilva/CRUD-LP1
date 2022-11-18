#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

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
    //std::string getAreaSupervisao(); //Gerente
    //std::string getAreaFormacao(); //Diretor: nome da área de supervisão e área de formação
    //std::string getAreaAcademicaMax(); //Presidente: área de formação e qual formação acadêmica máxima
  
    void setCodigo(int code);
    void setNome(std::string name);
    void setEndereco(std::string adress);
    void setTelefone(int phone);
    void setDataDia(int day);
    void setDataMes(int month);
    void setDataAno(int year);
    void setTipoFuncionario(int functionaryType);
    void setPosicao(std::string position);
    void setSalario(float salary);
    //void setAreaSupervisao(std::string supervisionArea);
    //void setAreaFormacao(std::string academicWorkfield);
    //void setAreaAcademicaMax(std::string academicDegree);
  
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
    //std::string areaSupervisao;
    //std::string areaFormacao;
    //std::string areaAcademicaMax;
  private:

};

#endif
