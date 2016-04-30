##
## Makefile for make in /home/nguye_0/rendu/CPE_2015_Allum1
##
## Made by alexandre2 nguyen
## Login   <nguye_0@epitech.net>
##
## Started on  Mon Feb  8 17:36:39 2016 alexandre2 nguyen
## Last update Fri Feb 26 19:17:15 2016 alexandre
##

CC	= gcc -g

RM	= rm -f

CFLAGS  += -Wextra -Wall -Werror
CFLAGS  += -ansi -pedantic
CFLAGS  += -I./include

LDFLAGS =

NAME	= allum1

SRCS	= src/allum1.c \
	  src/firstmap.c \
	  src/bases.c \
	  src/error.c \
	  src/player.c \
	  src/computer.c \
	  src/first.c \
	  src/sentence.c \
	  src/parse.c \
	  src/secondmap.c \
	  src/computer2.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	 $(CC) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
