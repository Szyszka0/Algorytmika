#include <iostream>
using namespace std;
// Funkcja wyszukiwania binarnego
int wyszukiwanie_binarne(int tab[], int szukana) {
   int l = 0;          // lewy kraniec tablicy
   int p = 14;         // prawy kraniec (bo mamy 15 elementów: indeksy 0..14)
   while (l <= p) {
       int sr = (l + p) / 2;   // indeks œrodkowy
       if (tab[sr] == szukana) {
           return sr;          // znaleziono element
       }
       else if (tab[sr] > szukana) {
           p = sr - 1;         // szukamy w lewej czêœci tablicy
       }
       else {
           l = sr + 1;         // szukamy w prawej czêœci tablicy
       }
   }
   return -1;  // jeœli nie znaleziono
}
int main() {
   int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
   int szukana;
   cout << "Podaj liczbe ktora chcesz znalezc: ";
   cin >> szukana;
   int wynik = wyszukiwanie_binarne(tab, szukana);
   if (wynik != -1) {
       cout << "Liczba " << szukana << " wystepuje w tablicy pod indeksem " << wynik << endl;
   } else {
       cout << "Liczby " << szukana << " nie ma w tablicy." << endl;
   }
   return 0;
}
