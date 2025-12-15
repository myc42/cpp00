/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:38:05 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/15 20:46:34 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cctype>
#include <cstdlib> 

class PhoneBook 
{
    private :
             Contact contacts[8] ;
             int _nextIndex ;
     public :
           
             PhoneBook() :  _nextIndex(0) {}
            ~PhoneBook (){} 
            int addContact();
            void viewContact();  
};

#endif