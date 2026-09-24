#include<iostream>
#include<string>
#include<windows.h>
#ifdef _WIN32
#endif
using namespace std;

const int maxT = 1000; // deklarasi jumlah maksimal tugas

void tampilkanTugas(string tugas[], bool selesai[], int jumlah){ // fungsi untuk menampilkan list tugas

    cout << "=============================\n";
    cout << "Program To-do list\n";
    cout << "=============================\n";
    cout << "List Tugasmu :\n";
    cout << "-----------------------------\n";

    if(jumlah == 0){
        cout << "(tugas kosong)*\n";
    } else{
        for(int i = 0; i < jumlah; i++){
            if(selesai[i]){
                cout << "[✓] " << i + 1 << ". " << tugas[i] << endl;
            } else{
                cout << "[ ] " << i + 1 << ". " << tugas[i] << endl;
            }
        }
    }

    cout << "-----------------------------\n";
}

void tambahTugas(string tugas[], bool selesai[], int &jumlah){ // fungsi untuk menambahkan tugas
    cin.ignore();

    cout << "Masukan Tugas : ";
    getline(cin, tugas[jumlah]);

    selesai[jumlah] = false;
    jumlah++;
    
    cout << "-----------------------------\n";
    cout << "Tugas Berhasil Ditambahkan!\n";
    cout << "-----------------------------\n\n";
}

void checkTugas(bool selesai[], int jumlah){ // fungsi untuk menandai tugas yang sudah selesai

    int nomor;

    cout << "Pilih nomor tugas yang sudah selesai : ";
    cin >> nomor;

    if(nomor >= 1 && nomor <= jumlah){
        selesai[nomor - 1] = true;

        cout << "-----------------------------\n";
        cout << "Tugas Nomor " << nomor << " Sudah Selesai!\n";
        cout << "-----------------------------\n\n";

    } else{
        cout << "------Nomor tidak valid------\n\n";
    }
}

void hapusTugas(string tugas[], bool selesai[], int &jumlah){ // fungsi untuk menghapus tugas

    int nomor;

    cout << "Pilih nomor tugas yang mau dihapus : ";
    cin >> nomor;

    if(nomor >= 1 && nomor <= jumlah){
        for(int i = nomor - 1; i < jumlah - 1; i++){
            tugas[i] = tugas[i + 1];
            selesai[i] = selesai[i + 1];
        } 
        jumlah--;

        cout << "-----------------------------\n";
        cout << "Tugas Nomor " << nomor << " Berhasil Dihapus\n";
        cout << "-----------------------------\n\n";

    } else{
        cout << "------Nomor tidak valid------\n\n";
    }
}

int main(){

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    string tugas[maxT];
    bool selesai[maxT];
    int jumlah = 0;

    char pilihan;

    do{

        tampilkanTugas(tugas, selesai, jumlah);

        cout << "Pengaturan Tugas : \n";
        cout << "1. Tambah tugas\n";
        cout << "2. Check tugas\n";
        cout << "3. Hapus tugas\n";
        cout << "4. tutup program\n";
        cout << "pilih : ";
        cin >> pilihan;

        switch (pilihan){

            case '1':
                tambahTugas(tugas, selesai, jumlah);
                break;

            case '2':
                checkTugas(selesai, jumlah);
                break;

            case '3':
                hapusTugas(tugas, selesai, jumlah);
                break;

            case '4':
                cout << "Program ditutup";
                break;

            default:
                cout << "Pilihan tidak valid\n\n";
        }
    } while (pilihan != '4');
    return 0;
}