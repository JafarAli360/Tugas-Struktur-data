#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char kata[35];
    int membalik, hasil;
    char strl;
    bool palindrome=true;
    cout<<"===Stack Membalikkan Kata===\n";
    cout<<"Masukkan Kalimat apapun : ";
    cin>>kata;

    cout<<"Kata yang dimasukkan adalah : "<<kata<<endl;
    hasil=strlen(kata);
    cout<<"Jumlah huruf :"<<strlen(kata)<<endl;
    cout<<"Kata dibalik menjadi : ";
    for(int i=hasil;i>=1;i--)
    {
        strl=kata[i-1];
        cout<<strl;
    }

      membalik=hasil-1;
      for(int i=0;i<hasil;i++)
      {
          if((char)tolower(kata[i])!=(char)tolower(kata[membalik]))
          {
              palindrome=false;
          }
          membalik--;
      }
    if(palindrome)
    {
        cout<<"\n\nPalindrome"<<endl;
    }
    else
    {
        cout<<"\n\nBukan Palindrome"<<endl;
    }
    getch();
}
