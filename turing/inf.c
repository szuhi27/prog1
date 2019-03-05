#include <stdio.h>

int main(){
	for(;;){

	}
}

/*Ezzel egy végtelen ciklust hhozunk létre, úgy, hogy programunkak egy 
egszerű main függvénye van, amiben egy for ciklus helyezkedik és semmi más.
A for ciklus feltételeként kettő pontosvesszőt adunk meg, ezzel azt a feltételt
tesszük, hogy "semmi", mivel a vesszők közé nem adunk meg semmit. Ezzel azt
hozzuk létre, hogy a fügvény "addig megy, amíg semmi", mivel a semmi mindig semmi
ezért a függvény nem áll le, míg manuálisan le nem állítjuk. Ez a program 
csak egy magot "foglal el".*/