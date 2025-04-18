/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preencher_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:27:58 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:27:59 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int regras(int (*board)[6],int colup, int coldown, int rowl, int rowr, int idx, int y, int num);

int	preencher_board(int (*board)[6],int y,int x)
{
	if (y == 5)
		return (1);
	int num = 1;
	while (num <= 4)
	{
		board[y][x] = num;
		if(regras(board, board[0][x], board[5][x], board[y][0], board[y][5], x, y , num) == 1)
		{
			if (x == 4)
			{
				if(preencher_board(board,y+1,1) == 1)
					return (1);
			}
			else
			{
				if(preencher_board(board,y,x+1) == 1)
					return (1);
			}
		} 
		num++;
	}
	board[y][x] = 0;
	return (0);
}
