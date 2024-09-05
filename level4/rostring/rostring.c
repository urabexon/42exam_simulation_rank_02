/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:58:40 by urabex            #+#    #+#             */
/*   Updated: 2024/09/05 17:45:52 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_word(char *start, char *end)
{
    while (start < end)
    {
        write(1, start, 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    char *str;
    char *first_word_start;
    char *first_word_end;

    if (argc > 1)
    {
        str = argv[1];
        while (*str == ' ' || *str == '\t') 
            str++;
        first_word_start = str;
        while (*str && *str != ' ' && *str != '\t')
            str++;
        first_word_end = str;
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str) {
            while (*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while (*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                } 
                else 
                {
                    write(1, str, 1);
                    str++;
                }
            }
            write(1, " ", 1);
        }
        write_word(first_word_start, first_word_end);
    }
    write(1, "\n", 1);
    return 0;
}

//ver2
#include	<unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*first;
	char	*end;
	int		i;

	i = 0;
	if (argc > 1)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		first = &str[i];
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = &str[i];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
		{
			while (str[i])
			{
				if (str[i] == ' ' || str[i] == '\t')
				{
					while (str[i] == ' ' || str[i] == '\t')
						i++;
					if (str[i])
						write(1, " ", 1);
				}
				else
				{
					write(1, &str[i], 1);
					i++;
				}
			}
			write(1, " ", 1);
		}
		write_word(first, end);
	}
	write(1, "\n", 1);
	return (0);
}