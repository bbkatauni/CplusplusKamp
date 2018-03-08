#include <iostream>
#include "Dikdortgen.h"

using namespace std;

int main() {

    Dikdortgen d1;

    cout<<"Kisa Kenarı giriniz: ";
    cin>>d1.kisaKenar;
    cout<<"Uzun Kenarı Giriniz: ";
    cin>>d1.uzunKenar;

    cout<<"Dikdörtgenimizin Alanı: "<< d1.alan()<<endl;
    cout<<"Dikdörtgenimizin Çevresi: "<<d1.cevre()<<endl;



    return 0;
}