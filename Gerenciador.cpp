#include "Gerenciador.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Gerenciador::Gerenciador(){
  
}

Gerenciador::~Gerenciador(){
  
}

// Para cadastrar um novo funcionário, o cargo é solicitado e em seguida as informações do tipo nome, endereço e data de ingresso, entre outras, são lidas
//pelo programa e armazenadas 
int Gerenciador::adicionarFuncionario(){
    int codigoFuncionario, dia, mes, ano;
    string nome, endereco, telefone, areaSupervisao, areaFormacao, areaAcademicaMax;
    float salario;
    short int tipo;
    
    cout << "Que tipo de funcionário gostaria de adicionar?\n"
    << "1. Operador\n"
    << "2. Gerente\n"
    << "3. Diretor\n"
    << "4. Presidente\n";

    cin >> tipo;
    cin.ignore();
    
    cout << "Digite o código do funcionário: ";
    cin >> codigoFuncionario;
    cin.ignore();
    
    cout << "Digite o nome do funcionário: ";
    getline(cin, nome);
    
    cout << "Digite o endereço do funcionário: ";
    getline(cin, endereco);
    
    cout << "Digite o dia de ingresso do funcionário na empresa: ";
    cin >> dia;
    cin.ignore();
    
    cout << "Digite o mês de ingresso do funcionário na empresa: ";
    cin >> mes;
    cin.ignore();
    
    cout << "Digite o ano de ingresso do funcionário na empresa: ";
    cin >> ano;
    cin.ignore();
    
    cout << "Digite o telefone do funcionário: ";
    getline(cin, telefone);
  
    cout << "Digite o salário do funcionário: ";
    cin >> salario;
    cin.ignore();
    
  // A seguir, os cargos "Gerente", "Diretor" e "Presidente" recebem adições específicas relacionadas às suas funções. Os dois primeiros 
  //recebem a área de supervisão, os dois últimos recebem área de formação e "Presidente" recebe a formação academica
    switch(tipo){
        case 1:
        vectorFuncionarios.push_back(new Operador(codigoFuncionario, nome, endereco, dia, mes, ano, telefone, "Operador", salario));
        break;
        case 2:
        cout << "Digite a área de supervisão do gerente: ";
        getline(cin, areaSupervisao);

        vectorFuncionarios.push_back(new Gerente(codigoFuncionario, nome, endereco, dia, mes, ano, "Gerente", telefone, salario, areaSupervisao));
        break;
        case 3:
        cout << "Digite a área de supervisão do diretor: ";
        getline(cin, areaSupervisao);
        
        cout << "Digite a área de formação do diretor: ";
        getline(cin, areaFormacao);
        
        vectorFuncionarios.push_back(new Diretor(codigoFuncionario, nome, endereco, dia, mes, ano, "Diretor", telefone, salario, areaSupervisao, areaFormacao));
        break;
        case 4:
        cout << "Digite a área de formação do presidente: ";
        getline(cin, areaFormacao);
        
        cout << "Digite a formação academica máxima do presidente: ";
        getline(cin, areaAcademicaMax);

        vectorFuncionarios.push_back(new Presidente(codigoFuncionario, nome, endereco, dia, mes, ano, telefone, "Presidente", salario, areaFormacao, areaAcademicaMax));
        break;
        default:
        cout << "Opção inválida, tente novamente!\n";
        break;
    }
    
    fstream stream;
    
  // Arquivo é aberto e as informações gerais previamente cadastradas são adicionadas
    stream.open("./listaFuncionario.txt", fstream::out);
    if(! stream.is_open()){
      cout << "Erro ao abrir o .txt" << endl; 
    }
  
    for(int c = 0; c < vectorFuncionarios.size(); c++){
      stream << vectorFuncionarios.at(c)->getCodigo() << endl;
      stream << vectorFuncionarios.at(c)->getNome() << endl;
      stream << vectorFuncionarios.at(c)->getEndereco() << endl;
      stream << vectorFuncionarios.at(c)->getDataDia() << endl;
      stream << vectorFuncionarios.at(c)->getDataMes() << endl;
      stream << vectorFuncionarios.at(c)->getDataAno() << endl;
      stream << vectorFuncionarios.at(c)->getPosicao() << endl;
      stream << vectorFuncionarios.at(c)->getTelefone() << endl;
      stream << vectorFuncionarios.at(c)->getSalario() << endl;
      
      // Em seguida, as informações específicas por cargo são adicionadas
      switch(vectorFuncionarios.at(c)->getTipoFuncionario()){
        case 1:
          break;
        case 2:
          stream << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          break;
        case 3:
          stream << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          stream << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          break;
        case 4:
          stream << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          stream << vectorFuncionarios.at(c)->getAreaAcademicaMax() << endl;
          break;
      }
      
    }
  
}


