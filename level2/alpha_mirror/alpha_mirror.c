/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:25:41 by urabex            #+#    #+#             */
/*   Updated: 2024/09/05 17:36:34 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ver1
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = ('a' + 'z') - argv[1][i];
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = ('A' + 'Z') - argv[1][i];
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

//ver2
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] = 90 - argv[1][i] + 65;
            else if (argv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] = 122 - argv[1][i] + 97;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}


//ver3
#include	<unistd.h>

void	alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}