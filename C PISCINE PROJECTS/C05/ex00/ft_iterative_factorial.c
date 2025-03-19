/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:52:21 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 20:58:08 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (result);
	}
	if (nb > 0)
	{
		while (nb >= 2)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
