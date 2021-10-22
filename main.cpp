#include <iostream>
using namespace std;

// Deda baja je obećao Gaji, Maji i Raji marke ako dobro urade kontrolni iz informatike. Kazao im je ako zbir vaših ocjena bude veći od 11 dobit ćete ukupno onoliko maraka koliko iznosi proizvod vaših ocjena, u suprotnom dobit ćete upola manje od toga:

int main() {
  int a,b,c;

  cout<<"Unesite 3 ocjene:";
  cin>> a >> b >> c;

  if (a + b + c > 11)
    cout<< "Dobit će " << a * b * c << " marki."<< endl;
  else 
   cout<<"Dobit će "<< (a * b * c)/2 <<" marki."<< endl;

return 0; 

}