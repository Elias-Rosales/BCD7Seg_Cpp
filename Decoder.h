#ifndef DECODER_H
#define DECODER_H
#include <bitset>
using namespace std; 

class Decoder{
    private:
        bitset <7> estado;
        int num;
    public:
        Decoder();
        ~Decoder();
        void decodificar(int);
        bitset<7> getEstado();
};

#endif