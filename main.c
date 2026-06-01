/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:18:44 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 15:06:13 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	int		res1;
	int		res2;

	ptr = 0;
	res1 = printf("DEBUG PTR: %&\n");
	res2 = ft_printf("DEBUG PTR: %&\n");
	printf("%d %d\n", res1, res2);
}
