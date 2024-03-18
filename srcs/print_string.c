/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:24:34 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 11:36:59 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Fonction pour imprimer une chaîne de caractères sur la console */
int	print_string(char *str)
{
	int	sum;

	if (!str)
		return (write(1, "(null)", 6));
	sum = 0;
	while (*str)
		sum += print_char(*str++);
	return (sum);
}
