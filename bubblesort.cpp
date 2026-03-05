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

void bubbleSortArray() { //procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { // step 2
            if (arr[j] > arr[j + 1]) { // step 3
                int temp;
                temp = arr[j]; 
                arr [j] = arr [j + 1];
                arr [j + 1] = temp;
        }
      } 
      pass = pass + 1; // step 4  

      cout << "\nPass " << pass - 1 << ": "; // number of pass
        for (int k = 0; k < n; k++) { 
            cout << arr[k] << " ";  //menampilkan data pada number off pass

     }
     cout << endl;

    } while (pass <= n - 1); // step 5
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout <<  endl;
    for (int j = 0; j < n; j++) { 
        cout << arr[j]; //menampilan array 
        if (j < n - 1) {
            cout << " --> ";
      }
  }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl; //menampilkan jumlah dri pass
    cout << endl;
    cout << endl;
}
