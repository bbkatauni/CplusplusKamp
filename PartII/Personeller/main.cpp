#include <iostream>
#include <string>

using namespace std;

class Personeller{

    string personelAdi,personelSoyadi;
    int yas;

public:

    void bilgiler(string padi,string psoyadi,int sayi){

        personelAdi=padi;
        personelSoyadi=psoyadi;
        yas=sayi;
    }

    void goruntule(){

        cout<<"Personel Adı: "<<personelAdi<<endl;
        cout<<"Personel Soyadı: "<<personelSoyadi<<endl;
        cout<<"Personel Yaşı: "<<yas<<endl;

    }
};

int main() {

    Personeller prs1,prs2,prs3;

    prs1.bilgiler("Selamet","Şamlı",22);
    prs2.bilgiler("Hayri","Abi",53);
    prs3.bilgiler("Fikret","Atmaca",33);

    prs1.goruntule();
    prs2.goruntule();
    prs3.goruntule();



    return 0;
}