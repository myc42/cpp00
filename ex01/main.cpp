/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:21:01 by macoulib          #+#    #+#             */
/*   Updated: 2025/12/16 15:52:08 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    std::string str;
    while (1)
    {
         std::cout << "Menu : (ADD, SEARCH, EXIT): ";
         std::getline(std::cin, str);
         if (std::cin.eof())
          {
                 std::cout << "\nERROR!\n";
                 exit(1);
         } 
         if (str == "ADD")
             pb.addContact();
        if (str == "SEARCH")
             pb.viewContact();
          if (str == "EXIT")
            break;
    }
    return 0;
}
