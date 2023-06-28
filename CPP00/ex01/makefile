# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 16:10:19 by codespace         #+#    #+#              #
#    Updated: 2023/06/24 16:10:23 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFILES = Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(CPPFILES:.cpp=.o)

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean :
	-@rm -rf $(OBJS)

fclean : clean
	-@rm -rf $(NAME)

re: fclean $(NAME)