/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:52:46 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:52:58 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char        *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int c;
    c=0;
    
    while(c < n && src[c] !='\0')
    {
        dest[c]= src[c];
        
    }
    c++;
    if(c< n)
    {
        dest[c]= '\0';
    }
    return dest;
}
