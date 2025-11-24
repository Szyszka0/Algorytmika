#include <iostream>
using namespace std;

void rozklad(int n){
	int k=2;
	cout << "Czynniki pierwsze liczby " << n << ": ";
	
	while(n>1){
		while (n%k == 0){
			cout << k << " ";
			n/=k;
		}
		k++;
	}
}
int main() {
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	
	rozklad(n);
	return 0;
}