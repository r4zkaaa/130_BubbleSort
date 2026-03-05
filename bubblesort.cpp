#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen 

void input() {            //procedur untuk input
    while (true){
          cout << "Masukkan banyaknya elemen pada array: ";  //output ke
          cin >> n; //input  dri pengguna 
          if (n <= 20) //jika n krng dri atau sm dgn 20
            break; //keluar dari loop
          else {     //jika n lebih dri 20
            cout <<  "//nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar

        }
    }
         cout << endl;
            cout << "======================" << endl;
            cout << "Masukkan elemen array" << endl;
            cout << "======================" << endl;

       for (int i = 0; i < n; i++) {  //looping dengan i dimulai 0
        cout << "Data ke-" << (i + 1) << ": ";  //output ke layar
        cin >> arr[i];     //input dari pengguna
    }
}