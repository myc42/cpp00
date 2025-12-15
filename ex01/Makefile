# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 14:20:38 by macoulib          #+#    #+#              #
#    Updated: 2025/12/15 16:50:04 by macoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Phonebook
CX = c++
FX = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src
SRCS = $(SRC_DIR)/Contact.cpp $(SRC_DIR)/PhoneBook.cpp main.cpp
OBJ_DIR = obj
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "Compilation terminée !"

$(NAME): $(OBJS)
	@$(CX) $(FX) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CX) $(FX) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo "Nettoyage complet terminé."

re: fclean all

.PHONY: all clean fclean re

