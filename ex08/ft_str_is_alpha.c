/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:59:23 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:59:29 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



int       ft_str_is_alpha(char *str)
{
    int i;
    i=0;
 
    while(str[i] != '\0')
    {
    if((str[i] >= 'a' && str[i] <= 'z') ||
    (str[i] >= 'A' && str[i] <= 'Z') ) 
    {
        
        return 1;
        
    }
    else
     {
        return 0;
     }
    }
}

