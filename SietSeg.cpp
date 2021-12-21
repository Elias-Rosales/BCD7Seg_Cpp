
#include "SietSeg.h"
#include <iostream>

SietSeg::SietSeg(){
    
}

SietSeg::~SietSeg(){

}

void SietSeg::setSeg(bitset<7> _decoder){
    decoder = _decoder;

    //Limpiar vectores
    line1.erase(line1.begin(),line1.end());
    line2.erase(line2.begin(),line2.end());
    line3.erase(line3.begin(),line3.end());
    line4.erase(line4.begin(),line4.end());
    line5.erase(line5.begin(),line5.end());
    line6.erase(line6.begin(),line6.end());
    line7.erase(line7.begin(),line7.end());

    //Lógica para llenar renglones
    if (decoder[6]){type = 0x0E;}
    else type = 0x00;
    for(unsigned i = 0;i<type.size();i++){
        line1.push_back(seg.getSymbol(type.test(i)));
    }

    if (decoder[5]) type = 0x10;
    else type = 0x00;
    for(unsigned i = 0;i<type.size();i++){
            line2.push_back(seg.getSymbol(type.test(i)));
            line3.push_back(seg.getSymbol(type.test(i)));
    }

    if (decoder[4]) type = 0x10;
    else type = 0x00;
    for(unsigned i = 0;i<type.size();i++){
            line5.push_back(seg.getSymbol(type.test(i)));
            line6.push_back(seg.getSymbol(type.test(i)));
    }

    if (decoder[3]) type = 0x0E;
    else type = 0x00;
    for(unsigned i = 0;i<type.size();i++){
        line7.push_back(seg.getSymbol(type.test(i)));
    }

    if (decoder[2]){
        if(decoder[4]){
            type = 0x11;
            line5.erase(line5.begin(),line5.end());
            line6.erase(line6.begin(),line6.end());
            for(unsigned i = 0;i<type.size();i++){
                line5.push_back(seg.getSymbol(type[i]));
                line6.push_back(seg.getSymbol(type[i]));
            }
        }
        else{
            line5.erase(line5.begin());
            line5.insert(line5.begin(),seg.getSymbol(true));
            line6.erase(line6.begin());
            line6.insert(line6.begin(),seg.getSymbol(true));
        }
    }

    if (decoder[1]){
        if(decoder[5]){
            type = 0x11;
            line2.erase(line2.begin(),line2.end());
            line3.erase(line3.begin(),line3.end());
            for(unsigned i = 0;i<type.size();i++){
                line2.push_back(seg.getSymbol(type[i]));
                line3.push_back(seg.getSymbol(type[i]));
            }
        }
        else{
            line2.erase(line2.begin());
            line2.insert(line2.begin(),seg.getSymbol(true));
            line3.erase(line3.begin());
            line3.insert(line3.begin(),seg.getSymbol(true));
        }
    }

    if (decoder[0]){type = 0x0E;}
    else type = 0x00;
    for(unsigned i = 0;i<type.size();i++){
        line4.push_back(seg.getSymbol(type[i]));
    }
}

void SietSeg::getSeg(int _linea){
    //Printear linea de acuerdo al valor _linea
    switch (_linea)
    {
    case 0:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line1.at(j);
        break;
    case 1:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line2.at(j);
        break;
    case 2:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line3.at(j);
        break;
    case 3:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line4.at(j);
        break;
    case 4:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line5.at(j);
        break;
    case 5:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line6.at(j);
        break;
    case 6:
        for(unsigned j = 0; j<line1.size();j++)
            cout << line7.at(j);
        break;
    default:
        break;
    }
}