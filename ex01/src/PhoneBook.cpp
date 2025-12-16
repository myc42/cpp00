/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:38:00 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/16 17:43:47 by macoulib         ###   ########.fr       */
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
      this->nbrContact ++;
     if (this->_nextIndex >= 8 || this->nbrContact >= 8  ) {
        this->_nextIndex = 0;
         this->nbrContact = 8;
     }
    return (0);
}

void PhoneBook::viewContact()
{
     std::string index_str;
     int s_in_int;
  if(nbrContact > 0)
  {
       std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
            << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10)
            << "Phone Number" << "|" << "Nickname" << std::endl;
 
    for (int i = 0; i < this->nbrContact ; i++)
    {
         this->contacts[i].getContact(i) ;
    }
     
    do{
         std::cout << "Enter index please : ";
         std::getline(std::cin, index_str);
            if (std::cin.eof()) {
            std::cout << "❌ERROR !\n";
              exit(1);
          }
         if(index_str.empty() ||!isValidNbr(index_str))
         std::cout << "❌ index incorrect !\n";
         s_in_int = std::atoi(index_str.c_str())    ; 
    } while (index_str.empty() || !isValidNbr(index_str) || !(s_in_int  >= 0 && s_in_int <= 7));
 
    if(s_in_int > nbrContact || s_in_int < 0)
     std::cout << "❌ index INVALID !\n";
    else
      this->contacts[s_in_int].getContact_by_index() ;  }
  else 
  {
        std::cout << "I don't have any contacts\n";
   }
      
}

