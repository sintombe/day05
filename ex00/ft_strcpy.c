/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:52:09 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:52:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void        ft_putchar(char c){ write(1,&c,1);}
char        *ft_strcpy(char *dest, char *src)
{
	// take a pointer pointing to the beginning of destination string
    char *pointer = dest;
	// copy the C-string pointed by source into the array
    while(*src != '\0')
    {
        *dest =*src;
       dest++;
       src++;
    }
    *dest = '\0';
    return pointer;
    
}


