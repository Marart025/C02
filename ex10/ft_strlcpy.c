/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal-t <mrigal-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:55:17 by mrigal-t          #+#    #+#             */
/*   Updated: 2022/11/01 16:14:09 by mrigal-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	length = 0;
	index = 0;
	if (!(size == 0))
	{
		while (src != '\0' && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[size - 1] = '\0';
	}
	index = 0;
	while (src[index] != '\0')
	{
		index++;
		length++;
	}
	return (length);
}
