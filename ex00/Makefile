# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 17:37:47 by macoulib          #+#    #+#              #
#    Updated: 2025/12/14 17:37:49 by macoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone
C = c++
F = -Wall -Wextra -Werror -std=c++98



SRCS = megaphone.cpp
OBJ_DIR = obj
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "Compilation terminée !"

$(NAME): $(OBJS)
	@$(C) $(F) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(C) $(F) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo "Nettoyage complet terminé."

re: fclean all

.PHONY: all clean fclean re
