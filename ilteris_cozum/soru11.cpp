/*
 * =====================================================================================
 *
 *       Filename:  soru11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04-03-2018 21:17:15
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

int recursive(int);

int main()
{

    int sayi;

    cout << "Faktoriyeli hesaplanacak sayiyi giriniz: ";
    cin >> sayi;

    cout << recursive(sayi) << endl;

    return 0;
}

int recursive(int sayi)
{
    if(sayi <= 1)
        return 1;

    return sayi * recursive(sayi - 1);
}

