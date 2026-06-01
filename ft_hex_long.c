/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:42:46 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 09:44:19 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hex_long(unsigned int n, char *base)
{
	char			*ptr;
	unsigned long	t;
	int				len;

	t = n;
	len = 1;
	while (t >= 16)
	{
		t /= 16;
		len++;
	}
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len > 0)
	{
		ptr[len - 1] = base[n % 16];
		n /= 16;
		len--;
	}
	return (ptr);
}
