#include <iostream>
using namespace std;

int main()
{
	// Membuat Variable
    int n, angka_pertama = 1, angka_kedua = 1, hasil = 0;

    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> n; // Menerima Inputan Dari User
	cout<<endl;
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) // Melakukan Perulangan Deret Fibonacci
    {
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
        	// Mencetak angka pertama
            cout << " " << angka_pertama <<" ";
            continue; // Melanjutkan Proses Pemrograman
        }
        if(i == 2)
        {
        	// Mencetak angka kedua
            cout << angka_kedua << " ";
            continue;
        }

       	// Variable untuk menyimmpan hasil angka_pertama + angka_kedua 
        hasil = angka_pertama + angka_kedua;

        // Untuk Menukar Nilai dari angka_pertama dan angka_kedua
        angka_pertama = angka_kedua;
        angka_kedua = hasil;

        // Mencetak deret bilangan fibonacci berikutnya.
        cout << hasil << " ";
    }
    return 0;
}
