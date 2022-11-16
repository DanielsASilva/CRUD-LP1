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
        vectorFuncionarios.push_back(new Operador(codigoFuncionario, nome, endereco, dia, mes, ano, "Operador", telefone, salario));
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
        
        vectorFuncionarios.push_back(new Gerente(codigoFuncionario, nome, endereco, dia, mes, ano, "Diretor", telefone,  salario, areaSupervisao, areaFormacao));
        break;
        case 4:
        cout << "Digite a área de formação do presidente: ";
        getline(cin, areaFormacao);
        
        cout << "Digite a formação academica máxima do presidente: ";
        getline(cin, areaAcademicaMax);
        
        vectorFuncionarios.push_back(new Presidente(codigoFuncionario, nome, endereco, dia, mes, ano, "Presidente", telefone, salario, areaFormacao, areaAcademicaMax));
        break;
        default:
        cout << "Opção inválida, tente novamente!\n";
        break;
    }
    
    fstream fs;
    
  // Arquivo é aberto e as informações gerais previamente cadastradas são adicionadas
    stream.open("./listaFuncionario.txt", fstream::out);
    if(! stream.is_open()){
      cout << "Erro ao abrir o .txt" << endl; 
    }
  
    for(int c = 0; c < vectorFuncionarios.size(); c++){
      stream << listaFuncionario.at(c)->getCodigo() << endl;
      stream << listaFuncionario.at(c)->getNome() << endl;
      stream << listaFuncionario.at(c)->getEndereco() << endl;
      stream << listaFuncionario.at(c)->getDia() << endl;
      stream << listaFuncionario.at(c)->getMes() << endl;
      stream << listaFuncionario.at(c)->getAno() << endl;
      stream << listaFuncionario.at(c)->getPosicao() << endl;
      stream << listaFuncionario.at(c)->getTelefone() << endl;
      stream << listaFuncionario.at(c)->getSalario() << endl;
      
      // Em seguida, as informações específicas por cargo são adicionadas
      switch(listaFuncionarios.at(c)->getTipo()){
        case 1:
          break;
        case 2:
          stream << listaFuncionario.at(c)->getAreaSupervisao() << endl;
          break;
        case 3:
          stream << listaFuncionario.at(c)->getAreaSupervisao() << endl;
          stream << listaFuncionario.at(c)->getAreaFormacao() << endl;
          break;
        case 4:
          stream << listaFuncionario.at(c)->getAreaFormacao() << endl;
          stream << listaFuncionario.at(c)->getAreaAcademicaMax() << endl;
          break;
      }
      
    }
  
}


int Gerenciador::editarFuncionario(){
  int codigo, indice, check, opt;
  cout << "Existem " << vectorFuncionarios.size() << " funcionários na empresa, digite o código do funcionário para edição: ";
  cin >> codigo;
  cin.ignore();
  
  // Com o código respectivo ao funcionário em questão, as informações que o usuário pretende editar são reescritas e atualizadas 
  while(1){
    for(int c = 0; c < vectorFuncionarios.size; c++){
       if(listaFuncionarios.at(c)->getCodigo() == codigo){
          indice = c;
          check++;
       }
    }
    if(check == 0){
      cout << "código iválido << endl; 
    }else{
      break; 
    }  
  }
  
  //
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
      int dia;
      cout << "Insira o novo dia de ingresso: ";
      cin >> dia;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setDia(dia);
      cout << "\nEdição Concluída\n";
      break;
    case 3:
      int mes;
      cout << "Insira o novo mês de ingresso: ";
      cin >> mes;
      cin.ignore();
      
      vectorFuncionarios.at(indice)->setMes(mes);
      cout << "\nEdição Concluída\n";
      break;
    case 4:
      int ano;
      cout << "Insira o novo ano de ingresso: "
      cin >> ano;
      cin.ignore();
        
      vectorFuncionarios.at(indice)->setAno(ano);
      cout << "\nEdição Concluída\n";
      break;
    case 5:
      string endereco;
      cout << "Insira o novo endereço: ";
      getline(cin, endereco);
      
      vectorFuncionarios.at(indice)->setEndereco();
      cout << "\nEdição Concluída\n";
      break;
    case 6:
      string posicao;
      cout << "Insira a nova posição: ";
      getline(cin, posicao);
      
      vectorFuncionarios.at(indice)->setPosicao(posicao);
      cout << "\nEdição Concluída\n";
      break;
    case 7:
      float salario;
      cout << "Insira o novo salário: ";
      cin >> salario;
      cin.ignore;
      
      vectorFuncionarios.at(indice)->setSalario(salario);
      cout << "\nEdição Concluída\n";
      break;
  }
}
  
int Gerenciador::excluirFuncionario(){
  
}

// Um funcionário específico terá seus dados gerais listados em ordem
int Gerenciador::exibirFuncionario(){
  for(int c = 0; c < vectorFuncionarios.size(); c++){
    cout << "\nCódigo do funcionário: "<< listaFuncionarios.at(c)->getCodigo() << endl
    << "Nome: " << listaFuncionarios.at(c)->getNome() << endl
    << "Endereco: " << listaFuncionarios.at(c)->getEndereco() << endl
    << "Telefone: " << listaFuncionarios.at(c)->getTelefone() << endl
    << "Data de ingresso: " << listaFuncionarios.at(c)->getDia() << "/" << listaFuncionarios.at(c)->getMes() << "/" listaFuncionarios.at(c)->getAno() << endl
    << "Posição na empresa: " << listaFuncionarios.at(c)->getPosicao() << endl
    << "Salario: " << listaFuncionarios.at(c)->getSalario() << endl;
    
    // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
    switch(listaFuncionarios.at(c)->getTipo()){
      case 1:
        break;
      case 2:
        cout << "Área de supervisão: " << listaFuncionarios.at(c)->getAreaSupervisao() << endl;
        break;
      case 3:
        cout << "Área de supervisão: " << listaFuncionarios.at(c)->getAreaSupervisao() << endl;
        cout << "Área de formação: " << listaFuncionarios.at(c)->getAreaFormacao() << endl;
        break;
      case 4:
        cout << "Área de formação: " << listaFuncionarios.at(c)->getAreaFormacao() << endl;
        cout << "Área de formação acadêmica máxima: " << listaFuncionarios.at(c)->getAreaAcademicaMax() << endl;
        break;
    }
  }
  
}


int Gerenciador::exibirLista(){
  
}

int Gerenciador::exibirListaTipo(){
  
}
