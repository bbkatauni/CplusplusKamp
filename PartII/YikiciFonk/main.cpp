#include <iostream>

using namespace std;

class test{

    int a;

public:
    test();
    ~test();
    void goruntule();



}x;

test::test(){
    cout<<"Yapıcı Fonksiyon Çalıştı.\n";
    a = 5;
}

test::~test(){

    cout<<"Görev Bitti. Yokediliyor\n ";

}
void test::goruntule() {

    cout<< "a değeri: "<< a <<endl;
}

int main(){
    x.goruntule();
    return 0;
}