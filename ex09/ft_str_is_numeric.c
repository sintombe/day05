#include <stdio.h>
#include <unistd.h>
#include <string.h>



int       ft_str_is_numeric(char *str)
{
    int i;
    i=0;
 
    while(str[i] != '\0')
    {
    if(str[i] >= '0' && str[i] <= '9')  
    {
        
        return 0;
        
    }
    else
     {
        return 1;
     }
    }
}

