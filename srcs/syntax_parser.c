/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:36:08 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 10:49:14 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Fonction pour analyser et traiter un form_set de chaîne de caractères */
int	syntax_parser(char form_set, va_list l_form_var)
{
	int	sum;

	sum = 0;
	if (form_set == '%')
		sum += print_char('%');
	else if (form_set == 'c')
		sum += print_char(va_arg(l_form_var, int));
	else if (form_set == 's')
		sum += print_string(va_arg(l_form_var, char *));
	else if (form_set == 'p')
		sum += print_memory_addr_in_hex(va_arg(l_form_var, void *));
	else if (form_set == 'x' || form_set == 'X')
		sum += print_nbr_in_hex(va_arg(l_form_var, unsigned int), form_set);
	else if (form_set == 'd' || form_set == 'i')
		sum += print_decimal_sign(va_arg(l_form_var, int));
	else if (form_set == 'u')
		sum += print_decimal_unsign(va_arg(l_form_var, unsigned int));
	return (sum);
}
