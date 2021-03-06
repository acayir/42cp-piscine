/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:54:44 by acayir            #+#    #+#             */
/*   Updated: 2021/12/12 16:06:55 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i * i <= nb && i < 46341)
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
