/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <manandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:21:33 by manandre          #+#    #+#             */
/*   Updated: 2025/02/07 12:56:06 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

char	ft_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return (c);
}

int main(int argc, char *argv[])
{
	int	i;
	size_t	j;
	string str;

	if (argc >= 2)
	{
		i = 0;
        while (++i < argc)
		{
			j = -1;
			str = argv[i];
			while (++j < str.length())
	            cout << ft_upper(argv[i][j]);
			cout << " ";
		}
        cout << endl;
        return (0);
	}
	cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (1);
}