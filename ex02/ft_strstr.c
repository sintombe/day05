#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_putchar(char c){
    write(1,&c,1);
}
char        *ft_strstr(char *str, char *to_find)
{
   int i;
   int k;
   i=0;
   k=0;
   
   while(str[i] !='\0'){ // if first character of search string matches
       if(str[i] ==to_find[k]){//searching
       while(str[i] ==to_find[k] && str[i] !='\0'){
           i++;
           k++;
           
       }
       }
       return to_find;
   }
}
