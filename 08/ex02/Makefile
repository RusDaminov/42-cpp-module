# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 15:22:25 by rnoriko           #+#    #+#              #
#    Updated: 2022/05/02 15:23:27 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutated_abomination

CC = clang++
CFLAGS = -std=c++03 -Wall -Wextra -Werror

RM = rm
RMFLAGS = -rf

INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

INCS = $(addprefix $(INC_DIR)/, \
	mutantstack.hpp \
)

SRCS = $(addprefix $(SRC_DIR)/, \
	mutantstack.cpp	\
	main.cpp	\
)

vpath %.cpp $(SRC_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))


# ============================================================================ #
#                                   COLOR                                      #
# ============================================================================ #

CL_BOLD	 = \e[1m
CL_DIM	= \e[2m
CL_UDLINE = \e[4m

NO_COLOR = \e[0m

BG_TEXT = \e[48;2;45;55;72m
BG_BLACK = \e[48;2;30;31;33m

FG_WHITE = $(NO_COLOR)\e[0;37m
FG_TEXT = $(NO_COLOR)\e[38;2;189;147;249m
FG_TEXT_PRIMARY = $(NO_COLOR)$(CL_BOLD)\e[38;2;255;121;198m

LF = \e[1K\r$(NO_COLOR)
CRLF= \n$(LF)

all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJS) obj/
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)'s Object files...\n"

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)
	@printf "$(LF)🧹 $(FG_TEXT)Cleaning $(FG_TEXT_PRIMARY)$(NAME)\n"

re : fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp $(INCS) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@printf "$(LF)🚧 $(FG_TEXT)Create $(FG_TEXT_PRIMARY)$@ $(FG_TEXT)from $(FG_TEXT_PRIMARY)$<"

$(NAME) : $(OBJS) $(INCS)
	@printf "$(LF)🪧 $(FG_TEXT)Successfully Created $(FG_TEXT_PRIMARY)$@'s Object files $(FG_TEXT)!"
	@printf "$(CRLF)📜 $(FG_TEXT)Create $(FG_TEXT_PRIMARY)$@$(FG_TEXT)!\n"
	@$(CC) $(CFLAGS) -I $(INC_DIR) $(OBJS) -o $@
	@printf "$(LF)🧶 $(FG_TEXT)Successfully Created $(FG_TEXT_PRIMARY)$@ $(FG_TEXT)!\n$(NO_COLOR)"


.PHONY: all clean fclean re