int Gerenciador::editarFuncionario(){
  int codigo, indice, check, opt, dia, mes, ano;
  string posicao, endereco;
  float salario;
  cout << "Existem " << vectorFuncionarios.size() << " funcionários na empresa, digite o código do funcionário para edição: ";
  cin >> codigo;
  cin.ignore();
  
  // Com o código respectivo ao funcionário em questão, as informações que o usuário pretende editar são reescritas e atualizadas 
  while(1){
    for(int c = 0; c < vectorFuncionarios.size(); c++){
       if(vectorFuncionarios.at(c)->getCodigo() == codigo){
          indice = c;
          check++;
       }
    }
    if(check == 0){
      cout << "código inválido" << endl; 
    }else{
      break; 
    }  
  }
  
  cout << "Editando o funcionário " << codigo << ".\n"
  << "1. Código: " << endl
  << "2. Dia de ingresso: " << endl
  << "3. Mês de ingresso: " << endl
  << "4. Ano de ingresso: " << endl
  << "5. Endereço: " << endl
  << "6. Posição: " << endl
  << "7. Salário: " << endl;
  
  cin >> opt;
  cin.ignore();
  
  // Para cada caso, um dado particular é lido e este passa a ser o dado atual, significando que tal informação foi editada
  switch(opt){
    case 1:
      cout << "Insira o novo código: ";
      cin >> codigo;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setCodigo(codigo);
      cout << "\nEdição Concluída\n";
      break;
    case 2:
      cout << "Insira o novo dia de ingresso: ";
      cin >> dia;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setDataDia(dia);
      cout << "\nEdição Concluída\n";
      break;
    case 3:
      cout << "Insira o novo mês de ingresso: ";
      cin >> mes;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setDataMes(mes);
      cout << "\nEdição Concluída\n";
      break;
    case 4:
      cout << "Insira o novo ano de ingresso: ";
      cin >> ano;
      cin.ignore();
        
      vectorFuncionarios.at(indice)->setDataAno(ano);
      cout << "\nEdição Concluída\n";
      break;
    case 5:
      cout << "Insira o novo endereço: ";
      getline(cin, endereco);
      
      vectorFuncionarios.at(indice)->setEndereco(endereco);
      cout << "\nEdição Concluída\n";
      break;
    case 6:{
      cout << "Insira a nova posição: ";
      getline(cin, posicao);
      
      vectorFuncionarios.at(indice)->setPosicao(posicao);
      cout << "\nEdição Concluída\n";
      }break;
    case 7:{
      cout << "Insira o novo salário: ";
      cin >> salario;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setSalario(salario);
      cout << "\nEdição Concluída\n";
      }break;
  }
  
  }
  

  
int Gerenciador::excluirFuncionario(){
  int codigo, indice, check;
  string opt;
  cout << "Existem " << vectorFuncionarios.size() << " funcionários na empresa, digite o código do funcionário para exclusão: ";
  cin >> codigo;

  for(int c = 0; c < vectorFuncionarios.size(); c++){
    if(vectorFuncionarios.at(c)->getCodigo() == codigo){
      indice = c;
      check++;
    }if(check == 0){
      cout << "código inválido" << endl;
    }else{
      break;
    }
  }
}

