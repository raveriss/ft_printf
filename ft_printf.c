/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:19:57 by raveriss          #+#    #+#             */
/*   Updated: 2023/01/11 10:51:40 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

/* Afficher sur la sortie standard (stdout) flux 1 */
int	ft_printf(const char *form_set, ...)
{
	va_list	l_form_var;
	int		i;
	int		sum;

	sum = 0;
	i = 0;
	va_start(l_form_var, form_set);
	while (form_set[i])
	{
		if (form_set[i] == '%')
			sum += syntax_parser(form_set[++i], l_form_var);
		else
			sum += print_char(form_set[i]);
		i++;
	}
	va_end(l_form_var);
	return (sum);
}
