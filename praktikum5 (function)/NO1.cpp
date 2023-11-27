#include <iostream>
using namespace std;

void namaNpm()
{
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105";
    cout << "\nProgram Bilangan Ganjil, Genap, dan Prima" << endl;
}

void garis(){
    for (int j = 0;j <=40; j++){
    cout << "=";
}}

void bilGanjil (int bilangan, int & sumGanjil){ // Function menghitung bilangan ganjil yang diinginkan
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= bilangan; i++){
        if (i % 2 != 0){
            cout << i << " ";
            sumGanjil += i;
    }}
    cout << endl;
}

void bilGenap (int bilangan, int & sumGenap){ // Function menghitung bilangan genap yang diinginkan
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= bilangan; i += 2){
        cout << i << " ";
        sumGenap += i;
    }
    cout << endl;
}

void bilPrima (int bilangan, int & sumPrima){ // Function menghitung bilangan prima yang diinginkan
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= bilangan; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i) {
            cout << i << " ";
            sumPrima += i;
    }}
    cout << endl;
}

void faktorbilanganGanjil (int sumGanjil){ // Function menghitung faktor bilangan ganjil yang diinginkan
    cout << "Faktor bilangan ganjil: ";
    for (int i = 1; i <= sumGanjil; i++){
        if (sumGanjil % i == 0){
            cout << i << " ";
    }}
    cout << endl;
}

void faktorbilanganGenap (int sumGenap){ // Function menghitung faktor bilangan genap yang diinginkan
    cout << "Faktor bilangan genap: ";
    for (int i = 1; i <= sumGenap; i++){
        if (sumGenap % i == 0){
            cout << i << " ";
    }}
    cout << endl;
}

void faktorbilanganPrima (int sumPrima){ // Function menghitung faktor bilangan prima yang diinginkan
    cout << "Faktor bilangan prima: ";
    for (int i = 1; i <= sumPrima; i++) {
        if (sumPrima % i == 0) {
            cout << i << " ";
    }}
    cout << endl;
}

int main(){
    namaNpm ();
    garis ();
    int bilangan;
    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;

    cout << "\nMasukkan bilangan : ";
    cin >> bilangan;

    garis ();

    cout << endl;
    bilGanjil(bilangan, sumGanjil);  // Memanggil function untuk menampilkan bilangan ganjil yang diinginkan
    bilGenap(bilangan, sumGenap);    // Memanggil function untuk menampilkan bilangan genap yang diinginkan
    bilPrima(bilangan, sumPrima);    // Memanggil function untuk menampilkan bilangan prima yang diinginkan

    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;

    garis ();

    cout << endl;
    faktorbilanganGanjil(sumGanjil); // Memanggil function untuk menampilkan faktor bilangan ganjil
    faktorbilanganGenap(sumGenap);   // Memanggil function untuk menampilkan faktor bilangan genap
    faktorbilanganPrima(sumPrima);   // Memanggil function untuk menampilkan faktor bilangan prima

    return 0;
}
