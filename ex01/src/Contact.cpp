/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:19:41 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/15 20:05:13 by macoulib         ###   ########.fr       */
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


void Contact::getContact()
{
   
   std::cout << firstName;
   std::cout << lastName;
   std::cout << nickName;
   std::cout << phoneNumber;
   std::cout << darkestSecret;

}