/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:18:24 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/03 23:18:35 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_state read_number_handler(unsigned char c, int *res)
{
	if (is_digit(c))
		*res = *res * 10 + c - '0';
	else if (c == ' ')
		return (READ_SPACES1);
	else
		return (ERROR);
	return (READ_NUMBER);
}

t_state read_spaces1_handler(unsigned char c)
{
	if (c == ':')
		return (READ_SPACES2);
	else if (c == ' ')
		return (READ_SPACES1);
	return (ERROR);
}

t_state read_spaces2_handler(unsigned char c)
{
	if (c == ' ')
		return (READ_SPACES2);
	else if(!is_printable(c))
		return (READ_CHARS);
	return (ERROR);
}

t_state read_chars_handler(unsigned char c, int *res)
{
	if(is_printable(c))
		return (READ_CHARS);
	else if (c == '\0')
		return (END);
	return (ERROR);
}

t_state multiplexer(unsigned char c, int *res, t_state state, t_pair** dict)
{
	if(state == READ_NUMBER)
		return (read_number_handler(c, res));
	else if(state == READ_SPACES1)
		return (read_spaces1_handler(c, res));
	else if(state == READ_SPACES2)
		return (read_spaces2_handler(c, res));
	else if(state == READ_CHARS)
		return (read_chars_handler(c, res, dict));
	return (ERROR);
}