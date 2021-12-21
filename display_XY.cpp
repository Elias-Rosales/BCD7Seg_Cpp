#include <iostream>
#include <vector>
#include <string>
#include "Decoder.h"
#include "SietSeg.h"
#include "Segmento.h"
#include "Contenedor.h"
using namespace std;
void getDigits(vector<int>& digits, string str_num);

int main(){
    string str_num;
    cout << "Please, enter some numbers (Max 10):" << endl;
    cin >> str_num;
    vector<int> digits;
    getDigits(digits,str_num);
    Decoder d;
    SietSeg l;
    Contenedor c(digits.size());
    for(int i = 0; i<digits.size();i++){
        d.decodificar(digits.at(i));
        l.setSeg(d.getEstado());
        c.setDig(l,i);
    }

    c.getDig();
    return 0;
}

void getDigits(vector<int>& digits, string str_num){
    string num[str_num.size()];
    for(int i = 0; i<str_num.size(); i++){
        num[i] = str_num[i];
        int a = stoi(num[i]);
        digits.push_back(a);
    }
}