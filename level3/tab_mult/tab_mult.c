/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:24:08 by urabex            #+#    #+#             */
/*   Updated: 2024/09/05 17:43:17 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ver1
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign = 1;
    int	result = 0;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
    while (*str == '-' || *str == '+')
        str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

//ver2

#include <unistd.h>

int ft_atoi(char *s)
{
    int res = 0, i = 0;
    while (s[i] && s[i] >= 48 && s[i] <= 57)
    {
        res *= 10;
        res += s[i] - 48;
        i++;
    }
    return (res);
}

void ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
        write(1, &s[i++], 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 1, n = ft_atoi(argv[1]);
    while (i < 10)
    {
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(n);
        ft_putstr(" = ");
        ft_putnbr(i * n);
        write(1, "\n", 1);
        i++;
    }
}
