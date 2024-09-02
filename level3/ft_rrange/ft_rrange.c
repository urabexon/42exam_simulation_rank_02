/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:52:24 by urabex            #+#    #+#             */
/*   Updated: 2024/09/02 21:03:29 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    int *range = (int *) malloc(len * sizeof(int));
    
    if (range == NULL)
        return (NULL);
    while (i < len)
    {
        if (end < start)
            range[i] = end++;
        else
            range[i] = end--;
        i++;
    }
    return (range);
}
