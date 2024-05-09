/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:57:19 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 20:57:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char number;

    number = 0;
    while (number <= 9)
    {
        write(1, &number, 1);
        number++;
    }
}

/*
int main(void)
{
    ft_print_numbers();
}
*/