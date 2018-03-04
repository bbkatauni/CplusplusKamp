#include<iostream>
#include<math.h>
using namespace std;
int main(int argc,char* argv[]){
	int sayi1,sayi2;
	double karekokT=0;
	cout<<"Lütfen iki adet sayı girin:";
	cin>>sayi1;
	cin>>sayi2;
	if(sayi1>sayi2){
		for(int i=sayi2;i<=sayi1;i++){
			karekokT+=sqrt(i);
		}
	}
	else{
		for(int i=sayi1;i<=sayi2;i++){
			karekokT+=sqrt(i);
		}
	}
	cout<<"Belirtilen aralıktaki sayıların karekökleri toplamı="<<karekokT<<endl;
	return 0;
}
