/*
 * =====================================================================================
 *
 *       Filename:  soru9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-03-2018 17:04:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ali İlteriş Keskin
 *   Organization:  Bilgisayar ve Bilişim Kulübü
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

float topla(float, float);
float cikar(float, float);
float carp(float, float);
float bol(float, float);

int main()
{
    int secim;
    float sayi1, sayi2;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi giriniz: ";
    cin >> sayi2;

    cout << "1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n";
    cout << "Bir islem seciniz: ";
    cin >> secim;

    if(secim == 1)
        cout << "Toplam= " << topla(sayi1, sayi2) << endl;
    else if(secim == 2)
        cout << "Fark= " << cikar(sayi1, sayi2) << endl;
    else if(secim == 3)
        cout << "Carpim= " << carp(sayi1, sayi2) << endl;
    else if(secim == 4)
        cout << "Bolum= " << bol(sayi1, sayi2) << endl;
    else
        cout << "Hatali Giris !" << endl;

    return 0;
}

float topla(float sayi1, float sayi2)
{
    return sayi1 + sayi2;
}

float cikar(float sayi1, float sayi2)
{
    return sayi1 - sayi2;
}

float carp(float sayi1, float sayi2)
{
    return sayi1 * sayi2;
}

float bol(float sayi1, float sayi2)
{
    return sayi1 / sayi2;
}
