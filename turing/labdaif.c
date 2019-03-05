#include <stdio.h>
#include <curses.h>
#include <unistd.h> 

int main(){
	WINDOW *ablak;
	ablak=initscr();
	int x=0,y=0; //oszlop és sor
	int px=2,py=4; //"pattogás gyakorisága"
	int mx,my; //oszlopok, sorok száma
	for(;;){ //végtelen ciklus a for ban
		getmaxyx(ablak, my, mx);
		mvprintw(y, x, "x");
		refresh();
		usleep(75000);	//késlelteti a ciklust a megadottt idővel (milyen gyorsan pattog a labda)
		clear();  //törli az ablak tartalmát
		x=x+px;
		y=y+py;
		if(x<=0)
			px=px*-1;
		if(x>=mx-1)
			px=px*-1;
		if (y<=0)
			py=py*-1;
		if(y>=my-1)
			py=py+-1;
		//az if sorokban vizsgáljuk, hogy a "labda" elérte-e az ablak széleit
	}
}