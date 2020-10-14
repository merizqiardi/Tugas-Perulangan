/*
Buat program untuk menampilkan seperti yang ada di PPT:
55555
4444
333
22
1
*/

#include <iostream>
using namespace std;
int N;

main() {
    cout << "Masukkan angka: ";
    cin >> N;
    int i = N, j = 0;
    while (i > 0) {
        while (j < i) {
            cout << i; // Mencetak secara mendatar
            j++;
        }
        cout << "\n"; // Membuat line baru agar tercetak di bawah line sebelumnya
        j = 0;
        i--;
    }
}