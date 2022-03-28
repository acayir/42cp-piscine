/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:59:49 by acayir            #+#    #+#             */
/*   Updated: 2021/12/13 16:59:51 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_digit(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
		return ;
	}
	if (n < 10)
	{
		ft_print_digit(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_print_digit(n % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;
	t_stock_str	temp;

	i = 0;
	while (((t_stock_str *)par)[i].str)
	{
		temp = ((t_stock_str *)par)[i];
		ft_putstr("\n");
		ft_putnbr(temp.size);
		ft_putstr("\n");
		ft_putstr(temp.copy);
		ft_putstr("\n");
		i++;
	}
}
