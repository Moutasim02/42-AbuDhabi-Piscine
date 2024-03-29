/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:21:48 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/03/15 09:14:09 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	buffer = malloc(size * sizeof(int));
	i = 0;
	if (buffer == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	*range = buffer;
	return (size);
}
