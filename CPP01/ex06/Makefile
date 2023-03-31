# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m


NAME =			harlFilter
CC = 			clang++
CFLAGS = 		-Wall -Wextra -Werror -ggdb3 -std=c++98 -I$(INCLUDES)

INCLUDES = ./includes
SRCS_DIR = src
SRCS_FILES =	Harl.cpp\
				main.cpp
OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS_FILES:.cpp=.o))

SRCS = 			$(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo -e "\e[1;32m$(NAME) COMPILED SUCCESFULY!\e[0m"

#****************************************************************************#
#               				MAKEFILE									 #
#****************************************************************************#
all:			$(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@printf "\n$(CY)Compiling source files...$(RC)\n"
	$(CC) $(CFLAGS) -g -I ./includes/ -c $< -o $@
	@printf "$(GR)Objects ready!$(RC)\n\n"

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

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

