#include <iostream>
using namespace std;
int Toplama(double x,double y){
	double toplam;
	toplam=x+y;
	cout<<"Sonuc:"<<toplam<<endl;
	return toplam;
}
int Cikarma(double x,double y){
	double cikarma;
	cikarma=x-y;
	cout<<"Sonuc"<<cikarma<<endl;
	return cikarma;
}
int Carpim(double x,double y){
	double carpim;
	carpim=x*y;
	cout<<"Sonuc:"<<carpim<<endl;
	return carpim;
}
int Bolme(double x,double y){
	double bolme;
	if(y=!0 ){
		bolme=x/y;
		cout<<"Sonuc:"<<bolme<<endl;
	}
	else{
		cout<<"Bolen 0 olamaz.";
	}
}

int main(int argc, char** argv) {
	char islem;
	int sayi1,sayi2;
	cout<<"2 sayi giriniz:"<<endl;
	cin>>sayi1>>sayi2;
	cout<<"Yapilacak islemi seciniz:+,-,*,/";
	cin>>islem;
	switch (islem){
		case '+':Toplama(sayi1,sayi2);
				break;
		case '-':Cikarma(sayi1,sayi2);
				break;	
		case '*':Carpim(sayi1,sayi2);
				break;
		case '/':Bolme(sayi1,sayi2);
				break;
	
	}
	return 0;
}
