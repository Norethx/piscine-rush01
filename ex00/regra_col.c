/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regra_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:28:12 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:35:16 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	regras_col(int (*board)[6], int colup, int coldown, int idx)
{
	int	y;
	int	aux_ida;
	int	aux_alt;
	int	aux_volta;

	y = 1;
	aux_ida = 0;
	aux_volta = 0;
	while (y <= 4)
	{
		if (y == 1 && board[y][idx] != 0)
		{
			aux_ida = 1;
			aux_alt = board[y][idx];
			y++;
		}
		else if (board[y][idx] > board[y - 1][idx] && board[y][idx] > aux_alt)
		{
			aux_ida++;
			aux_alt = board[y][idx];
			y++;
		}
		else
		{
			y++;
		}
	}
	y = 4;
	while (y >= 1)
	{
		if (y == 4 && board[y][idx] != 0)
		{
			aux_volta = 1;
			aux_alt = board[y][idx];
			y--;
		}
		else if (board[y][idx] > board[y + 1][idx] && board[y][idx] > aux_alt)
		{
			aux_volta++;
			aux_alt = board[y][idx];
			y--;
		}
		else
		{
			y--;
		}
	}
	if (aux_ida <= colup && aux_volta <= coldown)
	{
		return (1);
	}
	return (0);
}
