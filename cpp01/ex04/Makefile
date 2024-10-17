# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vandre <vandre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 11:44:57 by vandre            #+#    #+#              #
#    Updated: 2024/09/03 11:45:19 by vandre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		:=		src
OBJ_DIR		:=		obj

INCLUDE		=		include/sed.hpp

NAME		=		Sed
SRC			=		$(wildcard $(SRC_DIR)/*.cpp)
OBJ			=		$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)	

FLAGS		=		-Wall -Werror -Wextra -std=c++98
CC			=		c++

$(NAME):			$(OBJ)
					$(CC) -o $(NAME) $(OBJ) $(FLAGS)

$(OBJ_DIR):
					mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

all:				$(NAME)

clean:
					rm -rf $(OBJ_DIR)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re