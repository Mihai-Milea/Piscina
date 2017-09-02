/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_vector_nr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 12:01:37 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 12:44:46 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "nr_numere.c"
#include <stdlib.h>
int		write_vector_nr(char *str, int *vector)
{
	int index;
	int index2;
	int i;
	int baza;
	int subst;
	index = 0;
	index2 = 0;
	i = 0;
	baza = 1;
	subst = 0;
//	vector = malloc(sizeof(int) * nr_numere(str));

	while(str[index] != '\0')
	{
		vector[index2] = 0;
		while(str[index] <= '9' && '0' <= str[index])
		{
			i++;
			index++;
		}
		subst = index;
		while(i != 0)
		{
			vector[index2] = vector[index2] + baza * (str[subst] - '9');
			baza = baza * 10;
			i--;
			subst--;
		}
	baza = 1;
	index++;
	index2++;
	}

	return (*vector);
}

int		main(int argc, char **argv)
{
	(void)argc;
	int *vector;
	// vector = write_vector_nr(argv[1], vector);
	int index;
	index = 0;
	vector = malloc(sizeof(int) * nr_numere(argv[1]));

//	while (vector[index])
//	{
	printf("%i", vector[index]);
//		index++;	
//	}
}
