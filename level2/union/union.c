/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:56:03 by urabex            #+#    #+#             */
/*   Updated: 2024/09/02 23:56:54 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        unsigned char seen[256] = {0};
        int i = 0;
        int j = 0;

        while (argv[1][i])
        {
            if (!seen[(unsigned char)argv[1][i]])
            {
                write(1, &argv[1][i], 1);
                seen[(unsigned char)argv[1][i]] = 1;
            }
            i++;
        }
        while (argv[2][j])
        {
            if (!seen[(unsigned char)argv[2][j]])
            {
                write(1, &argv[2][j], 1);
                seen[(unsigned char)argv[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
