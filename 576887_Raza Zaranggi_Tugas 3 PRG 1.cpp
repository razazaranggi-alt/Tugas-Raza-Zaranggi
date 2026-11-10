#include<iostream>
using namespace std;

int fungsi(int n) {
 if (n <= 1) {
  return 1;
}
if (n % = 0){
	return n/2*fungsi(n-1);
}else{
	return n*fungsi(n-1);
}

int main() {
 int angka;
 cout << "Masukkan angka untuk faktorial: ";
 cin >> angka;
 cout << "Faktorial dari " << angka << " adalah "
 << fungsi(angka) << endl;
 return 0;
}

