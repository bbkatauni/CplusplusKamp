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

    cout << "Bir karakter giriniz: ";
    cin >> karakter;

    cout << "Girilen karakterin tipi: " << int(karakter) << endl;

    return 0;
}
