/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:38:50 by acayir            #+#    #+#             */
/*   Updated: 2021/12/07 20:41:05 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putout(char *out)
{
	int		i;

	i = 0;
	while (out[i])
		write(1, &out[i++], 1);
	return ;
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	j = 1;
	i = ac;
	while (ac > j)
	{
		ft_putout(av[--i]);
		ft_putout("\n");
		j++;
	}
	return (0);
}
