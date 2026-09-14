#include <iostream>
using namespace std;

int main() {

    int nilai;
    

    cout<<"Masukan Nilai"<<endl;
    cin>>nilai;

    if(nilai >= 80){
        cout<<'A'<<endl;
    } else if(68 <= nilai < 80){
        cout<<'B'<<endl;
    } else if(56 <= nilai < 68){
        cout<<'C'<<endl;
    } else if(45 <= nilai < 56){
        cout<<'D'<<endl;
    } else{
        cout<<'E'<<endl;
    }

    if(nilai >= 65){
        cout<<"LULUS";
    } else{
        cout<<"TIDAK LULUS";
    }
    return 0;
}