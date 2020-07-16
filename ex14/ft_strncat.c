/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:49:43 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 17:02:42 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


char   *ft_strncat(char *dest, char *src,int nb)
{
    
    // make poiter point to the end of dest string
char *pointer = dest;

   while(*dest !='\0'){
        dest++;
   }
    
    while (nb--)
        if (!(*dest++ = *src++))
            return pointer;
    *dest = 0;
    return pointer;
}

