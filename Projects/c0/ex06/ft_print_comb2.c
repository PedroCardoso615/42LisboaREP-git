/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:15:33 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 21:15:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    print_iss(void)
{
    ft_putchar(' ');
    ft_putchar(',');
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a < 100)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            if ( a/ 10 != 9 || a % 10 != 8)
            {
                print_iss();
            }
            b++;
        }
        a++;
    }
}