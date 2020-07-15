#include <stdio.h>
#include <unistd.h>

char        *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int c;
    c=0;
    
    while(c < n && src[c] !='\0')
    {
        dest[c]= src[c];
        
    }
    c++;
    if(c< n)
    {
        dest[c]= '\0';
    }
    return dest;
}
int main() {
    
   
    return 0;
}
