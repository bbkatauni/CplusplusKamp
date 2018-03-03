#include <iostream>

using namespace std;

/*

--Yasin Burak YEGİN--
--Bilgisayar ve Bilişim Kulubü C++ Kampı--
--1.Soru--

*/

int main(){

int sayi1,sayi2,sayi3;

cin>>sayi1>>sayi2>>sayi3;

int max;

max=sayi1;

if(max < sayi2){
	max=sayi2;
}
if(max < sayi3){
	max=sayi3;
}

//cout <<" Max = "<<max<<endl; Max Sayı Kontrolü İçin

if(max>sayi1 && max>sayi2){
	int sonuc=sayi1+sayi2;
	if(sonuc>max)
		cout<<"Tebrikler"<<endl;
	else
		cout<<"Maalesef"<<endl;
}

if(max>sayi2 && max>sayi3){
        int sonuc=sayi2+sayi3;
        if(sonuc>max)
                cout<<"Tebrikler"<<endl;
        else
                cout<<"Maalesef"<<endl;
}

if(max>sayi1 && max>sayi3){
        int sonuc=sayi1+sayi3;
        if(sonuc>max)
                cout<<"Tebrikler"<<endl;
        else
                cout<<"Maalesef"<<endl;
}
return 0;
}
