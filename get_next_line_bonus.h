/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:37:25 by aaggoujj          #+#    #+#             */
/*   Updated: 2021/12/01 11:59:45 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdlib.h>
# include<unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 
# endif

char	*ft_strchr(char *s, int c);

size_t	ft_strlen(char *str);

char	*get_all_line(int fd, char *str);

char	*get_line(char *str);

char	*get_next_line(int fd);

char	*ft_strjoin(char *str, char *buff);

char	*get_rest(char *str);

#endif
