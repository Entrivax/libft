/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fclamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpilotto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 15:08:08 by lpilotto          #+#    #+#             */
/*   Updated: 2016/06/06 15:08:59 by lpilotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_fclamp(double n, double min, double max)
{
	if (n < min)
		return (min);
	if (n > max)
		return (max);
	return (n);
}
