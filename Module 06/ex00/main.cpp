/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:57:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 10:03:36 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Converter.hpp"

bool isPseudoLit(char *argv)
{
	if (strcmp(argv, "nan") && strcmp(argv, "nanf") && strcmp(argv, "-inff")
			&& strcmp(argv, "+inff") && strcmp(argv, "-inf") && strcmp(argv, "+inf"))
		return false;
	else
		return true;
}

bool isPointLit(char *argv)
{
	int i;

	i = 0;
	while (argv[i] && isspace(argv[i]))
		i++;
	if (argv[i] == '-' || argv[i] == '+' )
		i++;
	while (argv[i] && argv[i] != '.')
	{
		if (!isdigit(argv[i]))
			return false;
		i++;
	}
	if (argv[i] && argv[i] == '.')
		i++;
	while(argv[i] && argv[i] != 'f')
	{
		if (!isdigit(argv[i]))
			return false;
		i++;
	}
	if ((argv[i] && argv[i] == 'f' && !argv[i + 1]) || !argv[i])
		return true;
	else
		return false;
}

bool isIntLit(char *argv)
{
	int i;

	i = 0;
	while (argv[i] && isspace(argv[i]))
		i++;
	if (argv[i] == '-' || argv[i] == '+' )
		i++;
	while(argv[i])
	{
		if (!isdigit(argv[i]))
			return false;
		i++;
	}
	return true;
}

bool isLiteralValue(char *argv)
{
	int i;

	i = 0;
	if (strlen(argv) == 1 && !isdigit(argv[0]) && isprint(argv[0]))
		return true;
	if (!isIntLit(argv) && !isPointLit(argv) && !isPseudoLit(argv))
		return false;
	else
		return true;
}

int main(int argc, char** argv)
{
	if (argc != 2 )
	{
		std::cerr << "Error: too many arguments\n";
		return (1);
	}
	if (strlen(argv[1]) == 0 || (strlen(argv[1]) == 1 && !isprint(argv[1][0])))
	{
		std::cerr << "Error: invalid arguments\n";
		return (1);
	}
	if (!isLiteralValue(argv[1]))
		Converter conv(argv[1], true);
	else
		Converter conv(argv[1], false);
	return (0);
}
