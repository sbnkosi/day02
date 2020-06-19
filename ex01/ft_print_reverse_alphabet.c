/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:18:33 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/19 08:57:27 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char z = 'z';
	while(z >= 'a')
	{
		write(1, &z, 1);
	   z--;	
	}
	write(1, "\n", 1);
}

int		main()
{
	ft_print_reverse_alphabet();
	return (0);
}
