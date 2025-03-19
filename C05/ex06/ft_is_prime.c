/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:23:29 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 20:47:27 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
int	main(void)
{
	printf("%d", ft_is_prime(5));
}
