/*
Menampilkan pola segitiga: pascal, genap, ganjil
*/

#include <iostream>

int factorial(int n) {
    int hasil = n;
    for (int i = 1; i <= n; ++i)
    {
        hasil *= i;
    }
    return hasil;
}

int pascal()
{
    int n;
    int coef;
    std::cout << "Masukkan batas: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < ((n - i)-1); j++) // Meng-print spasi agar dapat terbentuk segitiga 
        {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            std::cout << coef << "   ";
        }
        std::cout << "\n";
    }
    return 0;
}

int ganjil()
{
    int n;
    std::cout << "Masukkan angka: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)  
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= (i*2)-1; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;  
}

int genap()
{
    int n;
    std::cout << "Masukkan angka: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            std::cout << " ";
        }
        
        for (int j = 1; j <= (i * 2) ; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}

main()
{
    int menu;
    std::cout << "Masukkan menu yang Anda inginkan: \n1. Segitiga Pascal\n2. Segitiga Ganjil\n3. Segitiga Genap\n";
    std::cin >> menu;
    switch (menu)
    {
    case 1:
        pascal(); // Ke fungsi pascal()
        break;
    case 2:
        ganjil(); // Ke fungsi ganjil()
        break;
    case 3:
        genap(); // Ke fungsi genap()
        break;
    default:
        std::cout << "Isi dengan benar. ";
    }
}