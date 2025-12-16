/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:20:13 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/16 15:49:42 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{
    private :
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNumber;
            std::string darkestSecret;
    public :
            Contact (){}
            ~Contact (){}
    void  setContact( const std::string &firstN ,const std::string &lastN, const std::string &nickN, const std::string &phone, const std::string &secret) ;
    void  getContact (int index) ;
    void  getContact_by_index () ;
} ;

bool isValidStr(const std::string& str);
bool isValidNbr(const std::string& str);
#endif 