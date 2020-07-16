/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:00:18 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 17:00:23 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



int       ft_str_is_lowercase(char *str)
{
    int i;
    i=0;
 
    while(str[i] != '\0')
    {
    if(str[i] >= 'a' && str[i] <= 'z')
    
    {
        
        return 1;
        
    }
    else
     {
        return 0;
     }
    }
}
