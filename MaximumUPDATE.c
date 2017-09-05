/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maximum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 12:30:50 by astavre           #+#    #+#             */
/*   Updated: 2017/09/05 10:43:48 by astavre          ###   ########.fr       */
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
	int r_max;
	int c_max;

	r_max = 0;
	c_max = 0;
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
				
				//printf("%c", 'A');
				
				S[r][c] = min(S[r][c-1], S[r-1][c], S[r-1][c-1]) + 1;
				if (max < S[r][c])
				{
					max = S[r][c];
                    r_max = r;
                    c_max = c;
				}
			}
			c ++;
		}
		c = 1;
		r++;
	}
//cauta max in matrice
	r = 0;
	c = 0;
    int subst_c_max;
	int stop_c;
	int stop_r;
	subst_c_max = c_max;
	stop_r = r_max - max;
	stop_c = c_max - max;
	

    while(r_max != stop_r)
    {
        while(c_max != stop_c)
        {
            S[r_max][c_max] = 9;
            c_max--;
        }
        c_max = subst_c_max;
        r_max--;
    }

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
}
int main()
{
	matrice M[R][C] = {{1, 1, 1, 1, 0},
		            {1, 1, 1, 1, 1},
		            {1, 1, 1, 1, 0},
		            {0, 1, 0, 0, 0},
		            {1, 1, 0, 1, 0},
		            {1, 1, 0, 0, 0}};
	Max(M);
    return 0;
}
