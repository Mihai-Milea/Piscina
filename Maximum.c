/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maximum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 12:30:50 by astavre           #+#    #+#             */
/*   Updated: 2017/09/04 17:19:12 by astavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define matrice int
#define R 6
#define C 5

int min(int a, int b, int c)
{
	int rez;
	rez = a;
	if (rez > b)
		rez = b;
	if (rez > c)
		rez = c;
	return (rez);
}

void Max(matrice M[R][C])
{
	int r;
	int c;
	int max; //retine coltul dreapta jos al patratului	
	r = 0;
	c = 0;
	max = 0;
	matrice S[R][C];

// primul rand

	while (r != R)
	{
		//printf("%s", "AL");
		S[r][0] = M[r][0];
		r++;
	}
	
// prima coloana	
	while (c != C)
	{
		S[0][c] = M[0][c];
		c++;
	}


	r = 1;
	c = 1;
// restul matricei folosinf min.
	while (r != R)
	{
		while (c != C)
		{
			if (M[r][c] == 0)
			{
				S[r][c] = 0;
			}
			if (M[r][c] == 1)
			{
				S[r][c] = min(S[r][c-1], S[r-1][c], S[r-1][c-1]) + 1;
				if (max < S[r][c])
				{
					max = S[r][c];
				}
			}
			c ++;
		}
		c = 1;
		r++;
	}
/* cauta max in matrice
	r = 0;
	c = 0;
	
	printf("%c", 'A');

	
	while(r != R)
	{   
		while(c != C)
		{   
	 		if (S[r][c] == max)
			{
				int r_max;
				int c_max;
				int maxx;
				int stop;
				stop = r - (r - max);
				r_max = r;
				c_max = c;
				maxx = max;
				
				printf("%c", 'A');
				while(r_max != stop)
				{   
					while(c_max != stop)
					{   
						S[r_max][c_max] = 9;
						c_max--;
					}	 
					c = max;
					r_max--;
				}
				c = C;
				r = R;
			}
			else
			{
				c++;
	   		}
		} 
	 	c = 0;
	    r++;
	}
*/

// printeaza matricea
	r = 0;
	c = 0;
	while(r != R)
	{
		while(c != C)
		{
			printf("%i ", S[r][c]);
			c++;
		}
		c = 0;
		r++;
		printf("%s", "\n");
	}
	printf("%i", max);
}
int main()
{
	matrice M[R][C] = {{0, 0, 1, 1, 1},
		            {1, 1, 1, 1, 1},
		            {0, 0, 1, 1, 1},
		            {1, 1, 1, 1, 1},
		            {1, 1, 1, 1, 1},
		            {0, 0, 0, 0, 0}};
	Max(M);

	
}
