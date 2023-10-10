/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:06:06 by omfelk            #+#    #+#             */
/*   Updated: 2023/10/04 11:17:42 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define TEST argv[2][0]
#define CHOIX argv[1][0]
#define P argv[2]

int	main(int argc, char **argv)
{
	(void)argc;
	if (CHOIX == '0')
		printf("%d\n", ft_isalpha(TEST));
	else if (CHOIX == '1')
		printf("%d\n", ft_isdigit(TEST));
	else if (CHOIX == '2')
		printf("%d\n", ft_isalnum(TEST));
	else if (CHOIX == '3')
		printf("%d\n", ft_isascii(TEST));
	else if (CHOIX == '4')
		printf("%d\n", ft_isprint(TEST));
	else if (CHOIX == '5')
		printf("%zu\n", ft_strlen("Hello !"));
	else if (CHOIX == 'c')
		printf("%c\n", ft_toupper(TEST));
	else if (CHOIX == 'd')
		printf("%c\n", ft_tolower(TEST));
	else if (CHOIX == 'k')
		printf("%d\n", ft_atoi(P));
	return (0);
}
