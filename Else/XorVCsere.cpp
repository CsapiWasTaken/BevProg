#include "std_lib_facilities.h"
int main() {
	
cout << "Írj be két számot:\n";
int a;
int b;
cin >> a >> b;


cout<<"\n\n\nKezdő Értékek: a=" << a << " és b=" << b << "\n";

a = a^b; 		
b = b^a;  
a = a^b;

cout << "A Felcserélés utáni érték: a=" << a << "  b=" << b<< "\n";

}

