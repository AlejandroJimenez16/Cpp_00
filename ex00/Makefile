# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 13:07:13 by alejandj          #+#    #+#              #
#    Updated: 2026/02/17 13:07:15 by alejandj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

# ---------------------------------------------------------------------------- #
# 💥 RULES
# ---------------------------------------------------------------------------- #

# Create final executable
$(NAME): $(OBJECTS)
	@echo ""
	@echo "\033[0;31m⚙️  COMPILANDO... 🚀\033[0m"
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	@echo ""
	@echo "✅ \033[0;32mCPP COMPILAD0!!!\033[0m"
	@echo ""

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

# ---------------------------------------------------------------------------- #
# 🧹 CLEANING
# ---------------------------------------------------------------------------- #
clean:
	rm -rf $(OBJECTS)
	@echo "🧹 \033[0;32mObject files removed successfully! 🗑️\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "🚀 \033[0;32mExecutable $(NAME) has been removed! 👋\033[0m"

re: fclean all