/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:19:41 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/16 15:49:25 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"



void Contact::setContact(
    const std::string &firstN,
    const std::string &lastN,
    const std::string &nickN,
    const std::string &phone,
    const std::string &secret
)
{
   firstName = firstN;
   lastName = lastN ;
   nickName = nickN ;
   phoneNumber = phone;
   darkestSecret = secret ;
}

static void truncated(const std::string &str) {
  if (str.length() > 10)
    std::cout << std::setw(10) << str.substr(0, 9) + ".";
  else
    std::cout << std::setw(10) << str;
}

void Contact::getContact(int index)
{
   
  std::cout << std::setw(10) << index << "|";
  truncated(firstName);
  std::cout << "|";
  truncated(lastName);
  std::cout << "|";
  truncated(phoneNumber);
  std::cout << "|";
  truncated(nickName);
  std::cout << std::endl;
  std::cout << "\n";
 
}


 void  Contact::getContact_by_index ()
 {
   std::cout << "First Name : ";
   std::cout << firstName; 
     std::cout << "\n";
   std::cout << "Last Name : ";
   std::cout << lastName;
     std::cout << "\n";
   std::cout << "Phone number : ";
   std::cout << phoneNumber;
     std::cout << "\n";
   std::cout << "Nickname : ";
   std::cout << nickName;
   std::cout << "\n";
 }