#include <iostream>
#include <string>

using namespace std;

class Okul {
protected:
    string ad;
public:
    Okul(){} //Varsayılan yapıcı.
    Okul(string x){
        ad =x;
    }
    string adDondur(){
        return ad;
    }
};

class Ogrenci: public Okul {

    string soyad;
    int numara;
public:
    Ogrenci(){} //Varsayılan yapıcı
    Ogrenci(string a, string s,int no){
        ad = a;
        soyad = s;
        numara = no;
    }

    void goster(){

        cout<<"Adı: "<<ad<<endl;
        cout<<"Soyad: "<<soyad<<endl;
        cout<<"Numara: "<<numara<<endl;
        cout<<"---------------"<<endl;

    }

};

int main() {

    Okul okl("Atatürk Üniversitesi");
    Ogrenci ogr1("Selamet","Şamlı",1),ogr2("Fikre","Abi",2),ogr3("Orhan","Ovacıklı",3);

    //cout<<okl.ad; Hata!!
    //cout<< ogr1.ad<<ogr.soyad<<ogr1.no<<endl; Hata

    ogr1.goster();
    ogr2.goster();
    ogr3.goster();

    cout<<okl.adDondur()<<endl;


    return 0;
}