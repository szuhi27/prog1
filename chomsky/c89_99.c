//A c89 és c 99 közti egyik külömbség, hogy a c99-ben 'hozták be' a "//" komment jelet
//ezt a c89 nem tudja értelmezni

#include <stdio.h>

int main(){
	int a=1,b=3;
	int y;
	y = a+b;
	//y = y+a
	printf("%d", y);
}

/*További funkciók, amik a c99-el jöttek be:
	-komplex aritmetika támogatása
	-a long long int típus
	-változások a printf és scankf funkciókban
	-új könyvtárak és headerek
	-...