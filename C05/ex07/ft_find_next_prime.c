/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:48:30 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 20:56:59 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb, int div)
{
	if (div > (nb / 2))
		return (1);
	if ((nb % div) == 0)
		return (0);
	return (is_prime(nb, div + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (is_prime(nb, 2));
}

int	ft_find_next_prime(int nb)
{
	int	ok;

	ok = 0;
	while (ok == 0)
	{
		if (ft_is_prime(nb) == 1)
		{
			ok = 1;
			nb--;
		}
		nb++;
	}
	return (nb);
}
