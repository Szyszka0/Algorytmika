#include <iostream>
using namespace std;

void binarne(int liczba) {
	int tab[31];
	int i = 0;
	
	while (liczba != 0){
		tab[i++] = liczba % 2;
		liczba  = liczba/2;
	}
	for (int j = i - 1; j >= 0; j--){
		cout << tab[j];
	}
}
	int main() {
		int liczba;
		cout << "Podaj liczbe dziesietna: ";
		cin >> liczba;
		
		cout << "Liczba po zamianie na postac binarna: ";
		binarne(liczba);
		
		return 0;
	}
