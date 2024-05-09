/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:05:05 by marvin            #+#    #+#             */
/*   Updated: 2024/02/12 17:05:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) //Para detectar os whitespaces e passar a frente.
		i++;
	if (str[i] == '-') //Se tiver o '-' e for nº ímpar de '-' transforma o nº em -nº.
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+') //Se tiver um '+' passa à frente.
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '48';
		i++;
	}
    // Ex: 0 = 0 x 10 = 10; 0 = 0 + '48'(0) - 48 = 0; ...  Ex: 0 = 0 x 10 = 10; 0 = 0 + '49'(1) - 48 = 1; ...  Ex: 1 = 1 x 10 = 10; 10 = 10 + '50'(2) - 48 = 12; ...  Ex: 12 = 12 x 10 = 120; 120 = 120 + 51 - 48 = 123..... 
	return (result * sign);
}