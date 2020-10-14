/*
Buat program untuk mencari nilai terbesar dari sejumlah bilangan yang dimasukkan!
*/

#include <iostream>
int byk;                        // Banyak angka yang akan diproses
int a, b = 0;                   // Angka yang akan diproses
int MAX;                        // Angka Terbesar
main()
{
    std::cout << "Berapa banyak angka yang ingin Anda isi?\n";
    std::cin >> byk;
    std::cout << "Isi bilangan-bilangannya, dipisah dengan tanda spasi: \n";
    for (int i = 0; i < byk; i++)
    {
        std::cin >> a;
        // Membandingkan angka sekarang (a) dan angka iterasi sebelumnya (b) untuk mencari MAX
        if (i == 0)
        {
            b = a;
        }
        // Mencari MAX
        if (b <= a)
        {
            MAX = a;
        }
        b = a;
    }
    std::cout << "Angka terbesar adalah " << MAX;
}