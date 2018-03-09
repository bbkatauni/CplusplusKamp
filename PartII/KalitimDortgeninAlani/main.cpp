#include <iostream>
#include <string>

using namespace std;

class Dortgen{

public:
    int kenar1, kenar2;
    Dortgen(){};
    void alan () {
        cout<<"Dortgenin Alani: "<<kenar1*kenar2<<endl;
    }
};

class Kare : private Dortgen {
public:
    Kare(int x){
        kenar1=x;
        kenar2=x;
    }
    void alanCagir (){
        alan();
    }
};


int main() {
   Kare nesne (4);
    //nesne.alan(); Hata!!!
    nesne.alanCagir();


    return 0;
}