#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int main()
{
  // float i;
  // char y[12];
  // scanf("%f",&i);
  // int id=fork();
  // if(id==0){
  // printf("%f child id: %d\n",i,id);}
  // else{printf("%f  id: %d\n",i,id);}
  printf("\e[1;1H\e[2J");
  char *buf;
  char arr[20];
  char *opd;
  opd = (char *)malloc(40 * sizeof(char));
  getcwd(opd, 40);
  // printf("\n%s\n",buf);

  printf("*WELLCOME TO ARYAN SHELL*\n");
  printf("\n");
  while (1)
  {

    printf("aryansharma@shell ~ %% ");
    scanf("%[^\n]%*c", arr);
    // printf("d");
    // printf("%c 2%c\n",arr[0],arr[1]);
    if (arr[0] == 'c' && arr[1] == 'd')
    {
      // printf("1");
      char *str;
      str = (char *)malloc(1028 * sizeof(char));
      getcwd(str, 1028);
      // printf("2");
      str = strcat(str, "/");
      // printf("%s\n",str);
      int k = 3;
      while (arr[k] != '\0')
      {
        // printf("%s\n",&arr[k]);
        char a = arr[k];
        str = strcat(str, &a);
        // printf("%s %c %d\n",str,arr[k],k);
        k++;
      }
      // printf("%s\n",str);
      char *str1;
      str1 = (char *)malloc(1028 * sizeof(char));
      //  strcpy(str1,str);
      int l = 0;
      int ll = 3;
      char hrr[20];
      while (arr[ll] != '\0')
      {
        hrr[l] = arr[ll];
        l++;
        ll++;
      }
      hrr[l] = '\0';
      //  printf("%s",hrr);
      chdir(hrr);
      getcwd(str1, 1028);
      //  printf("yo %s\n",str1);
      // while ((getchar()) != '\n'){}
      // printf("%c4 %c\n",arr[0],arr[1]);

      /// Users/aryansharma/Desktop/assign
    }
    else if (arr[1] == 'c' && arr[2] == 'h' && arr[3] == 'o' && arr[0] == 'e')
    {
      int i = 5;
      // printf("1");
      if (arr[5] == '-' && arr[6] == 'e')
      {
        // printf("2\n");
        i = 9;
        // printf("%d %d","\'",'"');
        while (arr[i] != 92 && arr[i] != 34)
        {
          printf("%c", arr[i]);
          i++;
        }
        if (arr[i + 1] == 'n')
        {
          i += 2;
          printf("\n");
          while (arr[i] != 34)
          {
            printf("%c", arr[i]);
            i++;
          }
          printf("\n");
        }
        if (arr[i + 1] == 't')
        {
          i += 2;
          printf("   ");
          while (arr[i] != 34)
          {
            printf("%c", arr[i]);
            i++;
          }
          printf("\n");
        }
      }
      if (arr[5] == '-' && arr[6] == '-' && arr[7] == 'h' && arr[8] == 'e' && arr[9] == 'l' && arr[10] == 'p')
      {
                    printf("NAME  top\n echo - display a line of text\nSYNOPSIS\n         top echo [SHORT-OPTION]... [STRING]... \necho LONG-OPTION\nDESCRIPTION         to\nEcho the STRING(s) to standard output.\n-n     do not output the trailing ne\\n-e     enable interpretation of backslash escapes\n-E     disable interpretation of backslash escapes (default)\n--help display this help and exit\n--versio\noutput version information and e\nIf -e is in effect, the following sequences are recognized\nbackslas\nalert (BEL\nbackspac\nproduce no further outpu\nesca\nform fee\nnew lin\ncarriage retur\nhorizontal ta\nvertical tab");
      }
      else
      {
        while (arr[i] != '\0')
        {
          printf("%c", arr[i]);
          i++;
        }
        printf("\n");
      }
    }
    else if (arr[0] == 'p' && arr[1] == 'w' && arr[2] == 'd')
    {
      // chdir("ji");
      //  printf("HI");
      //  char *brr;
      //  brr=(char *)get_currnet_dir_name();
      //  printf("Currently working directory :%s\n",brr);
      // system("pwd");

      if (arr[5] == 'L')
      {
        // printf("L");
        buf = (char *)malloc(50 * sizeof(char));
        getcwd(buf, 50);
        printf("%s\n", buf);
      }
      else if (arr[5] == 'P')
      {
        // printf("L");
        buf = (char *)malloc(60 * sizeof(char));
        getcwd(buf, 60);
        printf("%s\n", buf);
      }
      else
      {
        buf = (char *)malloc(40 * sizeof(char));
        getcwd(buf, 40);
        printf("%s\n", buf);
      }
    }
    else if (arr[1] == 'a' && arr[2] == 't' && arr[3] == 'e' && arr[0] == 'd')
    {
      int pd;
      pd = fork();
      if (pd == 0)
      {
        // char *ab;
        //  ab=(char *)malloc(2*sizeof(char));
        //  ab[0]=(char *)arr[6];

        char yrr[40];
        strcpy(yrr, opd);

        strcat(yrr, "/date");
        //  printf("%s",yrr);
        char *ab[] = {yrr, &arr[6], NULL};
        // printf("%s",ab[0]);
        execvp(ab[0], ab);
      }
      else
      {
        //   printf("HI1\n");
        wait(NULL);
      }
    }
    else if (arr[0] == 'l' && arr[1] == 's')
    {
      int pd;
      pd = fork();
      if (pd == 0)
      {
        char yrr[40];
        strcpy(yrr, opd);

        strcat(yrr, "/ls");
        //  printf("%s",yrr);

        char *a[] = {yrr, NULL};
        execvp(a[0], a);
      }
      else
      {
        //   printf("HI1\n");
        wait(NULL);
      }
    }

    // printf("\ndone\n");
    if (arr[0] == 'e' && arr[1] == 'x' && arr[2] == 'i' && arr[3] == 't')
    {
      printf("SUCESSFULLY EXITED !!");
      exit(0);
    }
  }
}

// while ((getchar()) != '\n'){}

// scanf("%s",y);
// printf("%s",y);
// fgets(y,11,stdin);
// printf("%s",y);
// scanf("%[^\n]c",y);
// printf("%s\n",y);
/* int j=0;


 while(y[j]!='\0'){
     printf("%c\n",y[j]);
     j++;}*/
