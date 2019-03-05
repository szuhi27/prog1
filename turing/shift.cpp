#include <iostream> 

int main(){
 int s=1;
 int i=1;
 while (s >=0){   //addig fut, amíg az s értéke nagyobb/egyenlő, mint 0
   s<<=1;	//balra shiftel eggyel, vagyis a "szó" végére egy 0-át rak, amígy a "szó" csak 
   				//0-ból áll, azaz a bináris értéke =0
   i++;	//egyel növeli az i értékét, ezzez számolja, hogy hányszor shiftel a program,
   			//vagyis hány 0-át rak a szó végére
  }
 std::cout <<"Gepi szo hossz: "<<i<<"\n";  //kiírja, az i értékét, azaz, hogy hány shift volt
}