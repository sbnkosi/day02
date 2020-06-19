/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:41:48 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/19 09:14:57 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char numbers= '0';
	while(numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
	write(1, "\n", 1);
}

int		main()
{
	ft_print_numbers();
	return (0);
}
