/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:37:38 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/14 21:17:04 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av) {
   
    
    char c;
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * ";
    for (int i  = 1 ; ac > i ; i ++)
    {
        for  (int j = 0; av[i][j] ; j++)
        {
             c  = av[i][j] ;
             if(c >= 'a' && c <= 'z')
                c =  c - 32 ;
             std::cout << c ;
        }
         std::cout << " ";
    }
   std::cout << std::endl;
   return 0;
}



