/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:06:52 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/05 22:07:29 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int n);

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchart(i);
		i -= 1;
	}
}
