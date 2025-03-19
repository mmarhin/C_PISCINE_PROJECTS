/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:21:20 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/23 18:19:53 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write (1, &num1, 1);
				write (1, &num2, 1);
				write (1, &num3, 1);
				write (1, ", ", 1);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
