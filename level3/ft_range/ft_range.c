/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:02:09 by urabex            #+#    #+#             */
/*   Updated: 2024/09/02 21:03:20 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    int *range = (int *) malloc(len * sizeof(int));

    if (range == NULL)
        return (NULL);
    while (i < len)
    {
        if (start < end)
            range[i] = start++;
        else
            range[i] = start--;
        i++;
    }

    return (range);
}