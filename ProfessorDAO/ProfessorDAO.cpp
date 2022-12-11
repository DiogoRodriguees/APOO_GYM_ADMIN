#include "ProfessorDAO.hpp"


ProfessorDAO::ProfessorDAO(){
    this->countProfessor = 0;
    Professor *professor = new Professor; // pensar em uma maneira de armaenar ovarios professores
    char nome[25] = "Lucio Valentin";
    professor->SetNome(nome);
    professor->SetSalario(15000);
    professor->SetInativo(false);
    professor->SetCPF(123);
    Modalidade *modalidade1 = new Modalidade;
    Modalidade *modalidade2 = new Modalidade;
    modalidade1->SetNome("Boxw");
    modalidade2->SetNome("Judo");
    professor->SetModalidade(modalidade1);
    professor->SetModalidade(modalidade2);

    this->professores[this->countProfessor++] = professor;
}

Professor* ProfessorDAO::Retrive(int cpf){
    int i = 0;

    while(i < this->countProfessor){
        if(professores[i]->GetCPF() == cpf){
            return professores[i];
        }
    }

    return NULL;
}