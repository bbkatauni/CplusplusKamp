#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
	int girilenDakika,dakikaAsim=0;
	float asimUcret;//Ücret aşımı durumunda ondalık sayılarla oynayacağımız için veri tipimiz float olacaktır.
	cout<<"Bisikletin ne kadar süredir kirada olduğunu dakika olarak giriniz:";
	cin>>girilenDakika;
	if(girilenDakika<30){//Girilen dakika 30 dakikanın altındaysa
		cout<<"Odenmesi gereken ücret 5 TL'dir"<<endl;
	}
	else if(girilenDakika>=30){//30 dakika ve üstü durumu
		dakikaAsim=girilenDakika-30;//girilen dakikadan 30 dakikayı çıkarıyoruz ve aşımı buluyoruz dakika cinsinden.
		asimUcret=(((float) dakikaAsim)*0.25)+5;// float cast ile integer aşım süresini 0.25 ile çarpıyoruz. Standart 5Tl ücrete ekliyoruz.
		cout<<"Odenmesi gereken ücret "<<asimUcret<<" TL'dir"<<endl;
	}
	else{//negatif sayı girilmesi veya karakter girilebilmesi durumu.
		cout<<"Tanımsız bir sayı girdiniz."<<endl;
	}
	return 0;
}
