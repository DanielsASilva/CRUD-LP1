#ifend GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include "Operador.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include <vector>

class Gerenciador{
  public:
  Gerenciador();
  ~Gerenciador();
  
  vector<Funcionario*> getVectorFuncionarios();
  
  int adicionarFuncionario();
  int editarFuncionario();
  int excluirFuncionario();
  int exibirFuncionario();
  int exibirLista();
  int exibirListaTipo();
  
  protected:
  
  private:
  vector<Funcionario*> listaFuncionarios;
}

#endif
