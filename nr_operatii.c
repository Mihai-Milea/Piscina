/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nr_operatii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 11:17:24 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 11:31:10 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nr_operatii(char *str)
{
	int dat_op;
	int count;
	int index;

	dat_op = 0;
	count = 0;
	index = 0;
	while (str[index])
	{
		if ((str[index] == '+' || str[index] == '-' || str[index] == '/'
					|| str[index] == '*' || str[index] == '%') && dat_op == 0)
		{
			dat_op = 1;
			count++;
		}
		if (!(str[index] == '+' || str[index] == '-' || str[index] == '/'
					|| str[index] == '*' || str[index] == '%'))
		{
			dat_op = 0;
		}
		index++;
	}
	return (count);
}
