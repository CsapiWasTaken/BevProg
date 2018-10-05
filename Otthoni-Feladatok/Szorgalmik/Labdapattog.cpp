#include "std_lib_facilities.h"
#include <unistd.h>
 
  void Cls() { 
    cout << string( 100, '\n' );
    }

int main() {

int xmax=200;
int ymax = 40;
int x = 0;
int y = 0;
int xt = 0;
int yt = 0;

Cls();


while(true) {

int xt = abs(x%xmax-xmax/2);
int yt = abs(y%ymax-ymax/2);



for (int i = 0; i < yt; i++) {
cout << endl;
}

for (int i = 0; i < xt; i++) {
cout << " ";
}

cout << "@";

for (int i = yt; i < 23; i++) {
cout << endl;
}

x++;
y++;



sleep(1);
Cls();
    	
    }
}
