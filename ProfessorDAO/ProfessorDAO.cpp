#include "ProfessorDAO.hpp"

Professor* ProfessorDAO::Retrive(int cpf){
    Professor *professor = new Professor; // pensar em uma maneira de armaenar ovarios professores
    char nome[25] = "Lucio Valentin";
    professor->SetNome(nome);
    professor->SetSalario(15000);
    professor->SetInativo(false);
    professor->SetCPF(123);
    Modalidade *modalidade1 = new Modalidade;
    Modalidade *modalidade2 = new Modalidade;
    char boxe[20]
    modalidade1->SetNome("BOXE");
    modalidade2->SetNome("JUDO");
    professor->SetModalidade(modalidade1);
    professor->SetModalidade(modalidade2);

    return professor;
}