/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:32:53 by hirwatan          #+#    #+#             */
/*   Updated: 2024/10/31 19:48:45 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// bzero is all contents of array null
void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	int i;

	i = 0;
	p = (unsigned char *)s;
	if (n == 0 || !s)
		return ;
	while (n--)
	{
		p[i] = '\0';
		i++;
	}
}
