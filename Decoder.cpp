#include "Decoder.h"

Decoder::Decoder(){

}

Decoder::~Decoder(){

}

void Decoder::decodificar(int _num){
    num = _num;
    switch (num)
{
    case 0:
        estado = 0x7E;
        break;
    case 1:
        estado = 0x30;
        break;
    case 2:
        estado = 0x6D;
        break;
    case 3:
        estado = 0x79;
        break;
    case 4:
        estado = 0x33;
        break;
    case 5:
        estado = 0x5B;
        break;
    case 6:
        estado = 0x5F;
        break;
    case 7:
        estado = 0x70;
        break;
    case 8:
        estado = 0x7F;
        break;    
    case 9:
        estado = 0x7B;
        break;    
    default:
        break;
    }
}

bitset<7> Decoder::getEstado(){
    return estado;
}