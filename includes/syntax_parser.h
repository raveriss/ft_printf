/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_parser.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:27:40 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 10:49:01 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYNTAX_PARSER_H
# define SYNTAX_PARSER_H

/* Lib for size_t */
# include <stddef.h>

/* Lib for va_start(), va_arg() et va_end() */
# include <stdarg.h>

/* Lib for write() */
# include <unistd.h>

/* Prototype fonction */
int		syntax_parser(char form_set, va_list l_form_var);
int		print_char(char c);
int		print_string(char *str);
int		print_decimal_sign(int nb);
int		print_decimal_unsign(unsigned int n);
int		print_memory_addr_in_hex(void *ptr);
int		print_nbr_in_hex(unsigned int nbr, char form_set);

#endif
