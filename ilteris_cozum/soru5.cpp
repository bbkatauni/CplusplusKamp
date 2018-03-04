/*
 * =====================================================================================
 *
 *       Filename:  soru5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-03-2018 17:24:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Ali İlteriş Keskin
 *   Organization:  Bilgisayar ve Bilişim Kulübü
 *
 * =====================================================================================
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double karekokToplami = 0, karekok, altLimit, ustLimit, i;

    cout << "Alt limit degerini giriniz: ";
    cin >> altLimit;

    cout << "Ust limit degerini giriniz: ";
    cin >> ustLimit;

    for(i <= altLimit; i <= ustLimit; i++)
    {
        karekok = sqrt(i);
        karekokToplami += karekok;
    }

    cout << "Girilen limitlerin arasindaki sayilarin karekok toplami= " << karekokToplami << endl;

    return 0;
}
