/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:38:00 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/15 20:43:33 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

bool isValidStr(const std::string& str)
{
    for(size_t i = 0 ; i < str.length(); i ++)
    {
         if (!std::isalpha(str[i]))
            return (false) ;
    }
    return (true) ;
}

bool isValidNbr(const std::string& str)
{
    for(size_t i = 0 ; i < str.length(); i ++)
    {
         if (!std::isdigit(str[i]))
            return (false) ;
    }
    return (true) ;
}



int PhoneBook::addContact(void)
{
     std::string firstName, lastName , nick , phone, secret ;
     Contact contact;
    
     do{
         std::cout << "Please, enter First Name : ";
         std::getline(std::cin, firstName);
          if (std::cin.eof()) {
            std::cout << "\nERROR !\n";
              exit(1);
          }
           if(firstName.empty() ||!isValidStr(firstName))
            std::cout << "\first format error  !\n";
          
      } while (firstName.empty() || !isValidStr(firstName));

      /*--------------------------*/
       do{
            std::cout << "Please, enter Last Name : ";
         std::getline(std::cin, lastName);
           if (std::cin.eof()) {
            std::cout << "\nERROR !\n";
              exit(1);
          }
          if(lastName.empty() ||!isValidStr(lastName))
            std::cout << "❌lastName format error  !\n";
            
      } while (lastName.empty() ||!isValidStr(lastName));
/*--------------------------*/
       do{
          std::cout << "Please, enter Phone Number : ";
         std::getline(std::cin, phone);
          if (std::cin.eof()) {
            std::cout << "ERROR !\n";
              exit(1);
          }
            if(phone.empty() ||!isValidNbr(phone))
            std::cout << " ❌phone format error  !\n";
           
      } while (phone.empty() || !isValidNbr(phone));
/*--------------------------*/
       do{
         std::cout << "Please, enter your Nickname : ";
         std::getline(std::cin, nick);
            if (std::cin.eof()) {
            std::cout << "❌ERROR !\n";
              exit(1);
          }
            if(nick.empty() ||!isValidStr(nick))
            std::cout << "❌ nick format error  !\n";
            
      } while (nick.empty() || !isValidStr(nick));
/*--------------------------*/
       do{
        std::cout << "Please, enter your dark secret : ";
         std::getline(std::cin, secret);
            if (std::cin.eof()) {
            std::cout << "❌ERROR !\n";
              exit(1);
          }
          
      } while (secret.empty());

     contact.setContact(firstName,lastName,nick,phone,secret);
     this->contacts[this->_nextIndex] = contact;
     this->_nextIndex ++;
     if (this->_nextIndex >= 8) {
        this->_nextIndex = 0;
     }
     
    return (0);
}



void PhoneBook::viewContact()
{
    
 
    for (int i = 0; i < 8; i++)
    {

         this->contacts[i].getContact() ;
    }
    
}