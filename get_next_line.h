/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:47:46 by aaggoujj          #+#    #+#             */
/*   Updated: 2021/11/30 15:29:01 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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
