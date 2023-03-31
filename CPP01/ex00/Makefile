# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m


NAME =			Zombie
CC = 			clang++
CFLAGS = 		-Wall -Wextra -Werror -ggdb3 -std=c++98 -I$(INCLUDES)

INCLUDES = ./includes
SRCS_DIR = src
SRCS_FILES =	Zombie.cpp \
				main.cpp

OBJS_DIR = ./objs

SRCS = 			$(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
OBJS =          $(SRCS:$(SRCS_DIR)/%.cpp=%.o)
#OBJS = $(notdir $(SRC:.c=.o))

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo -e "\e[1;32m$(NAME) COMPILED SUCCESFULY!\e[0m"

#****************************************************************************#
#               				MAKEFILE									 #
#****************************************************************************#
all:			$(NAME)

$(OBJS): $(SRCS)
	@printf "\n$(CY)Compiling source files...$(RC)\n"
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -g -c -I ./includes/ $(SRCS)
	@printf "$(GR)Objects ready!$(RC)\n\n"

clean:
				rm -rfd $(OBJS_DIR)
				@echo -e "\e[1;32m$(NAME) CLEAN EXECUTED SUCCESFULY!\e[0m"

fclean:	clean
				find . -maxdepth 1 -type f ! -name "Makefile" ! -name "*.cpp" ! -name "*.hpp" -delete
				@echo -e "\e[1;32m$(NAME) FCLEAN EXECUTED SUCCESFULY!\e[0m"

re:
				@make fclean && make all
				@echo -e "\e[1;32m$(NAME) RE EXECUTED SUCCESFULY!\e[0m"

.PHONY:			all clean fclean re


valgrind: 			$(NAME)
				@clear
				@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

