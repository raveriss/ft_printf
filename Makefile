# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 13:50:10 by raveriss          #+#    #+#              #
#    Updated: 2023/01/11 13:53:02 by raveriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Déclare la liste de fichiers sources (SRCS)
#utilisés pour construire l'application, séparés par
#des "" pour continuer sur la ligne suivante
SRCS = ft_printf.c \
		srcs/syntax_parser.c \
		srcs/print_char.c \
		srcs/print_string.c \
		srcs/print_decimal_sign.c \
		srcs/print_decimal_unsign.c \
		srcs/print_nbr_in_hex.c \
		srcs/print_memory_addr_in_hex.c \

#Déclare le nom du fichier binaire final (NAME)
NAME = libftprintf.a

#Déclare le compilateur à utiliser (CC)
CC = gcc

#Déclare la liste de fichiers d'en-tête (HEADERS)
#utilisés pour construire l'application, séparés par
#des espaces
HEADERS = includes/ft_printf.h includes/syntax_parser.h

#Ajoute le répertoire "includes" aux chemins de
#recherche pour les fichiers d'en-tête
HEADERS_PATH = -I includes

#Déclare les options de compilation (CFLAGS) à passer
#au compilateur
CFLAGS = -Wall -Wextra -Werror

#Déclare la liste de fichiers objets (OBJS) en
#utilisant une substitution de variable pour remplacer
#les extensions ".c" par ".o" dans la liste de fichiers
#sources
OBJS = $(SRCS:.c=.o)

#Déclare la commande pour supprimer des fichiers (RM)
RM = /bin/rm -f

#Déclare la commande pour créer un archive (COMP)
COMP = ar rc

#Définit une règle pour construire le fichier binaire
#final (NAME) en utilisant les fichiers objets (OBJS)
#Exécute la commande de création d'archive (COMP) en
#utilisant les arguments indiquant le nom de l'archive
#(NAME) et les fichiers objets (OBJS)
$(NAME):	$(OBJS)
		$(COMP) $(NAME) $(OBJS)

#Définit une règle générale pour construire les
#fichiers objets (OBJS) à partir des fichiers
#sources (SRCS) en utilisant un patron (wildcard) "%"
%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< $(HEADERS_PATH) -o $@

#Définit une règle pour construire tous les fichiers
#(all) en exécutant la règle définie pour construire
#le fichier binaire final (NAME)
all:	$(NAME)

#Définit une règle pour supprimer les fichiers objets
#(clean) en exécutant la commande de suppression de
#fichiers (RM) sur la liste de fichiers objets (OBJS)
clean:
	$(RM) $(OBJS)

#Définit une règle pour supprimer tous les fichiers
#(fclean) en exécutant d'abord la règle de suppression
#de fichiers objets (clean), puis en exécutant la
#commande de suppression de fichiers (RM) sur le
#fichier binaire final (NAME)
fclean:	clean
	 $(RM) $(NAME)

#Définit une règle pour reconstruire tous les fichiers
#(re) en exécutant d'abord la règle de suppression de
#tous les fichiers (fclean), puis en exécutant la règle
#de construction de tous les fichiers (all)
re:	fclean all

#Indique à make que les règles définies ci-dessus ne
#sont pas des fichiers, mais des commandes à exécuter
.PHONY: all clean fclean re
