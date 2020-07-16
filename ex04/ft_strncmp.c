#include <stdio.h>
#include <unistd.h>
#include <string.h>


void ft_putchar(char c){
    write(1,&c,1);
}

int     ft_strncmp(char *s1, char *s2,unsigned int n)
{
   
    while(n && (*s1==*s2))
    {
        s1++;
        s2++;
        n--;
    }
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return *s1 - *s2;
    }
    
}

