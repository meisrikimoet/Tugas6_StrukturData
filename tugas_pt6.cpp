#include <iostream>
#include <string>
using namespace std;

int main () {
    string data[100];
    int n;

    cout << " Masukkan jumlah kata : " << endl;
    cin >> n;

    cout << "Masukkan kata : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "\nProses Insertion Sort : " << endl;

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nLangkah ke-" << i << endl;
        cout << "\nKata yang disisipkan : " << key << endl;

        while (j >= 0 && data[j] > key) {
            data[j+1] = data[j];

            cout << " Geser " << data[j]
                << " Ke kanan " << endl;

            j--;
        }

        data [j+1] = key;

        cout << "Hasil Langkah " << i << " : ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";

        }
        cout << endl;
    }

    cout << "\nHasil Insertion Sort : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";

    }

    return 0;

}