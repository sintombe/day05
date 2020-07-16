/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:00:51 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 17:00:56 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



int       ft_str_is_uppercase(char *str)
{
    int i;
    i=0;
 
    while(str[i] != '\0')
    {
    if(str[i] >= 'A' && str[i] <= 'Z')
    
    {
        
        return 1;
        
    }
    else
     {
        return 0;
     }
    }
}
