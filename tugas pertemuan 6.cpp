#include <iostream>

using namespace std;

int pokok       (int);
int lembur      (int);
int makan       (int);
int transport   (int);

int main(){
    int jamkerja;
    string nip, nama;

    cout    << "Menghitung gaji harian PT. XYZ" << endl << endl;
    cout    << "Masukkan NIP Anda                  : ";
    cin     >> nip;
    cout    << "Masukkan nama Anda                 : ";
    getline (cin >> ws, nama);
    cout    << "Masukkan jumlah jam kerja Anda     : ";
    cin     >> jamkerja;
    cout    << endl;
    if (jamkerja > 24 | jamkerja < 0){
        cout << "Jumlah jam kerja yang Anda amsukka salah" << endl;
        return 0;
}
cout << "========================================================"  << endl;
cout << "NIP                    : " <<      nip                     << endl;
cout << "Nama                   : " <<      nama                    << endl;
cout << "Jumlah jam kerja       : " <<      jamkerja << " jam"       << endl;
cout << endl;
cout << "Gaji pokok             : Rp. " <<  pokok (jamkerja)        << endl;
cout << "Uang lembur            : Rp. " <<  lembur (jamkerja)       << endl;
cout << "Uang makan             : Rp. " <<  makan (jamkerja)        << endl;
cout << "Uang transport         : Rp. " <<  transport (jamkerja)    << endl;
}
int pokok (int jamkerja) {
    if (jamkerja<=8){
        return (7500*jamkerja);
    }else{
        return (8*7500);
    }
}
int lembur (int jamkerja) {
    if (jamkerja>8){
        int lembur;
        lembur=jamkerja-8;
        return (lembur*7500*1.5);
    }else{
        return 0;
    }
}
int makan (int jamkerja) {
    if (jamkerja>=9) {
        return 10000;
    }else{
        return 0;
    }
}
int transport (int jamkerja) {
    if (jamkerja>=10) {
        return 13000;
    }else{
        return 0;
    }
}

