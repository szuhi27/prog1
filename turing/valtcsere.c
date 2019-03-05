/* Két változót megcserélni több módon is lehetséges (segédváltozóval, 
a nélkül, szorzással/osztással, összeadással/kivonással, xorral. Ezek 
közül egyre(az összeadás/kivonás, segédváltozó nélkül) irok példát.*/

#include <stdio.h>

int main(){
	int a=3, b=1;
	printf("%d ",a); //kiirjuk az a-t
	printf("%d\n",b); //kiirjuk a b-t
 	a= (a+b);  //itt az a=4, b=1
 	b= (a-b);  //itt az a=4, b=3
 	a= (a-b);  //itt az a=1, b=3
	printf("%d ",a);  //kiirjuk az a-t
	printf("%d\n",b);  //kiirjuk a b-t

}

/* három egyszerű művelettel kicseréljük két szám értékét segédváltozók nélkül*/
