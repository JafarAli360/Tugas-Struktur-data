# Tugas-Struktur-data
Ahmad Ja'far Ali - 058 - D4 RPL B

#include<iostream>
using namespace std;
int main()

{
    int size, i, j;
    cout<<" Masukkan jumlah karakter : ";
    cin >> size;

    char chars[size];
    cout<<" Enter " <<size<< " characters:\n";
    for (i=0; i<size; i++)
    {
        cin >> chars[i];
    }

    char temp;

    for (i=0; i<size; i++)
    {
    for (j=0; j<size-1; j++)
    {
        if (chars[j+1] < chars[j])
        {
            temp = chars[j];
            chars[j] = chars[j+1];
            chars[j + 1]=temp;
        }
    }
}

for (int i = 0; i < size; i++)
{
    cout << chars[i]<<" ";
}

return 0;
}
