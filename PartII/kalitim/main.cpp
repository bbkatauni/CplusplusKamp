#include <iostream>
#include <string>

using namespace std;

class Omurgali{

public:
    int yas;
    string ad;
    void goruntule(){
        cout<<"Omurgalinin yasi : "<<yas<<endl;
        cout<<"Omurgalinin adi  : "<<ad<<"\n\n";
    }
};

class Surungen : public Omurgali{

public:
    Surungen (int y, string a){
        yas=y;
        ad=a;
    }
};
class Kus : public Omurgali {
public:
    Kus(int y, string a){
        yas = y;
        ad = a;
    }
};

int main() {

    Kus k(3,"Tweety");
    Surungen s(11, "Yılan");

    k.goruntule();
    s.goruntule();


    return 0;
}