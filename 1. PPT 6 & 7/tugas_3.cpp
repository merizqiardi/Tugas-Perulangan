#include <iostream>

int cacah()
{
    int n;
    std::cout << "masukkan batas akhir: ";
    std::cin >> n;
    for (int i = 0; i < n+1; i++)
    {
        std::cout << i << "\n";
    }
    return 0;
}


int ganjil() {
    int n;
    std::cout << "masukkan batas akhir: ";
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
    std::cout << "masukkan batas akhir: ";
    std::cin >> n;
    int i = 1;
    while (i <= n)
    {
        // Untuk dua bilangan pertama
        if (i == 1) 
        {
            std::cout << fib1 << "\n ";
            i++;
            continue;
        }
        else if (i == 2)
        {
            std::cout << fib2 << "\n ";
            i++;
            continue;
        }

        // Untuk bilangan-bilangan selanjutnya
        next = fib1 + fib2;
        std::cout << next << "\n ";
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
    case 2:
        ganjil(); // Ke fungsi ganjil()
    case 3:
        genap(); // Ke fungsi genap()
    case 4:
        fibonacci(); // Ke fungsi fibonacci()
    default:
        std::cout << "Isi dengan benar. ";
        main();
    }
}