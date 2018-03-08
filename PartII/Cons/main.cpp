#include <iostream>
#include <ctime>

using namespace std;

class ConstOrnek{

    public:

    int sayi;

    ConstOrnek(){
        sayi =0;
    }

    void SayiAta(int x){
        sayi = x;
    }

    int dondur() const {

        return sayi;
    }

};

int main() {
    const ConstOrnek test;  //Nesne Const olarak tanımlandı
    ConstOrnek test2;       // Nesne const olmadan tanımlandı

    test.dondur();    // Nesne const - fonksiyon const(HATA YOK)!!
  //  test.SayiAta(5);    // Nesne const - fonksiyon const değil(HATA YOK)!!

    test2.dondur(); // Nesne const değil - fonksiyon const(HATA YOK)!!
    test2.SayiAta(5);   // Nesne const değil - fonksiyon const değil (HATA YOK)!!

    return 0;
}