#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int daire[5];
    int enBuyuk;
    int enKalabalikAile;


    for (int i = 0; i <5 ; ++i) {

        cout<<i+1<<". Daire de kaç kişi yaşamaktadır: ";
        cin>>daire[i];

    }

    for (int j = 0; j <5 ; ++j) {

        enBuyuk=daire[0];
        enKalabalikAile = j+1;
        if(daire[j]>enBuyuk) {
            enBuyuk = daire[j];
            enKalabalikAile = j+1;
        }
    }

    cout << "En kalabalık Aile "<<enBuyuk<<" Kişi İle "<<enKalabalikAile<<". Ailedir"<<endl;

}