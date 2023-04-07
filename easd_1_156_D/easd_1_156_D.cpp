//1.untuk menyelesaikan suatu masalah karena algoritma merupakan yang di rancang untuk menylesaikan masalah
//2.linear data structure dan non-linear data structure
//3.ukuran input:semakin besar ukuran input maka semkain  lama juga waktu yang di perluhkan,proceceor:procecor juga sangat mempergaruhi ke efisienan sutau kinerja lagoritma semkain bagus besar maka bisa semakin cepat,penggunaan memory:memory juga bisa mmepergaruhi efiensi program algoritma jika pemrgorman menggunakan memory secara berlebihan maka akan memperlambat kinerja sutau pemgroman
//4.selection sort
//5.Quadratic (O(n^2)):
//Bubble Sort
//Selection Sort
//Insertion Sort
//Algoritma - algoritma di atas memiliki kompleksitas waktu yang bersifat kuadratik, yang berarti waktu eksekusinya meningkat secara kuadratik seiring dengan bertambahnya ukuran input data.Oleh karena itu, algoritma - algoritma ini kurang efisien untuk digunakan pada data dengan ukuran yang besar
//Loglinear(O(n log n)) :
//Merge Sort
//Quick Sort
//Heap Sort
//Algoritma - algoritma di atas memiliki kompleksitas waktu yang bersifat loglinear, yang berarti waktu eksekusinya meningkat secara logaritmik seiring dengan bertambahnya ukuran input data.Algoritma - algoritma ini lebih efisien dibandingkan dengan algoritma Quadratic pada data dengan ukuran yang besar.




#include <iostream>
#include <string>
using namespace std;

const int MAX_DATA = 33;

void input(int data[], int n) {
	cout << "massukan" << n << "angka:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "data ke-" << i + 1 << ": ";
		cin >> data[i];
	}
}

void selection(int data[], int n) {
	int fa;
	for (fa = 0; fa < n - 1; fa++) {
		int min_index = fa;
		for (int i = fa+1; i < n; i++){
			if (data[i] < data[min_index]) {
				min_index = i;
			}

		}
	swap(data[fa], data[min_index]);
	}
}

void display(int data[], int n) {
	cout << "hasil selection sort:" << endl;
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}