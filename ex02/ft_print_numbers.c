/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:41:48 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/19 10:24:46 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
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
	ft_putchar();
	return (0);
}
