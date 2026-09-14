#include <iostream>
#include <random>

using namespace std;

int main(){

    random_device hehe;
    mt19937 acak(hehe());
    uniform_int_distribution<int> dist(1,1000);

    int rng = dist(acak);
    int angka; 
    char main;

    cout<<"============================";
    cout<<"GAME TEBAK ANGKA";
    cout<<"============================\n\n";
    cout<<"Masukan Angka Kamu\n";

    while (angka != rng){

        cin>>angka;

         if(angka == rng){
            char hadiah;
            cout<<"=======================";
            cout<<"Selamat Kamu MENANG";
            cout<<"=======================\n";
            cout<<"Apakah kamu Ingin menerima Hadiahnya?(Y/N)\n";
            cin>>hadiah;
            if(hadiah = 'Y'){
                cout<<"Kamu dapat cium dari Kang Azrel";
            } else if(hadiah = 'N'){
                cout<<"Sombong bet lu";
            } 
            } else if(angka > rng){
                cout<<"Lebih Kecil\n";
            } else if(angka < rng){
                cout<<"Lebih besar\n";
        }
}
    return 0;
}