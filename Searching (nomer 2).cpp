# Tugas-Struktur-data
Ahmad Ja'far Ali - 058 - D4 RPL B

#include <stdio.h>
#include <iostream>
#define N 255

using namespace std;

void gantikata(char *data, char cari, char ganti){
    int i=0;

    while(*data !='\0'){
        *data=((*data == cari)?ganti:*data);
        data++;
        i++;
    }
}

int main(){

    char data[25], cari, ganti;

    cout << "===============================";
    cout << "\n    Program Searching Replace ";
    cout << "\n===============================";

    cout << "\n\nMasukkan kalimat : ";
    cin >> data;
    cout << "> Masukkan karakter yang dicari: ";
    cin >> cari;
    cout << "> Karakter pengganti: ";
    cin >> ganti;

    gantikata(data,cari, ganti);
    cout <<"\nHasil replace adalah = "<< data;

    return 0;
}
