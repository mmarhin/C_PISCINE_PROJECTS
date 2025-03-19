/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:22:17 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/25 12:37:48 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	len;
	int	aux;

	len = 0;
	while (len < (size / 2))
	{
		aux = tab[len];
		tab[len] = tab[size - len -1];
		tab[size - len -1] = aux;
		len++;
	}
}
