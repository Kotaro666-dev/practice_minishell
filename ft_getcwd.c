/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcwd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:44:10 by kkamashi          #+#    #+#             */
/*   Updated: 2021/01/20 11:49:49 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define PATH_SIZE 1024

// char *getcwd(char *buf, size_t size);

int main(void)
{
	char pathname[PATH_SIZE];

	getcwd(pathname, PATH_SIZE);
	printf("%s\n", pathname);
	return (0);
}
