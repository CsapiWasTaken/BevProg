#include "std_lib_facilities.h"
int main() {
	
cout << "Írj be két számot:\n";
double a;
double b;
cin >> a >> b;
cout << "Írj egy s betüt ha szorzattal vagy p betüt ha összeadéssal szeretnéd felcserélni őket\n";
char cseremethod = 0;
cin >> cseremethod;

 
cout<<"\n\n\nKezdő Értékek: a=" << a << " és b=" << b << "\n";
	


if( cseremethod == 'p') {

a = a+b;		//Különbséges megoldás
b = a-b;	
a = a-b;		

}
else if( cseremethod == 's') {
a = a*b;		//Szorzatos megoldás		
b = a/b;		
a = a/b;		

}	
cout << "A Felcserélés utáni érték: a=" << a << "  b=" << b<< "\n";
}
