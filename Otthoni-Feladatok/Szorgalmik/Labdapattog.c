#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
 
  void Cls() { 
	for (int i = 0; i <100; i++)
    	printf("\n");
    }

int main() {

int xmax=200;
int ymax = 40;
int x = 0;
int y = 0;
int xt = 0;
int yt = 0;

Cls();


while(1) {

int xt = abs(x%xmax-xmax/2);
int yt = abs(y%ymax-ymax/2);



for (int i = 0; i < yt; i++) {
printf("\n");
}

for (int i = 0; i < xt; i++) {
printf(" ");
}

printf("@");

for (int i = yt; i < 23; i++) {
printf("\n");
}

x++;
y++;



sleep(1);
Cls();
    	
    }
}
