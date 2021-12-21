#ifndef SIETSEG_H
#define SIETSEG_H
#include <bitset>
#include <vector>
#include "Segmento.h"
using namespace std;

class SietSeg{
    private:
        Segmento seg;
        bitset<7> decoder;
        bitset<5> type;
        vector<char> line1,line2,line3,line4,line5,line6,line7;
        int digits;
    public:
        SietSeg();
        ~SietSeg();
        void linetype(int);
        void setSeg(bitset<7>);
        void getSeg(int);
};

#endif