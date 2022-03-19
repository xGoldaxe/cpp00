SRCS	=	main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp \

HEADERS	=	Contact.class.hpp \
			PhoneBook.class.hpp \

OBJS	=	${SRCS:%.cpp=./.build/%.o}

NAME	=	phonebook

CFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

RM		=	rm -rf

CC		=	c++

# COLORS
NONE			= \033[0m
CL_LINE			= \033[2K
B_RED			= \033[1;31m
B_GREEN			= \033[1;32m
B_MAGENTA 		= \033[1;35m
B_CYAN 			= \033[1;36m

./.build/%.o : %.cpp
		@$(CC) ${CFLAGS} -I. -o $@ -c $?
		@printf "${B_MAGENTA}Compilling $? ...\n${NONE}"

all:	
		@mkdir -p .build
		@make ${NAME} --no-print-directory

${NAME}:	${OBJS}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@printf "${B_GREEN}==>{${NAME}} LINKED SUCCESFULLY<==${NONE}\n"

clean:
		@${RM}
		@${RM} ./.build
		@printf "${B_RED}XX clean XX\n${NONE}"

fclean:	clean
		@${RM} ${NAME}
		@printf "${B_RED}XX fclean XX\n${NONE}"

re:		fclean all

.PHONY:	all clean fclean re