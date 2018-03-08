#include <iostream>

using namespace std;


class Kup{

    int sayi;
public:
    Kup(){
        sayi=5;
    }

    friend int kup_al();
}k;

int kup_al(){

    return k.sayi*k.sayi*k.sayi;
}

int main() {
    cout<< kup_al() <<endl;
    return 0;
}