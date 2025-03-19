/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:38:35 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/25 13:59:49 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	len;
	int	i;
	int	aux;
	int	ok;

	len = 0;
	ok = 0;
	while (ok == 0)
	{
		ok = 1;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = aux;
				ok = 0;
			}
			i++;
		}
	}
}
