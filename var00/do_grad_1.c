/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_grad_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 12:45:23 by astavre           #+#    #+#             */
/*   Updated: 2017/09/02 13:53:45 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		do_grad_1(int poz, char *str)
{
	
	int a;
	int b;
	int baza;
	int subst_poz;
	int count;
	int c;

	subst_poz = poz - 2;
	baza = 1;
	a = 0;
	b = 0;
	c = 0;
	
	while (str[subst_poz] <= '9' && '0' <= str[subst_poz])
	{
		a = a + (baza * (str[subst_poz] - '0'));
		baza = baza * 10;	
		subst_poz--;
	}
	baza = 1;
	subst_poz = poz + 2;

	while (str[subst_poz] <= '9' && '0' <= str[subst_poz])
	{
		subst_poz++;
	}
	
	subst_poz--;
	
	while (str[subst_poz] <= '9' && '0' <= str[subst_poz])
	{
		b = b + (baza * (str[subst_poz] - '0'));
		baza = baza * 10;
		subst_poz--;
	}

	printf("%i\n", a);
	printf("%i", b);

	if (str[poz] == '-')
	{
		c = a - b;
		return (c);
	}

	if (str[poz] == '+')
	{
		c = a + b;
		return (c);
	}
	return (0);
}
