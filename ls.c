#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int a,char *ar[]){
    system("ls");
    if(strcmp(ar[1],"l")==0){
        system("ls -l");
    }
    
}