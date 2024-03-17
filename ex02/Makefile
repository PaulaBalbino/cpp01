# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 11:28:57 by pbalbino          #+#    #+#              #
#    Updated: 2024/03/17 21:27:16 by pbalbino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain

CXX		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJPATH = ./obj/

SRC =	main.cpp

OBJ = $(addprefix $(OBJPATH), $(SRC:.cpp=.o))

all:	$(OBJPATH) $(NAME)

$(OBJPATH):
	mkdir $(OBJPATH)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJPATH)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJPATH)

fclean:		clean
	rm -rf $(NAME)

re:	fclean all