/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:09:15 by maperez-          #+#    #+#             */
/*   Updated: 2022/07/04 12:46:54 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(int i)
{
	if (i == 1)
		printf("%s\n", "Error: in pipe.\n");
	else if (i == 2)
		printf("%s\n", "Error: fork failed.\n");
	else if (i == 3)
		printf("%s\n", "Error: command not found.\n");
	else if (i == 4)
		printf("%s\n", "Error: no such file or directory.\n");
	else if (i == 5)
		printf("%s\n", "Error: permission denied.\n");
	else if (i == 6)
		printf("%s\n", "Error: path not found.\n");
	else
		printf("%s\n", "Error: too few arguments to function call.\n");
	exit(EXIT_FAILURE);
}

void	ft_access(char *filename)
{
	if (access(filename, F_OK) == -1)
		ft_error(4);
	if (access(filename, R_OK) == -1)
		ft_error(5);
}
