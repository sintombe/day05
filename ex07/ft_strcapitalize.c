/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:58:59 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:59:04 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
