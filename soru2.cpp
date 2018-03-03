/*
 * =====================================================================================
 *
 *       Filename:  soru2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-03-2018 16:27:33
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Ali İlteriş Keskin
 *   Organization:  Bilgisayar ve Bilişim Kulübü
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main()
{
    char karakter;
    int yeniKarakter;

    cout << "Bir karakter giriniz: ";
    cin >> karakter;

    yeniKarakter = int(karakter);

    if(yeniKarakter >= 48 && yeniKarakter <= 57)
        cout << "Girilen karakter bir sayidir." << endl;
    else if(yeniKarakter >= 97 && yeniKarakter <= 122 || yeniKarakter >= 65 && yeniKarakter <= 90)
        cout << "Girilen karakter bir harftir." << endl;
    else
        cout << "Girilen karakter bir ozel karakterdir. (*,/.!^+...)" << endl;

    return 0;
}

