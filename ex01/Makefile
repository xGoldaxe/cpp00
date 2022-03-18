SRCS	=	main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp \

HEADERS	=	Contact.class.hpp \
			PhoneBook.class.hpp \

OBJS	=	${SRCS:%.cpp=./.build/%.o}

DEP		=	${OBJS:./.build/%.o=./.build/%.d}

NAME	=	phonebook

CFLAGS	=	-MMD -Wall -Wextra -Werror  -g -I.

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

${NAME}:	${OBJS} ${DEP}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@printf "${B_GREEN}==>{${NAME}} LINKED SUCCESFULLY<==${NONE}\n"

clean:
		@${RM} ${DEP}
		@${RM} ./.build
		@printf "${B_RED}XX clean XX\n${NONE}"

fclean:	clean
		@${RM} ${NAME}
		@printf "${B_RED}XX fclean XX\n${NONE}"

re:		fclean all

# -include ${DEP}

.PHONY:	all clean fclean re