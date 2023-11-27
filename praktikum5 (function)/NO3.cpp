#include <iostream>
using namespace std;

void namaNpm()
{
    cout << "Nama   : Nabiilah Nur Fauziyyah";
    cout << "\nNPM    : 2310631170105";
    cout << "\nProgram Deret Fibonacci (Function Recursion)" << endl;
}
void garis(){
    for (int j = 0;j <=45; j++){
    cout << "=";
}}

int fibonacci(int n){ // Function Recursion untuk menghitung bilangan fibonacci ke-n
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // RECURSION
    }}

void tampilkanFibonacci(int n){ // Function untuk menampilkan deret Fibonacci hingga ke-n
    cout << "Deret Fibonacci hingga ke-" << n << ":\n";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    }

int main(){
    namaNpm ();
    garis ();

    int panjangDeret;
    cout << "\nMasukkan panjang deret Fibonacci: "; // Meminta input panjang deret Fibonacci dari pengguna
    cin >> panjangDeret;

    tampilkanFibonacci(panjangDeret); // Memanggil function untuk menampilkan deret Fibonacci yang diinginkan

    return 0;
}
