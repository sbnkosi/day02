/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbnkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:05:42 by sbnkosi           #+#    #+#             */
/*   Updated: 2020/06/21 14:46:36 by sbnkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
char a = '0';
char  b = '1';
char c = '2';
while(a <= '9')
{
	while(b <= '9')
	{
		if(a < b)
		{
			while(c <= '9')
			{
				if(b < c)
				{
					ft_putchar(a);
				    ft_putchar(b);
					ft_putchar(c);
					if(a != '7')
					{
					ft_putchar(',');
					ft_putchar(' ');
					}
				}
				c++;
			}
			c = '0'; 
		}
		b++;
	}
	b = '0';
	a++;
 }
}

int main()
{
	ft_print_comb();
	return (0);
}
