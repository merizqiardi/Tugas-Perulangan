/*
Buatlah program untuk mencetak hasil 2^N, nilai N diinputkan
*/

#include <iostream>
using namespace std;
int N;

main()
{
    cout << "Masukkan angka: ";
    cin >> N;
    int hasil = 2;
    for (int i = 1; i < N; i++)
    {
        hasil *= 2;
    }
    cout << "Hasilnya 2^" << N << " adalah: " << hasil;
}
