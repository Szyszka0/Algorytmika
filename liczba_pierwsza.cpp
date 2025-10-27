#include <iostream>
using namespace std;
#include <cmath> 
bool liczby_pierwsze(int n) {
	if (n < 2){
		return false;
	}
	for (int d = 2; d <= sqrt(n); d++){
		if (n % d == 0) {
			return false;
		}
	}
		return true;
}

int main() {
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	if(liczby_pierwsze(n)) {
		cout << n << " jest liczba pierwsza." << endl;
	}else {
		cout << n << " nie jest liczba pierwsza" << endl;
	}
		
	return 0;
}