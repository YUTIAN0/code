#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  /*
   * 打印参数列表
   */
  /*
  printf("argc=%d\n",argc);
  for(int i=0;i<argc;i++) {
    printf("argv[%d]=%s ",i, argv[i]);
  }
  printf("\n");         */                                    
  int opt,flags;
  char *avalue,*bvalue;

  flags = 0;
  char *optstring = "c"; 
  while ((opt = getopt(argc, argv, optstring)) != -1) {
    switch(opt) {
      case 'c': 
        flags = 1;
        avalue = optarg;
        printf("%s",optarg);
        break;
      case 'h': 
        flags = 2;
       // bvalue = optarg;
         printf("---------------------------------------------\n");
         printf("Returns the number of substring occurrences\n");
         printf("Format:\n");
         printf("String Substring\n");
         printf("-----------------------------------------------\n");
        break;
  
      default:
        flags = 5;
    }
  }
  //printf("flags=%d; optind=%d; avalue=%s; bvalue=%s\n", flags, optind, avalue,bvalue);

  exit(EXIT_SUCCESS);
}