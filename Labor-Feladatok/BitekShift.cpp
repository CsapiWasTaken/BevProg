#include "std_lib_facilities.h"
#include <bitset>  

int main() {
int a = 1; //Az "a" amit shiftelünk
int Count = 0; //Számláló, hogy hányszor megy végig a While
while(a != 0) {
a = a << 1; //Shift
Count++; // Számláló + 1
cout << "Count: " << Count << '\n'; //Jelenleg hanyadik loop
cout << "A: " << a << '\n'; //Maga az "a" értéke
}
cout << '\n' << "Count is " << Count << '\n'; //Hányszor megy végig összesen
}
