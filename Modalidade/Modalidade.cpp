#include "Modalidade.hpp"
#include <string.h>

char* Modalidade::GetNome(){
    return this->nome;
}

void Modalidade::SetNome(char *nome){
   this->nome =  nome;
}
