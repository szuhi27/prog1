#include <stdio.h>
#include <unistd.h>

int main(){
	for(;;)
		sleep(1);
}

/* azonos a működésének elmélete, mit az egy szálat 100%ban használóval, viszont itt a "sleep" 
használatával késleltetjük a program végrehajtását, így nem terheli le annyira a gépet, mit a
másik*/