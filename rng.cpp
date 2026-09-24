/*
Muhammad Fahmi Algifari
Game Tebak Angka RNG
*/

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

    cout << "GAME TEBAK ANGKA\n";

    while (angka != rng){

        cout<<"Masukan Angka Kamu\t: ";
        cin>>angka;

        if(angka == rng){

            char hadiah;

            cout<<"+====================================+\n";
            cout<<"\t!!SELAMAT KAMU MENANG!!\n";
            cout<<"+====================================+\n";
            cout<<"Apakah kamu Ingin menerima Hadiahnya?(y/n)\n";
            cin>>hadiah;
            
            if(hadiah == 'y'){
                cout<<"Kamu dapat cium dari Kang Azrel";
            } else if(hadiah == 'n'){
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