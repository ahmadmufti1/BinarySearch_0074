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

    cout << "\n=================================\n";
    cout << "      Masukkan elemen array      \n";
    cout << "=================================\n";

    //Membuat perulangan for untuk menginput data ke dalam array
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << i + 1 << "= ";
        cin >> element[i];
    }

}

//Membuat fungsi untuk bubble sort array
void bubbleSortArray()
{
    //Membuat perulangan do-while untuk melakukan bubble sort pada array
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang -1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    }while (pass <= nPanjang - 1);
    
}


//Membuat fungsi display
void display()
{
    cout << "\n=======================================\n";
    cout << "  Elemen Array Setelah Diurutkan  (Asc) \n";
    cout << "=======================================\n";

    //Membuat perulangan for untuk menampilkan data yang sudah diurutkan
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if ( j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

//membuat fungsi binary search
void binarySearch()
{
    //Membuat perulangan do-while untuk melakukan binary search pada array
    char ulang;
    do
    {
        cout << "\n===============================\n";
        cout << "      Masukkan Binary Search      \n";
        cout << "\n===============================\n";

        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x;
        
        int low = 0;
        int high = nPanjang - 1;

        do
        { //Membuat variabel mid untuk menyimpan nilai tengah dari low dan high
            int mid = (low + high) / 2;

            if(element[mid] == x)
            {
                cout << "\n[✔️] Elemen " << x << "ditemukan pada indeks " << mid << "\n";
                return;
            }

            if(x < element[mid])
            {
                high = mid -1;
            }

            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
        {
            cout << "\n[❌] Elemen " << x << " tidak ditemukan dalam array.\n";
        }
        cout << "\nApakah Anda ingin mencari lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}
