/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:19:57 by mamarin-          #+#    #+#             */
/*   Updated: 2024/07/06 18:23:04 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_aux(int nb, int num)
{
	if ((num * num) == nb)
		return (num);
	if ((num * num) < nb)
		return (ft_aux(nb, num + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb < 1)
		return (0);
	return (ft_aux(nb, 0));
}
