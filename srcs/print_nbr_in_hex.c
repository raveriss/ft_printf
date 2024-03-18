/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_in_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:49:07 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:31 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Imprime un nombre entier donné en hexadécimal */
int	print_nbr_in_hex(unsigned int nbr, char form_set)
{
	int		sum;
	char	*base;

	sum = 0;
	base = "0123456789abcdef";
	if (form_set == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
		sum += print_nbr_in_hex((nbr / 16), form_set);
	sum += print_char(base[nbr % 16]);
	return (sum);
}
