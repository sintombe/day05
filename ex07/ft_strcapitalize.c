#include <stdio.h>
#include <unistd.h>
#include <string.h>



char        *ft_strcapitalize(char *str)
{
    int i;
    i=0;

    while(str[i] != '\0')
    {
        while(i==0)
        {
        if(str[i]>= 'a' && str[i] <= 'z')
        {
            str[i] =  str[i] - 32;
           i++;
        }
        
        }
        
        if(str[i]==' ')
        {
            i++;
            if(str[i]>= 'a' && str[i] <= 'z')
              {
               str[i] =  str[i] - 32;
                i++;
             }
        }
        
        else
        {
            if(str[i]>= 'A' && str[i] <= 'Z')
              {
               str[i] =  str[i] + 32;
                
             }
        }
        i++;

    }
    return str;
}
