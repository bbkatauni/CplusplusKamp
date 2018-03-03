#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
        int girilenSayilar[3];//girilecek sayıları tutacak dizimiz.
        int temp=-1;
        int x,y,toplam=0;
        //Bu sayıları dizide tutmamızdaki en büyük amacımız sıralama için sorting yapacak olmamız.!
        for(int i=0;i<3;i++){//input aldırıyoruz bu döngümüzde
                cout<<"Lütfen "<<i+1<<". sayıyı giriniz:";
                cin>>girilenSayilar[i];
        }
        //Sorting
        for(int i=1;i<=3;i++){
                x=girilenSayilar[i];//döngüdeki içeriği kaydediyoruz.
                y=i-1;//bir önceki değerin indisini kaydediyoruz.       
                while(y>=0 && (girilenSayilar[y]>x)){//incelenen bir önceki değer döngüde incelediğimiz değerden büyükse ve bir önceki değerin indisi 0'dan büyükse 
                        girilenSayilar[y+1]=girilenSayilar[y];//bir sonraki değere bir önceki değer yazılır
                        y=y-1;//indis iterator'ü küçültülür
                }
                girilenSayilar[y+1]=x;//While'ın içine girmişse iterator indisi küçüldüğü için bir önceki değeri swap'layacak. 
                //Eğer While'ın içine hiç girmemişse kendisini kendine yazacak.

        }
        //Sorting-bitim
       	toplam=girilenSayilar[0]+girilenSayilar[1];//Dizideki en küçük iki sayının toplamı alınır.
	if(toplam>girilenSayilar[2]){//Eğer toplam en büyük sayımdan büyükse
		cout<<"TEBRİKLER!"<<endl;
	}
	else{//değilse 
		cout<<"MAALESEF OLMADI!"<<endl;
	}
        return 0;
}

