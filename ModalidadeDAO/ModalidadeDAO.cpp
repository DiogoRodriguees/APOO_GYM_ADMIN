#include "ModalidadeDAO.hpp"
#include <string.h>

ModalidadeDAO::ModalidadeDAO(){
    this->quantidadeModalidade = 0;
    char nome[20] = "Boxe";
    Modalidade *modalidadeTeste = this->Create(nome);
    // modalidadeTeste = this->Create(nome);
    // modalidadeTeste = this->Create(nome);
    // modalidadeTeste = this->Create(nome);
}

Modalidade **ModalidadeDAO::GetModalidades()
{
    return this->modalidades;
}

Modalidade* ModalidadeDAO::Create(char*nome){
    Modalidade *modalidade = new Modalidade;
    modalidade->SetNome(nome);
    this->modalidades[this->quantidadeModalidade++];
    return modalidade;
}

Modalidade* ModalidadeDAO::Retrive(char* nome){
    int i = 0;

    while(i < this->quantidadeModalidade){
        if(strcmp(nome,this->modalidades[i]->GetNome()) == 0){
            return this->modalidades[i];
        }
    }
    return this->modalidades[0];
}
void ModalidadeDAO::Update(Modalidade* modalidade){}
void ModalidadeDAO::Delete(char* nome){}

