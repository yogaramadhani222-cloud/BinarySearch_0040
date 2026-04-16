#include<iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukkan banyaknya elemen pada array(maksimal 10): ";
        cin >> npanjang ;

        if (npanjang<=10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }
    cout <<"\n==============================\n";
    cout <<"       Masukan Elemen Array      \n";
    cout <<"\n==============================\n";
    
    for(int i = 0; i < npanjang;i++)
    {
        cout << "data ke -" << (i+1)<< " = ";
        cin >> element[i];
    }
}