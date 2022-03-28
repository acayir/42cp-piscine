/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:29:06 by acayir            #+#    #+#             */
/*   Updated: 2021/11/28 20:30:53 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
