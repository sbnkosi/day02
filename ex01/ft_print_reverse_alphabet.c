/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:18:33 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/21 13:51:58 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char a)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char z = 'z';
	while(z >= 'a')
	{
		ft_putchar(z);
	   z--;	
	}
	ft_putchar(z);
}
