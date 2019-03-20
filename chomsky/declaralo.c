#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*int sum(int a,int b){
return a+b;
}

int szor(int a,int b){
return a*b;
} 

int(*(d)(int a))(int,int){
if (a==1)
return szor;
else if(a==0)
return sum;
else 
return NULL;
}
*/
int (*(*p)(int))(int,int);


int main(){
int a=1,b,c;//egészek
int* m=&a;//egészre mutató mutató
int &r =b;//egész referenciája
int tomb[5]={0};//egészek tömbje
int (&tr)[5]= tomb;//egészek tömbjének referenciája.
int* tombm[5]={0};//egészre mutató mutatók tömbje
int* valami();//egészre mutató mutatót visszaadó függvény.

/*cout<<"Szorozni szeretnél(1) vagy összeadni(0)?\n";
cin>>a;
cout<<"Melyik az a két szám?\n";
cin>>b>>c; */

int* (*v)();//egészre mutató mutatót viasszaadó függvényre mutató mutató;
int (*(d)(int x))(int c, int d );//egészet visszaadó és két egészet kapó függvényre mutató mutatót visszaadó egészet kapó függvény.
//cout<<(*(d)(a))(b,c)<<"\n";
int ok;
//p=d;
 //függvényremutató egy egészet visszaadó két egészet kapó függvényre mutató mutatót visszaadó egészt kapó függvényre.
//cout<<(*(*p)(a))(b,c)<<"\n";
}

//Oláh Sándor segítségével