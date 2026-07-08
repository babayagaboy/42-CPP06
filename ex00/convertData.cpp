/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertData.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 01:24:30 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/08 01:24:30 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::converterChar( const std::string& param )
{
	char	c = param[0];
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	std::cout	<< "char: ";
	if (std::isprint(static_cast<unsigned char>(i)))
		std::cout	<< "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout	<< "int: " 
				<< i << "\n"
				<< "float: "
				<< f << ".0f\n"
				<< "double: " 
				<< d << ".0"
				<< std::endl;
}

void ScalarConverter::converterInt( const std::string& param )
{
	std::cout << "is int";
}

void ScalarConverter::converterFloat( const std::string& param )
{
	std::cout << "is float";
}

void ScalarConverter::converterDouble( const std::string& param )
{
	std::cout << "is double";
}