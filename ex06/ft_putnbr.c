/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 08:22:31 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/20 09:26:33 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(int nb)
{
	char change[] = {'0' + nb, '\0'};
	int i = 0;
	while(i < 2)
	{
	write(1, &change[i], 1);
	i++;
	}
}

int 	main()
{
	ft_putchar(42);

	return (0);
}
