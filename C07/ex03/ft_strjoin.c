/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:13:19 by acayir            #+#    #+#             */
/*   Updated: 2021/12/15 15:13:21 by acayir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*read_head;
	char	*string;

	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc(full_length + 1) * sizeof(char);
	if (!(string))
		return (0);
	read_head = string;
	index = 0;
	while (index < size)
	{
		ft_strcpy(read_head, strs[index]);
		read_head += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(read_head, sep);
			read_head += ft_str_length(sep);
		}
		index++;
	}
	*read_head = '\0';
	return (string);
}
