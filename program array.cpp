#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " angka: " << endl;
    for (int i = 0; i < n; i++){
        cout << "Angka ke " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << max << endl;

    int angka;
    cout << "Input angka yang ingin diperiksa: ";
    cin >> angka;

    bool found = false;
    for (int i = 0; i < n; i++){
        if (arr[i] == angka) {
            cout << "Angka " << angka << " ditemukan pada indeks: " << i << endl;
            found = true;
        }
    }

    if (!found){
        cout << "Angka " << angka << " tidak ditemukan di dalam array." << endl;
    }

    return 0;
}
