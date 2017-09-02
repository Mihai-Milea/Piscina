/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nr_numere.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 10:59:42 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 11:16:22 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nr_numere(char *str)
{
	int dat_nr;
	int count;
	int index;

	dat_nr = 0;
	count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] <= '9' && '0' <= str[index] && dat_nr == 0)
		{
			dat_nr = 1;
			count++;
		}
		if (!(str[index] <= '9' && '0' <= str[index]))
		{
			dat_nr = 0;
		}
		index++;
	}
	return (count);
}
