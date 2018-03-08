#include <iostream>
#include <string>

using namespace std;

class Insanlar{

    string ad,soyad;
    int yas;
public:
    Insanlar(string a,string s,int y){
        ad = a;
        soyad = s;
        yas = y ;
    }
    void goster(){
        cout<<"Ad: "<<ad<<endl;
        cout<<"Soyad: "<<soyad<<endl;
        cout<<"Yas: "<<yas<<endl;
        cout<<"--------\n"<<endl;
    }
};


int main() {

    Insanlar insan1("Ezgi","Zor",21);
    Insanlar insan2("Sus","İnanırım",22);

    insan1.goster();
    insan2.goster();


    return 0;
}