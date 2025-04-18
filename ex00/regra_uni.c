/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regra_uni.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:28:20 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:28:21 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int regra_uni(int (*board)[6], int num, int idx, int y)
{
	int ynew = 1;
	int idxnew = 1;

	while ( ynew <=4 )
	{
		if(ynew == y)
		{
			ynew++;
		}
		else 
		{
			if(board[ynew][idx] == num)
			{
				return (0);
			}
			ynew++;
		}
	}
	while ( idxnew <=4 )
	{
		if(idxnew == idx)
		{
			idxnew++;
		}
		else 
		{
			if(board[y][idxnew] == num)
			{
				return (0);
			}
			idxnew++;
		}
	}
	return (1);
}
