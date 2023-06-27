/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbogdano <bbogdano@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:44:46 by bbogdano          #+#    #+#             */
/*   Updated: 2023/06/26 15:04:22 by bbogdano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concatenates, returns new string
//doesnt modify originals
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*new_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, len_s1 + 1);
	ft_strlcpy(new_str + len_s1, s2, len_s2 + 1);
	return (new_str);
}
