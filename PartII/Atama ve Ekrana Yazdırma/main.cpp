#include <iostream>
using namespace std;

class goster{

    int sayi;
    public:

    void atamaYap(int a){
        sayi =a;
    }

    int ekranaYaz(){
        return sayi;
    }

}x,y;


int main() {
    x.atamaYap(5);
    y.atamaYap(3);

    cout<<"X Değeri: "<<x.ekranaYaz()<<endl;
    cout<<"Y Değeri: "<<y.ekranaYaz()<<endl;


    return 0;
}