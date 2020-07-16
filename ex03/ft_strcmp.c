/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:54:12 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:54:17 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


void ft_putchar(char c){
    write(1,&c,1);
}

int     ft_strcmp(char *s1, char *s2)
{
   
    while(*s1==*s2)
    {
        s1++;
        s2++;
    }
    if(*s1 == *s2)
    {
        return 0;
    }
    else
    {
        return *s1 - *s2;
    }
    
}

