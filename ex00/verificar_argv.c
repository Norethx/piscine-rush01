/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificar_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcamole <edcamole@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:28:30 by edcamole          #+#    #+#             */
/*   Updated: 2025/03/23 22:29:23 by edcamole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *s);
void	ft_putchar(char c);

int	verificar_argv(char *puzzle)
{
	int i;

	i=0;
	while (puzzle[i] != '\0')
	{
		if ((puzzle[i] < '1' || puzzle[i] > '4') && puzzle[i] != ' ')
		{
			ft_putstr("error");
			ft_putchar('\n');
			return(1);
		}
		if ((i % 2 == 1) && (puzzle[i] != ' '))
		{
			ft_putstr("error");
			ft_putchar('\n');
			return(1);
		}
		i++;
	}
	if (i > 32)
	{
		ft_putstr("error");
		ft_putchar('\n');
		return(1);
	}
	return (0);
}
