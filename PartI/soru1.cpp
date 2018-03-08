#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
        int girilenSayilar[3];//girilecek sayıları tutacak dizimiz.
        int toplam=0;
        int x,y;
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
        //
        toplam=girilenSayilar[0]+girilenSayilar[1];
	if(toplam>girilenSayilar[2]){//toplam son indisten büyükse -en büyük sayımızdan
		cout<<"TEBRİKLER"<<endl;
	}
	else{//değilse
		cout<<"MAALESEF"<<endl;
	}
        return 0;
}
