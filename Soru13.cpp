#include <iostream>
#include <string>

using namespace std;

int main() {

    int var = 0;
    char *dizi[10] ={"Selamet","Hayri","Fikret","Ilteris","Enes","Burak","Muhammed","Meva","Akif","Edison"};

    char ad[10];

    cout << "Bir ad giriniz:";
    cin >> ad;

    for (int i = 0; i <10; ++i) {

        if(strcmp(dizi[i],ad)==0) //strcmp fonksiyonu girilen iki string değerinin aynı olup olmadığını kontrol eder.
                                // eğer iki string aynı ise geriye 0 değerini döndürür. Diğer durumlarda ise 1 değerini dondurur.

            var = 1;
    }
    if(var == 1){
        cout << "Girilen ad dizide var\n";
    }else{
        cout << "Girilen ad dizide yok" << endl;
    }


    return 0;
}
