/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_unsign.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:43:18 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/10 16:43:57 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Fonction récursive pour imprimer un entier non signé sur la console */
int	print_decimal_unsign(unsigned int n)
{
	int	sum;

	sum = 0;
	if (n > 9)
	{
		sum += print_decimal_unsign(n / 10);
		sum += print_char(n % 10 + '0');
	}
	else
		sum += print_char(n + '0');
	return (sum);
}
