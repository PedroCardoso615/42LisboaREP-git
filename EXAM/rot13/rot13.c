/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:36:59 by marvin            #+#    #+#             */
/*   Updated: 2024/02/12 20:36:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rot13(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'm' || str[i] >= 'A' && str[i] <= 'M')
            str[i] -= 13;
        else if (str[i] >= 'n' && str[i] <= 'z' || str[i] >= 'N' && str[i] <= 'Z')
            str[i] -= 13;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        rot13(argv[1]);
        write(1, "\n", 1);
    }
}