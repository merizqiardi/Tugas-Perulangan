/*
Perhitungan statistic: MAX, MIN, AVERAGE, TOTAL
*/
#include <iostream>
int byk; // Banyak angka yang akan diproses
int a, b = 0; // Angka yang akan diproses
int MAX = 0, MIN = 0, TOT = 0; // Variabel untuk angka terbesar, angka terkecil, dan jumlah semua angka
float AVG = 0; // Variabel untuk rata-rata

main()
{
    std::cout << "Berapa banyak angka yang ingin Anda isi?\n";
    std::cin >> byk;
    std::cout << "Isi bilangan-bilangannya, dipisah dengan tanda spasi: \n";
    for (int i = 0; i < byk; i++)
    {
        std::cin >> a;

        // Membandingkan angka sekarang (a) dan angka iterasi sebelumnya (b) untuk mencari MAX dan MIN  
        if (i == 0) 
        {
            b = a;
        }
        // Mencari MAX
        if (b <= a) 
        {
            MAX = a;
        }
        // Mencari MIN
        if (b >= a)
        {
            MIN = a;
        }
        b = a;

        // Menambahkan a ke TOT, agar dapat diketahui total semua angka (TOT)
        TOT += a;
    }
    AVG = TOT/byk;
    std::cout << "\nTotal = " << TOT << "\nMaksimum = " << MAX << "\nMinimum = "<< MIN << "\nRata-rata = " << AVG;
}