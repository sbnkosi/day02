/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:02:34 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/21 10:47:23 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	char positive = 'P';
	char negetive = 'N';
	if(n < 0)
	{
		write(1, &negetive, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &positive, 1);
		write(1, "\n", 1);
	}
}
