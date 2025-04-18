/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regras_row.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:28:26 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:28:27 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	regras_row(int (*board)[6], int rowl, int rowr, int y)
{
	int idx = 1;
	int aux_ida, aux_alt, aux_volta;
	aux_ida = 0;
	aux_volta = 0;
	while (idx <=  4)
	{
		if (idx == 1 && !(board[y][idx] == 0))
		{
			aux_ida = 1;
			aux_alt = board[y][idx]; 
			idx++;
		}
		else if (board[y][idx] > board[y][idx-1] && board[y][idx] > aux_alt)
		{
			aux_ida++;
			aux_alt = board[y][idx];
			idx++;
		}
		else
		{
			idx++;
		}
	}
	y = 4;
	while (idx >= 1)
	{
		if (idx == 4 && !(board[y][idx] == 0))
		{
			aux_volta = 1;
			aux_alt = board[y][idx]; 
			idx--;
		}
		else if (board[y][idx] > board[y][idx+1] && board[y][idx] > aux_alt)
		{
			aux_volta++;
			aux_alt = board[y][idx];
			idx--;
		}
		else
		{
			idx--;
		}
	}
	if (aux_ida <= rowl && aux_volta <= rowr)
	{
		return (1);
	}
	return(0);
}