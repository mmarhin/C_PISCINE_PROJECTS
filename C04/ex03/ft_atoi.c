/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:29:27 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 10:41:01 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && str[i] == ' ')
	{
		i++;
	}
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
