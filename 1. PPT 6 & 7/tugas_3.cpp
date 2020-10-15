#include <iostream>

int cacah()
{
    int n;
    std::cout << "Masukkan batas akhir: ";
    std::cin >> n;
    for (int i = 0; i < n+1; i++)
    {
        std::cout << i << "\n";
    }
    return 0;
}


int ganjil() {
    int n;
    std::cout << "Masukkan batas akhir: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        std::cout << (2*i)-1 << "\n";
    }
    return 0;
}

int genap() {
    int n;
    std::cout << "masukkan batas akhir: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cout << (2 * i) << "\n";
    }
    return 0;
}

int fibonacci() {
    int fib1 = 0, fib2 = 1, next, n;
    std::cout << "Masukkan batas akhir: ";
    std::cin >> n;
    int i = 1;
    while (i <= n)
    {
        // Untuk dua bilangan pertama
        if (i == 1) 
        {
            std::cout << fib1 << " ";
            i++;
            continue;
        }
        else if (i == 2)
        {
            std::cout << fib2 << " ";
            i++;
            continue;
        }

        // Untuk bilangan-bilangan selanjutnya
        next = fib1 + fib2;
        std::cout << next << " ";
        fib1 = fib2;
        fib2 = next;
        i++;
    }
    return 0;
}

main() {
    int menu;
    std::cout << "Masukkan menu yang Anda inginkan: \n1. Bilangan Cacah\n2. Ganjil\n3. Genap\n4. Fibonacci\n";
    std::cin >> menu;
    switch (menu)
    {
    case 1:
        cacah(); // Ke fungsi cacah()
        break;
    case 2:
        ganjil(); // Ke fungsi ganjil()
        break;
    case 3:
        genap(); // Ke fungsi genap()
        break;
    case 4:
        fibonacci(); // Ke fungsi fibonacci()
        break;
    default:
        std::cout << "Isi dengan benar. ";
        break;
    }
}