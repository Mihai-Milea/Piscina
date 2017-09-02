/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grad_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 12:41:05 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 13:51:24 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_grad_1.c"
void		grad_1(char *str)
{

	int index;
	index = 0;

	while(str[index])
	{
		if (str[index] == '+' || str[index] == '-')
		{
			printf("%i", do_grad_1(index, str));
		}
		index++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	grad_1(argv[1]);
	return (0);
}
