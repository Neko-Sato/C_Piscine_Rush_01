/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:51:23 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/17 22:18:28 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(void *list, unsigned long size)
{
	int i;

	i = 0;
	while (*(char *)list)
	{
		list += size;
		i++;
	}
	return (i);
}

#include <stdio.h>
int main(){
	int a[]= {0,0,0,0,0};
	printf("%d\n", ft_len(a, sizeof(int)));
}