#ifend GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include "Operador.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"

class Gerenciador{
  public:
  Gerenciador();
  ~Gerenciador();
  
  int adicionarFuncionario();
  int editarFuncionario();
  int excluirFuncionario();
  int exibirFuncionario();
  int exibirLista();
  int exibirListaTipo();
  
  protected:
  
  private:
  
}

#endif
