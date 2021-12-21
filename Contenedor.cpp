#include "Contenedor.h"
#include <iostream>

Contenedor::Contenedor(int _num_dig){
    if(_num_dig>10) num_dig = 10;
    else    num_dig = _num_dig;
}

Contenedor::~Contenedor(){
}

void Contenedor::setDig(SietSeg _dig, int _pos){
    if(_pos <= num_dig-1) dig[_pos] = _dig;
}

void Contenedor::getDig(){
    for(int i = 0; i<7; i++){
        for(int j = 0; j<num_dig; j++){
            dig[j].getSeg(i);
            cout << "  ";
            if(j==num_dig-1){
                cout << endl;
            }
        }
    }
}