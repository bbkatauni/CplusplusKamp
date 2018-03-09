#include <iostream>

using namespace std;

class A{
public:

    A(){
        cout<<"Temel sinif yapici fonksiyonu çalıştı."<<endl;
    }
    ~A(){
        cout<<"Temel sinif yikici fonksiyonu çalıştır. "<<endl;
    }

};
class B: private A {

public:
    B(){
        cout<<"Türetilmiş sinif yapici fonksiyonu çalıştı."<<endl;
    }
    ~B(){
        cout<<"Türetilmiş sınıf yikici fonksiyonu çalıştı."<< endl;
    }
};


int main() {

    B nesne;




    return 0;
}