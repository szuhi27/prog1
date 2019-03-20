/* A decimális számrendzser az "általánosan használt" rendszer, azaz a tizes rendszer.
Az unáris pedig az egyes számrendszer, ezt a program vonalakkal fogja jelezni, minden
vonal értékr egy. HA összeszámoljuk a vonalakat kijön a decimálisan megadott szám.*/

#include <iostream>
using namespace std;

int main(){
	int a,s=0,h=0;		
			//definiáljuk a használt változókat, a=a kért szám, s és h pedig számolja, 
				//hány "vonalat" irunk ki
	cout<<"adjon meg egy számot!\n";
	cin>>a;		//itt kérjük be a számot
	for(int i=0; i<a; i++){		//a for ciklus addig megy, amíg el nem éri a megadott számot
		cout<<"|";	//kiirjuk a "vonalakat"
		++s;
		++h;
		if(s==5){	//ha eléri asz 's' az 5öt kiír egy 'spacet', a könnyebb olvashatóság érdekben
			cout<<" ";
			s=0;	//lenullázzuk az s-t
		}
		if(h==100){		//ha a h eléri a 100at kiír egy sortörést
			cout<<"\n";
			h=0;	//lenullázzuk a h-t
		}
	}
	cout<<"\n";		//a végén egy újabb sortörés az olvashatóság miatt
}