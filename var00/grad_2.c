/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grad_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 12:41:05 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 14:09:36 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_grad_2.c"
void		grad_2(char *str)
{

	int index;
	index = 0;

	while(str[index])
	{
		if (str[index] == '*' || str[index] == '%' || str[index] == '/')
		{
			printf("%i", do_grad_2(index, str));
		}
		index++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	grad_2(argv[1]);
	return (0);
}
