# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: vsudak <vsudak@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/10/21 18:22:20 by vsudak        #+#    #+#                  #
#    Updated: 2025/10/31 15:21:25 by vsudak        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# CC = cc

# CFLAGS = -Wall -Wextra -Werror -g

# CFILES = ft_atoi.c ft_bzero.c ft_isnum.c ft_calloc.c ft_isalpha.c ft_isascii.c \
# 		 ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
# 		 ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
# 		 ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
# 		 ft_substr.c ft_toupper.c
		 
# NAME = libft.a 

# OFILES = ${CFILES:c=o}



NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SRC = ft_isalpha.c  ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c \
ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c \
ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re