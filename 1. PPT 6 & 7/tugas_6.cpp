/*
Perhitungan Matematika: perpangkatan, perkalian, FPB, KPK 
*/
#include <iostream>

int pangkat(int angka, int n)
{
    int hasil = 1;
    for (int i = 0; i < n; i++)
    {
        hasil*=angka;
    }
    return hasil;
}

int perkalian(int a, int b)
{
    return a * b;
}

// Pencarian FPB dua bilangan menggunakan Euclidean Algorithm
int FPB(int p, int q)
{
    int r;
    while (true) 
    {
        if (q == 0)
        {
            return p;
        }
        else
        {
            r = p % q;
            p = q;
            q = r;
        }
    }
}

int KPK(int p, int q)
{
    return (p*q)/FPB(p,q);
}

main()
{
    int menu;
    std::cout << "Masukkan menu yang Anda inginkan: \n1. Pangkat\n2. Perkalian\n3. FPB\n4. KPK\n";
    std::cin >> menu;
    switch (menu)
    {
    case 1:
        int angka,dipangkat;
        std::cout << "Isi angka: ";
        std::cin >> angka;
        std::cout << "Dipangkatkan oleh: ";
        std::cin >> dipangkat;
        std::cout << "Hasilnya adalah " << pangkat(angka, dipangkat); // Ke fungsi cacah()
        break;
    case 2:
        int x,y;
        std::cout << "Isi angka: ";
        std::cin >> x;
        std::cout << "Dikalikan oleh: ";
        std::cin >> y;
        std::cout << "Hasilnya adalah "<< perkalian(x,y); // Ke fungsi ganjil()
        break;
    case 3:
        int fpb1, fpb2;
        std::cout << "Angka pertama (pastikan angka pertama merupakan yang paling besar): ";
        std::cin >> fpb1;
        std::cout << "Angka kedua: ";
        std::cin >> fpb2;
        std::cout << "FPB-nya adalah " << FPB(fpb1,fpb2); // Ke fungsi ganjil()
        break;
    case 4:
        int kpk1, kpk2;
        std::cout << "Angka pertama: ";
        std::cin >> kpk1;
        std::cout << "Angka kedua: ";
        std::cin >> kpk2;
        std::cout << "KPK-nya adalah " << KPK(kpk1, kpk2); // Ke fungsi ganjil()
        break;
    default:
        std::cout << "Isi dengan benar. ";
    }
}