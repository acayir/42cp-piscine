/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:19:09 by acayir            #+#    #+#             */
/*   Updated: 2021/12/06 19:26:48 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
