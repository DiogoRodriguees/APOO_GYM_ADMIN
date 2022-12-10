#include "System.hpp"
#include <iostream>
#include <stdio.h>

System::System(){
    this->contratoCtrl = new ContratoCtrl;
}

void System::BootSystem(){
    bool systemLoad = true;
    while (systemLoad)
    {
        system(CLEAR_TERMINAL);
        std::cout << "Bem Vindo\n";
        std::cout << "O que voce deseja?\n";
        std::cout << "1. Criar Turma\n";
        std::cout << "2. Matricular Aluno\n";
        std::cout << "3. Contratar Funcionario\n";
        std::cout << "4. Sair\n";

        char opcao;
        std::cin >> opcao;
        switch (opcao)
        {
            case '1': this->CriarTurma();
            break;

            case '2': this->MatricularAluno();
            break;

            case '3': this->ContratarFuncionario();
            break;

            case '4': systemLoad = false;
            break;
        }
    }
    system(CLEAR_TERMINAL);
}


void System::ContratarFuncionario()
{
    system(CLEAR_TERMINAL);
    std::cout << "Preenca os campos do contrato....\n";

    int cpf;
    int i = 0;
    int j = 0;
    std::cout << "CPF: ";
    std::cin >> cpf;
    Modalidade** modalidades = this->contratoCtrl->IniciarContrato(cpf, &i);

    char inicio[10], fim[10];
    std::cout << "Data de Inicio: ";
    std::cin >> inicio;
    std::cout << "Data de Termino: ";
    std::cin >> fim;
    this->contratoCtrl->DefinirPeriodoDoContrato(inicio, fim);

    std::cout << "Informe as modalidade do contrato: \n";
    while(j < i){
        std::cout << "Entrei\n";
        std::cout << "i:"<< i << "\n";
        std::cout << "j:"<< j << "\n";
        j++;
    }

    std::cin >> cpf;
    Modalidade *modalidade = modalidades[cpf];
    this->contratoCtrl->InserirModalidadesDoProfessor(modalidade);

    system(CLEAR_TERMINAL);
    this->contratoCtrl->Confirmar();
}

void System::CriarTurma(){}
void System::MatricularAluno(){}
