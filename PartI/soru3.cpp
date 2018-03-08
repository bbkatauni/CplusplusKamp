#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
	int kHak=3;
	string kullanici="bbkatauni",parola="başarı";//önceden tanımlanan kullanıcı adı ve parola
	string kullaniciGirilen,parolaGirilen;//kullanıcının gireceği parola ve şifre
	do{
		cout<<"Kullanıcı Adı:";
		cin>>kullaniciGirilen;
		cout<<"Sifre:";
		cin>>parolaGirilen;
		//compare() eğer eşleşme varsa false yollar.
		if(!kullanici.compare(kullaniciGirilen) && !parola.compare(parolaGirilen)){//eğer kullanıcı adı ve şifre eşleşiyorsa.
			cout<<"TEBRİKLER"<<endl;
			break;//döngüden çık
		}
		else{//eşleşmiyorsa
			kHak--;//hakkı azalt
			if(kHak==0){//eğer hak bitmişse
				cout<<"Hakkınız bitti!"<<endl;
			}
			else{//bitmemişse.
				cout<<"Kullanıcı adı veya şifre yanlış lütfen tekrar deneyin. Kalan hakkınız:"<<kHak<<endl;
			}
		}
	}while(kHak>0);//buraya yazdığımız koşulun pek bir önemi kalmamış olsa da bazı bug'ları eklemek için gerekli diyebiliriz. 
	return 0;
}
