#include <iostream>
using namespace std;

int main(){
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105";
    cout << "\nProgram Mencari Nilai Tertinggi dalam Array "<<endl;
    for (int j = 0;j < 45; j++){
    cout << "=";}

    int j;
    // Masukkan jumlah elemen array yang diinginkan
    cout << "\nMasukkan jumlah elemen array: ";
    cin >> j;

    // Membuat array dengan jumlah elemen yang diinginkan
    int array[j];

    // Mengisi array dengan nilai yang diinginkan
    cout << "Masukkan " << j << " angka dalam array:\n";
    for (int i = 0; i < j; ++i){
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    // Mencari nilai tertinggi dalam array
    int max = array[0];
    int index = 0;
    for (int i = 1; i < j; ++i){
        if (array[i] > max){
            max = array[i];
            index = i;
    }}

    // Menampilkan hasil
    cout << "Nilai tertinggi dalam array: " << max;

    if (j > 0){
        if (index != -1){
            cout << "\nNilai tersebut ditemukan pada indeks: " << index;
        }else{
            cout << "\nNilai tersebut tidak ditemukan dalam array.";
        }
    }else{
        cout << "\nArray kosong.";
    }

    return 0;
}
