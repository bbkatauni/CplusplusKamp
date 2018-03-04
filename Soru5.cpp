#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int sayi1,sayi2;
	cout<<"1. sayiyi giriniz:";
	cin>>sayi1;
	cout<<"2. sayiyi giriniz:";
	cin>>sayi2;
	int i;
	double a;
	if(sayi1>=sayi2){
		for(i=sayi2;i<=sayi1;i++){
			a=(double)sqrt(i);
			cout<<i<<" sayisinin "<<"karekoku:"<<a;
		}
	}
	else if(sayi2>=sayi1){
		for(i=sayi1;i<=sayi2;i++){
			a=(double)sqrt(i);
			cout<<i<<" sayisinin "<<"karekoku:"<<a<<"\n";
		}
	}
	
	
	
	
	return 0;
}
