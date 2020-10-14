#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int findsub(char* src, char* s)
{
    char *ptr=src, *p=s;    //定义两个指针 
    char *ptr2=src+strlen(src), *prev=NULL;    //ptr2为src的末位置指针 
    int len=strlen(s), n=0;        //子串的长度和计数器 
    for(;*ptr;ptr++)    //循环整个串 
    {
        if(ptr2-ptr<len)    //如果一开始子串就大于src,则退出 
            break;
        for(prev=ptr;*prev==*p;prev++,p++)    //寻找第一个相等的位置,然后从此位置开始匹配子串 
        {
            if(*(p+1)==0||*(p+1)==10)    //如果已经到了子串的末尾 
            {
                n++;    //自增 
                p=s;    //重新指向子串 
                break;//退出 
            }
        }
    }
    return n;
}
 
int main(int argc,char** argv)
{
    if (argc==3){
  /*  char a[81],b[81];        //定义两个字符数组
    printf("输入原字符串:"); 
    fgets(a,81,stdin);    //输入
    printf("输入子字符串:"); 
    fgets(b,81,stdin);*/
    printf("%d",findsub(argv[1],argv[2]));
  //  system("pause");}
    return 0; 

    }
    else{
    printf("---------------------------------------------\n");
    printf("Returns the number of substring occurrences\n");
    printf("Format:\n");
    printf("String Substring\n");
    printf("-----------------------------------------------\n");
    }
}