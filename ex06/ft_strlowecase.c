/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowecase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:57:42 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:57:52 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>



char        *ft_strlowcase(char *str)
{
    int i;
    i=0;
    
    while(str[i] != '\0')
    {
        if(str[i]>= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
           
        }
        i++;
        
    }
    return str;
}
