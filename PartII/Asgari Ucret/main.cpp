//Kullanıcıdan iki işçinin adını, soyadını, aylık kaç saat çalıştığını, saatlik ücretinin ne kadar olduğu bilgisini
//alınız. eğer işçinin aylık maaşı 800TL den büyükse "asgari ücretten yüksek", değilse "asgari ücretten düşük" yazdırın.

#include <iostream>
#include <string>

using namespace std;


class Isciler{

    string ad,soyad;
    int saatUcreti,calistigiSaat;


public:
    float aylikMaas;
    void bilgiGir(){
        cout<<"İşcinin Adını Giriniz: ";
        cin>>ad;
        cout<<"İşcinin SoyA dını Giriniz: ";
        cin>>soyad;
        cout<<"İşcinin Saatlik Ücretini Giriniz: ";
        cin>>saatUcreti;
        cout<<"İşcinin Kaç Saat Çalıştığını Giriniz: ";
        cin>>calistigiSaat;
    }

    float maasHesapla(){

        return aylikMaas=saatUcreti*calistigiSaat;
    }
    void goster(){
        cout<<"İşçinin Adı: "<<ad<<endl;
        cout<<"işçinin Soyadı: "<<soyad<<endl;
        cout<<"İşçinin Maaşı: "<<maasHesapla()<<endl;
    }

    void yorum(float aylikMaas){
        if(aylikMaas>800)
            cout<<"Maaşı Asgari Ücretten Yüksek."<<endl;
        else
            cout<<"Maaşı Asgari Ücretten Düşük."<<endl;
    }
};


int main() {

    Isciler isci1,isci2;

    isci1.bilgiGir();
    cout<<"--------------------------\n";
    isci2.bilgiGir();
    cout<<"--------------------------\n";
    cout<<"İşçi Bilgileri\n\n";
    isci1.goster();
    isci1.yorum(isci1.aylikMaas);
    cout<<"--------------------------\n";
    isci2.goster();
    isci2.yorum(isci2.aylikMaas);

    return 0;
}