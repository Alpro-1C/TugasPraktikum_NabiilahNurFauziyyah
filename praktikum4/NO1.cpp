#include <iostream>
using namespace std;
int main(){
cout << "Nama   : Nabiilah Nur Fauziyyah";
cout << "\nNPM    : 2310631170105";
cout << "\nProgram Bilangan Ganjil, Genap, dan Prima"<<endl;
for (int j = 0;j < 100; j++){
    cout << "=";}

int bilangan;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;


    cout << "\nMasukkan Bilangan Bulat : ";
    cin >> bilangan;	// Input untuk menampilkan Bilangan Bulat yang diinginkan

for (int j = 0;j < 100; j++){
    cout << "=";}

    cout << "\nBilangan Ganjil         : ";
    for (int i = 0; i <= bilangan; i++) {
        if (i % 2 != 0) {
            cout << i << " "; // Menampilkan Bilangan Ganjil
            jumlahGanjil += i; }}   // Operasi penjumlahan Bilangan Ganjil
    cout << "\nJumlah bilangan ganjil  : " << jumlahGanjil;
    cout << "\nFaktor dari " << jumlahGanjil << " adalah    : ";
    for (int i = 1; i <= jumlahGanjil; i++) {
    if (jumlahGanjil % i == 0) {
        cout << i << " "; }}
    cout << endl;

for (int j = 0;j < 100; j++){
    cout << "=";}

    cout << "\nBilangan Genap          : ";
    for (int i = 0; i <= bilangan; i += 2) {
        cout << i << " ";
        jumlahGenap += i; }
    cout << "\nJumlah bilangan genap   : " << jumlahGenap;
    cout << "\nFaktor dari " << jumlahGenap << " adalah    : ";
    for (int i = 1; i <= jumlahGenap; i++) {
    if (jumlahGenap % i == 0) {
        cout << i << " "; }}
    cout << endl;

for (int j = 0;j < 100; j++){
    cout << "=";}

    cout << "\nBilangan Prima          : ";
    for (int i = 2; i <= bilangan; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }
        if (j * j > i) {
        cout << i << " ";
        jumlahPrima += i; }}
    cout << "\nJumlah bilangan prima   : " << jumlahPrima;
    cout << "\nFaktor dari " << jumlahPrima << " adalah   : ";
    for (int i = 1; i <= jumlahPrima; i++) {
    if (jumlahPrima % i == 0) {
        cout << i << " "; }}
    cout << endl;
for (int j = 0;j < 100; j++){
    cout << "=";}

return 0;
}
