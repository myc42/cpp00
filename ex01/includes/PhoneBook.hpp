/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:38:05 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/16 16:00:52 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cctype>
#include <cstdlib> 
#include <iomanip>


class PhoneBook 
{
    private :
             Contact contacts[8] ;
             int _nextIndex ;
             int nbrContact;
     public :
           
             PhoneBook() :  _nextIndex(0), nbrContact(0) {}
            ~PhoneBook (){} 
            int addContact();
            void viewContact();  
};

bool isValidStr(const std::string& str);
bool isValidNbr(const std::string& str);

#endif