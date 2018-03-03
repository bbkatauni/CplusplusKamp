/*
 * =====================================================================================
 *
 *       Filename:  soru2.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02-03-2018 23:18:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ali İlteriş Keskin
 *   Organization:  Bilgisayar ve Bilişim Kulübü
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    char karakter;
    int yeniKarakter;

    cout << "Bir karakter giriniz: ";
    cin >> karakter;

    yeniKarakter = int(karakter);

    if(yeniKarakter >= 65 && yeniKarakter <= 90 || yeniKarakter >= 97 && yeniKarakter <= 122)
        cout << "Girilen karakter bir harftir." << endl;
    else if(yeniKarakter >= 48 && yeniKarakter <= 57)
        cout << "Girilen karakter bir sayidir." << endl;
    else
        cout << "Girilen karakter bir ozel karakterdir." << endl;

    return 0;
}
