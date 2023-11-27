#include <iostream>

using namespace std;

int main(){
    string namaSaya;
    int npmSaya;
    npmSaya = 23105;

    cout << "Masukkan Nama :";
    getline(cin,namaSaya);

    cout << "Hasil nya--->\n\n";

    for (int i = 0; i < 100; i++) {
    cout << "-";
    }
    {
    cout<< "\nNama : " << namaSaya <<endl;
    cout<< "\nNPM : " << npmSaya <<endl;
    cout<< "\nKelas : C - Informatika" <<endl<<endl;
    cout<< "\Cita - Cita : Cyber Security" <<endl<<endl;
    cout<< "\Motivasi Masuk Informatika : Dari Drakor StartUp" <<endl;
    }
    for (int i = 0; i < 100; i++) {
    cout << "-";
    }
    return 0;
}



