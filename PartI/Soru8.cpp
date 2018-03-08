#include <iostream>
#include <time.h>
#include <stdio.h>    
#include <stdlib.h>   
#include <conio.h>
using namespace std;

int main(int argc, char** argv) {
	int dizi[100];
	int sayac=0;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		dizi[i]=rand()%10+1;
		cout<<"Dizi:"<<dizi[i]<<endl;
		if(dizi[i]==5){
			sayac++;
		}
		
		
	}
	cout<<"Sayac:"<<sayac;
	return 0;
}
