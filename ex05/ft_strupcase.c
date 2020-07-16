/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:55:37 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:57:16 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



char        *ft_strupcase(char *str)
{
    int i;
    i=0;
    
    while(str[i] != '\0')
    {
        if(str[i]>= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
           
        }
        i++;
        
    }
    return str;
}
