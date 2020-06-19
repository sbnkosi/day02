/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:08:29 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/19 17:50:57 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '1';

	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
		   	if(c >=  a)
				{
					while(d <= '9')
					{
						if(d > b)
						{
							write(1, &a, 1);
							write(1, &b, 1);
							write(1, " ", 1);
							write(1, &c, 1);
							write(1, &d, 1);
							write(1, ",", 1);
							write(1, " ", 1);
						}
						d++;
					}
					d = '0';
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int 	main()
{
	ft_putchar();
	return (0);
}
