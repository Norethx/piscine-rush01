/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preencher_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:28:06 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:28:07 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	preencher_param(char *puzzle, int (*matriz)[6])
{
	int y;
	int x;
	int i;
	y = 0;
	i = 0;
	x = 0;

	while (puzzle[i] != '\0')
	{
		if (puzzle[i] != ' ')
		{
			if (i < 16)
			{

				if(i % 8 == 0 && i != 0)
				{
					y=5;
					x=0;
				}
				matriz[y][x+1] = (puzzle[i] -48);
				x++;
			}
			else
			{
				if (i == 16)
				{
					x=0;
					y=0;
				}
				else if(i % 8 == 0 && i != 16)
				{
					y=0;
					x=5;
				}
				matriz[y+1][x] = (puzzle[i] -48);
				y++;
			}
		}
		i++;
		}
	}
