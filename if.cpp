/*
Muhammad Fahmi Algifari
Penggunaan "if" pada penilaian tugas
*/

#include <iostream>
using namespace std;

int main() {

    int nilai;
    cout<<"Masukan Nilai Kamu"<<endl;
    cin>>nilai;
    
    if (nilai >= 80) {
        cout<<'A'<<endl;
    } else if(68 <= nilai < 80) {
        cout<<'B'<<endl;
    } else if(56 <= nilai < 68) {
        cout<<'C'<<endl;
    } else if(56 <= nilai < 68) {
        cout<<'D'<<endl;
    } else {
        cout<<'E'<<endl;
    }
    if (nilai >=65){
        cout<<"LULUS"<<endl;
    } else {
        cout<<"TIDAK LULUS"<<endl;
    }
    return 0;
}