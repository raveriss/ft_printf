/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory_addr_in_hex.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:44:12 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 14:11:35 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/* Fct 2/2 imprimer la racine de l'adresse memoire en notation hex. */
int	print_memory_addr_in_hex_root(unsigned long long ptr)
{
	int	sum;

	sum = 0;
	if (ptr >= 16)
	{
		sum += print_memory_addr_in_hex_root(ptr / 16);
		sum += print_memory_addr_in_hex_root(ptr % 16);
	}
	if (ptr < 16)
	{
		if (ptr < 10)
		{
			sum += print_char(ptr + '0');
		}
		else
		{
			sum += print_char(ptr + 87);
		}
	}
	return (sum);
}

/* Fct 1/2 imprimer le préfixe "0x" de l'adresse memoire en notation hex. */
int	print_memory_addr_in_hex(void *ptr)
{
	int					sum;
	unsigned long long	ull_ptr;

	sum = 0;
	ull_ptr = (unsigned long long) ptr;
	if (!ull_ptr)
	{
		return (print_string("(nil)"));
	}
	sum += print_string("0x");
	sum += print_memory_addr_in_hex_root(ull_ptr);
	return (sum);
}
