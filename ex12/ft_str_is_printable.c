/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:01:27 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 17:01:33 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



int       ft_str_is_printable(char *str)
{
    int i;
    i=0;
 
    while(str[i] != '\0')
    {
    if(str[i] >= 32 && str[i] <=127)
    
    {
        
        return 1;
        
    }
    else
     {
        return 0;
     }
    }
}
