/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:25:25 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/16 18:27:36 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int num1;
	int num2;
	int diff;
	int mod;

	num1 = *a;
	num2 = *b;

	diff = num1 / num2;
	mod = num1 % num2;

	*a = diff;
	*b = mod;
}
