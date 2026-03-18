#include <iostream>
using namespace std;

double horner(int wsp[], int st, double x){
	if(st==0) {
		return wsp[0];
	}
	return x * horner(wsp, st - 1, x) 
	+ wsp[st];
}
int main() {
	int stopien;
	double argument;
	
	cout << "Podaj stopien wielomianu: ";
	cin >> stopien;
	int* wsp = new int[stopien+1];
	for (int i = 0; i <= stopien; i++)
	{
		cout << "Podaj wspolczunnik stojacy przy potedze " << stopien - i << ": ";
		cin >> wsp[i];
	}
	cout << "Podaj argument: ";
	cin >> argument; 
	cout << "W" << "( " << argument << " )" << " = " << horner(wsp, stopien, argument) << endl;
	delete[] wsp;
	return 0;
}
