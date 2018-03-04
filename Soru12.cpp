#include <iostream>

using namespace std;


int main() {

    int *p;
    int dizi[10]={1,2,3,4,5,6,7,8,9,0};

    p=dizi;

    cout<< ++*p <<endl;
    cout<< *++p <<endl;
    cout<< *p++ <<endl;
    cout<< ++*p++ <<endl;
    cout<< (*++p)++ <<endl;
    cout<< &*p <<endl;
    cout<< *&p <<endl;


    return 0;
}