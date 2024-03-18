/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_sign.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:42:18 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:56 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Fonction récursive pour imprimer un entier signé sur la console */
int	print_decimal_sign(int nb)
{
	int			sum;
	long int	n;

	n = (long int) nb;
	sum = 0;
	if (n < 0)
	{
		n = -n;
		sum += print_char('-');
	}
	if (n > 9)
	{
		sum += print_decimal_sign(n / 10);
		sum += print_char(n % 10 + '0');
	}
	else
		sum += print_char(n + '0');
	return (sum);
}
