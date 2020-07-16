/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:02:02 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 17:02:08 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


char   *ft_strcat(char *dest, char *arc)
{
    
    // make poiter point to the end of dest string
char *pointer = dest;

   while(*dest !='\0'){
        dest++;
   }
    
    
    while(*arc!='\0')
    {
        
        *dest=*arc;
        dest++;
        arc++;
    }
    *dest='\0';
    return pointer;
}
