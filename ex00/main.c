/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:27:18 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:27:40 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	preencher_board(int (*board)[6],int y,int x);
int	verificar_argv(char *puzzle);
void	preencher_param(char *puzzle, int (*matriz)[6]);
int	regra_uni(int (*board)[6], int num, int idx, int y);
int	regras_col(int (*board)[6],int colup, int coldown, int idx);
int	regras_row(int (*board)[6], int rowl, int rowr, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i=0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int regras(int (*board)[6],int colup, int coldown, int rowl, int rowr, int idx, int y, int num)
{
	if (regra_uni(board,num,idx,y) == 1 && regras_col(board, colup, coldown, idx) == 1 && regras_row(board, rowl, rowr, y) == 1)
	{
		return (1);
	}
	return (0);
}



int	main(int argc, char **argv)
{
	int board[6][6];
	int exec;
	int y = 1;
	int x = 1;

	if(argc > 2)
	{
		ft_putstr("error");
		ft_putchar('\n');
		return(0);
	}

	exec = verificar_argv(argv[1]);
	

	if (exec == 1)
		return(0);

	preencher_param(argv[1], board);

	while (y < 5)
	{
		while (x < 5)
		{
			board[y][x] = 0;
			x++;
		}
		y++;
		x=1;
	}

	 if (preencher_board(board,1,1)== 0)
	{
		ft_putstr("error");
		ft_putchar('\n');
		return(0);
	}
	 else
	 {
		x=1;
		y=1;
		while (y < 5)
		{
			while (x < 5)
			{
				ft_putchar(board[y][x] + '0');
				if(x < 4)
				{
					ft_putchar(' ');
				}
				x++;
			}
			ft_putchar('\n');
			y++;
			x=1;
		}
	}
}
