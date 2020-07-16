#include <stdio.h>
#include <unistd.h>
#include <string.h>


void ft_putchar(char c){
    write(1,&c,1);
}

int     ft_strcmp(char *s1, char *s2)
{
   
    while(*s1==*s2)
    {
        s1++;
        s2++;
    }
    if(*s1 == *s2)
    {
        return 0;
    }
    else
    {
        return *s1 - *s2;
    }
    
}

