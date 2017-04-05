/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcherik <rcherik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 15:55:19 by rcherik           #+#    #+#             */
/*   Updated: 2015/03/24 15:55:20 by rcherik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' ||
			c == ' ')
		return (1);
	else
		return (0);
}