#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include "SietSeg.h"
using namespace std;

class Contenedor{
    private:
        int num_dig, pos;
        SietSeg dig[10];
    public:
        Contenedor(int);
        ~Contenedor();
        void setDig(SietSeg,int);
        void getDig();
};

#endif