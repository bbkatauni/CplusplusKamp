#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int sayi1,sayi2,sayi3,toplam;
	int max=0;
	cout<<"1. sayiyi girin:";
	cin>>sayi1;
	cout<<"2. sayiyi girin:";
	cin>>sayi2;
	cout<<"3. sayiyi girin:";
	cin>>sayi3;
	
	if(sayi1>=sayi2 && sayi1>=sayi3){
		cout<<"buyuk sayi 1\n";
		max=sayi1;
		toplam=sayi2+sayi3;
	}
	else if(sayi2>=sayi1 && sayi2>=sayi3){
	
		cout<<"buyuk sayi2\n";
		max=sayi2;
		toplam=sayi1+sayi3;
	}
	else{
		
		cout<<"buyuk sayi3\n";
		max=sayi3;
		toplam=sayi2+sayi1;
	}
	if(max<toplam){
		cout<<"Tebrikler";
		
	}
	else{
		cout<<"Maalesef";
	}
	
	
	
	
	return 0;
}