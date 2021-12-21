#include "Segmento.h"

Segmento::Segmento(){
}

Segmento::~Segmento(){
}

char Segmento::getSymbol(bool _on_off){
    if(_on_off)
        symbol = 'M';
    else
        symbol = ' ';

    return symbol;
}