for(int c = 0; c < vectorFuncionarios.size(); c++){
  if(vectorFuncionarios.at(c)->getCodigo() == codigo){
    cout << "Você deseja excluir o funcionário " << vectorFuncionarios.at(c)->getCodigo() << " - " << vectorFuncionarios.at(c)->getNome() << "? (y/n)";
    getline(cin, opt);
  }
  if(opt == "y"){
    vectorFuncionarios.erase(vectorFuncionarios.begin() + c);
    cout << "Funcionário deletado com sucesso!" << endl
  }else{
    cout << "Funcionário não foi deletado!" << endl;
  }
}

// Um funcionário específico terá seus dados gerais listados em ordem
int Gerenciador::exibirFuncionario(){
  int codigo;
  cout << "Digite o código do funcionário a ser exibido: ";
  cin >> codigo;

  for(int c = 0; c < vectorFuncionarios.size(); c++){
    if(vectorFuncionarios.at(c)->getCodigo() == codigo){
      cout << "\nCódigo do funcionário: "<< vectorFuncionarios.at(c)->getCodigo() << endl
      << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
      << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
      << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
      << "Data de ingresso: " << vectorFuncionarios.at(c)->getDataDia() << "/" <<     vectorFuncionarios.at(c)->getDataMes() << "/" << vectorFuncionarios.at(c)->getDataAno() << endl
      << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
      << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;
    
    // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
      switch(vectorFuncionarios.at(c)->getTipoFuncionario()){
        case 1:
          break;
        case 2:
          cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          break;
        case 3:
          cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          break;
        case 4:
          cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          cout << "Área de formação acadêmica máxima: " << vectorFuncionarios.at(c)->getAreaAcademicaMax() << endl;
          break;
      }
  }
    
}
}

int Gerenciador::exibirLista(){
  for(int c = 0; c < vectorFuncionarios.size(); c++){
    cout << "\nCódigo do funcionário: "<< vectorFuncionarios.at(c)->getCodigo() << endl
    << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
    << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
    << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
    << "Data de ingresso: " << vectorFuncionarios.at(c)->getDataDia() << "/" << vectorFuncionarios.at(c)->getDataMes() << "/" << vectorFuncionarios.at(c)->getDataAno() << endl
    << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
    << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;
    
    // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
    switch(vectorFuncionarios.at(c)->getTipoFuncionario()){
      case 1:
        break;
      case 2:
        cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
        break;
      case 3:
        cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
        cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
        break;
      case 4:
        cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
        cout << "Área de formação acadêmica máxima: " << vectorFuncionarios.at(c)->getAreaAcademicaMax() << endl;
        break;
    }
  }
  
}

int Gerenciador::exibirListaTipo(){
  int tipo;
  cout << "Insira o tipo de funcionário que gostaria de exibir\n"
    << "1. Operador\n"
    << "2. Gerente\n"
    << "3. Diretor\n"
    << "4. Presidente\n";
  cin >> tipo;
  
  for(int c = 0; c < vectorFuncionarios.size(); c++){
    if(vectorFuncionarios.at(c)->getTipoFuncionario() == tipo){
      cout << "\nCódigo do funcionário: "<< vectorFuncionarios.at(c)->getCodigo() << endl
      << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
      << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
      << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
      << "Data de ingresso: " << vectorFuncionarios.at(c)->getDataDia() << "/" <<     vectorFuncionarios.at(c)->getDataMes() << "/" << vectorFuncionarios.at(c)->getDataAno() << endl
      << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
      << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;
    
    // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
      switch(vectorFuncionarios.at(c)->getTipoFuncionario()){
        case 1:
          break;
        case 2:
          cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          break;
        case 3:
          cout << "Área de supervisão: " << vectorFuncionarios.at(c)->getAreaSupervisao() << endl;
          cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          break;
        case 4:
          cout << "Área de formação: " << vectorFuncionarios.at(c)->getAreaFormacao() << endl;
          cout << "Área de formação acadêmica máxima: " << vectorFuncionarios.at(c)->getAreaAcademicaMax() << endl;
          break;
      }
  }
    
}
}
