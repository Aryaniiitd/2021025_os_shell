#include<stdio.h>
#include<time.h>
#include<string.h>
int main(int a,char * ar[]){
     time_t t;
     time(&t);
    // printf("%ld",t);
     //printf("%s",ar[1]);
     
    // printf("%s",ar[]);
    if (strcmp(ar[1],"u")==0){
       // printf("HI");
      //  printf("%s %s",am[0],am[1]);
      t-=19800;

        printf("%s",ctime(&t));
    }
    else if(strcmp(ar[1],"r")==0){
        time_t r;
        scanf("%ld",&r);
        
        printf("%s",ctime(&r));
    }
    else{
        char *am=ctime(&t);
        printf("%s",am);
    }



}