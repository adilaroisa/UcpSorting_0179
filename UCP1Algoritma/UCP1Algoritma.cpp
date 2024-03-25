// Type soal B atau 2
// 1. Algoritma bubble sort membandingkan dan menukar elemen dengan cara pertama-tama tentukan nilai n nya, kemudian gunakan n-1,
// setelah itu bisa melakukan langkah membandingkan nilai index 0 dengan elemen di index 1, jika nilai index 0 lebih besar dari index 1
// maka tukar nilai index tersebut, kemudian lakukan langkah ini sampai selesai.

// 2. Algoritma shell sort membandingkan dan menukar elemen dengan cara pertama-tama pisahkan nilai menjadi 2 bagian
// permasing-masing index, kemudian bandingkan index di sebelah kiri dengan index di sebelah kanan, kemudian setelah 
// kemudian setelah sedikit tersortir satkan semua nilai menjadi satu lagi, kemudian pisahkan nilai menjadi 3 bagian dan melakukan 
// pembandingan, setelah itu satukan semua nilai index nya kemduian jika sudah sedikit urut maka lakukan dengan
// membandingkan dan tukar sesuai dengan cara insertion sort.

// 3. jika data sudah ada yang berurutan maka insertion sort sangat tepat dipilih, karena dalam insertion sort 
// menggunakan cara memisahkan index 0 menjadi sorted list kemudian index 1 dan seterusnya menjadi index unsorted. 

// 4.
#include <iostream>
using namespace std;

int arr[79];
int adila;

void input() {
	while (true) {
		cout << "Masukan jumlah data pada Array adila: ";
		cin >> adila;
		if (adila < 79)
		{
			break;
		}
	
		else {
			cout << "Array dapat mempunyai maksimal 79 elemen.\adila";
		}
	}
	cout << endl;
	cout << "================" << endl;
	cout << "Masukan elemen Array" << endl;
	cout << "================" << endl;

	for (int i = 0; i < adila; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionsort() {
	int temp;
	int i, j;

	for (i = 1; i <= adila - 1; i++) {
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	
				cout << "\adilaPass " << i << ": ";
				for (int k = 0; k < adila; k++) {
					cout << arr[k] << " ";
				}
		
	}
}
void display() {
	cout << endl;
	cout << "\================" << endl;
	cout << "Elemen Array adila yang telah tersusun" << endl;
	cout << "================" << endl;

	for (int j = 0; j < adila; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();
}



   