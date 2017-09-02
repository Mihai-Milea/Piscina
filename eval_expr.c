/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 09:32:05 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 13:46:18 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nr_numere.c"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int eval_expr(char *str)
{
	
	int *a;
	int *b;

	a = malloc(sizeof(int) * nr_numere(str) + 1);
	b = malloc(sizeof(int) * nr_operatii(str) + 1);		
	
	return (0);
}

int main() 
{
	eval_expr("1 + 1 - 2");
	return (0); 
}
