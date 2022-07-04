/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:22:54 by maperez-          #+#    #+#             */
/*   Updated: 2022/07/04 14:59:40 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

void	ft_pipex(int argc, char **argv, char **envp);
void	ft_error(int i);
void	ft_access(char *filename);
void	ft_execve(int p[2], char **argv, char **envp);
void	ft_execve2(int *p, char **argv, char **envp);
char	**ft_chrpath(char **envp);
char	*ft_gtpath(char **envp, char *cmd);

#endif