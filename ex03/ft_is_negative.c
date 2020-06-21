/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:02:34 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/21 14:02:09 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char positive = 'P';
	char negetive = 'N';
	if(n < 0)
	{
		ft_putchar(negetive);
	    ft_putchar("\n");
	}
	else
	{
		ft_putchar(positive);
		ft_putchar("\n");
	}
}
