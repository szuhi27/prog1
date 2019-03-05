#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv){
#pragma omp parallel
{
while(1){}}
return 0;
}
