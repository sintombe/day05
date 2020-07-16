/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:53:23 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/16 16:53:35 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_putchar(char c){
    write(1,&c,1);
}
char        *ft_strstr(char *str, char *to_find)
{
   int i;
   int k;
   i=0;
   k=0;
   
   while(str[i] !='\0'){ // if first character of search string matches
       if(str[i] ==to_find[k]){//searching
       while(str[i] ==to_find[k] && str[i] !='\0'){
           i++;
           k++;
           
       }
       }
       return to_find;
   }
}
