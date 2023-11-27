#include <iostream>
using namespace std;

void namaNpm()
{
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105";
    cout << "\nProgram Gambar Segitiga Karakter" << endl;
}
void garis(){
    for (int j = 0;j <=32; j++){
    cout << "=";
}}

void tampilkanSegitiga(int tinggi){ // Function untuk menampilkan segitiga
    for (int i = 1; i <= tinggi; i++){
    for (int j = tinggi - i; j > 0; j--){ // Membuat spasi sebelum karakter bintang
    cout << " ";
    }

    for (int k = 1; k <= 2 * i - 1; k++){ // Menampilkan karakter bintang
    cout << "*";
    }
    cout << "\n";
    }}

int main(){ // Deklarasi variabel
    namaNpm ();
    garis ();
    int tinggi;

    cout << "\n";
    cout << "Masukkan tinggi segitiga   : "; // Masukkan tinggi segitiga  yang diinginkan
    cin >> tinggi;

    tampilkanSegitiga(tinggi); // Memanggil function untuk menampilkan segitiga yang diinginkan

    return 0;
}
