#include <iostream>
using namespace std;

//Deklarasi variable global
int element[10];
int nPanjang;
int x;

//Membuat fungsi untuk menginput data ke dalam array
void input()
{
    //Membuat perulangan while
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;
        if (nPanjang <= 10)//Membuat kondisi jika jumlah elemen tidak lebih dari 10, maka perulangan akan berhenti
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }

   
}

