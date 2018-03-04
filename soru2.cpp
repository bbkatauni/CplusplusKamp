#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
	char cDeger;
	cout<<"Lütfen tip belirlemek için bir değer giriniz:";
	cin>>cDeger;
	if((int(cDeger)>=65 && int(cDeger)<=90)||(int(cDeger)>=97 && int(cDeger)<=122)){//Girilen değer eğer karakter ASCII'ye uyuyorsa
		cout<<"Bu bir karakterdir"<<endl;
	}
	else{//Karakterlerin tanımlı olduğu ASCII'ye dahil değilse
		if(int(cDeger)<48 || int(cDeger)>57){//ve eğer numaraların tutultuğu ASCII'ye de ait değilse.
			cout<<"Girilen Değer numeric veya karakter değildir"<<endl;
		}
		else{
			cout<<"Girilen değer integer'dır"<<endl;
		}
	}
	return 0;
}
