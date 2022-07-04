/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:47:44 by maperez-          #+#    #+#             */
/*   Updated: 2022/07/04 14:59:29 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**ft_chrpath(char **envp)
{
	char	**path;
	int		i;

	i = 0;
	while (envp[i] && ft_memcmp(envp[i], "PATH", 4))
		i++;
	if (!envp[i])
		error(6);
	envp[i] += 5;
	path = ft_split(envp[i], ':');
	return (path);
}

char	*ft_gtpath(char **envp, char *cmd)
{
	int		i;
	char	**path;
	char	*s;

	path = ft_chrpath(envp);
	i = 0;
	if (cmd[0] != '/')
	{
		while (path[i])
		{
			s = ft_strjoin(path[i], "/");
			s = ft_strjoin(s, cmd);
			if (access(s, F_OK) == 0)
				return (s);
		}
		free(s);
	}
	if (access(cmd, F_OK) == 0)
		return (cmd);
	if (cmd[0] == '/')
		error(4);
	error(3);
	return (0);
}
