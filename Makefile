CC = gcc
CFILES = main.c  convert_reelfloat.c my_own_atoi.c \
		my_own_strjoin.c my_own_strlen.c my_own_strrev.c is_valid.c print_bits.c\
		convert_float_virgule.c is_binary_valid.c to_decimal.c convert_fixevirgule.c\
		is_fixevirgule_valide.c is_mynumber_valide.c convert_mynuber_to_float.c
				
OFILES = ${CFILES:.c=.o}
NAME = programme_AO3.a
INC = programme3.h

all : ${NAME}

${NAME} : ${OFILES}
	ar -rc ${NAME} ${OFILES}
	gcc ${NAME}
	./a.out

%.o:%.c ${INC}
	${CC} -c  $<
clean :
	rm -rf ${OFILES}

fclean : clean
	rm -rf ${NAME}

re : fclean all