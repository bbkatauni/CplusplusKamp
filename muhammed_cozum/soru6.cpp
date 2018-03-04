#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
	int kilo=100,sayacF=1,hedefKilo;
	hedefKilo=kilo+(kilo*10/100);//hedef kilo belirliyoruz.
	while(1){
		if(sayacF%2==1){//Tek mi? 
			kilo-=(kilo*7/100);
		}
		else{//Değilse
			kilo+=(kilo*9/100);
		if(kilo>hedefKilo){//Eğer hedef kilo'yu geçmişse
			break;//döngüden çıkıyoruz
		}
		sayacF++;//geçen ay'ı 1 arttırıyoruz.
	}
	cout<<"Hedef Kiloya ulaştığı ay:"<<sayacF<<endl;
	return 0;
}
