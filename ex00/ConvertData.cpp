/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertData.cpp                                    :+:      :+:    :+:   */
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
	std::cout	<< "int: " << i << "\n"
				<< "float: " << f << ".0f\n"
				<< "double: " << d << ".0"
				<< std::endl;
}

void ScalarConverter::converterInt( const std::string& param )
{
	long int num = std::strtol(param.c_str(), NULL, 10);

	char	c = static_cast<char>(num);
	int		i = static_cast<int>(num);
	float	f = static_cast<float>(num);
	double	d = static_cast<double>(num);
	
	std::cout	<< "char: ";
	if (std::isprint(static_cast<unsigned char>(i)))
		std::cout	<< "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout	<< "int: " << i << "\n"
				<< "float: " << f << ".0f\n"
				<< "double: " << d << ".0"
				<< std::endl;
}

void ScalarConverter::converterFloat( const std::string& param )
{
	if (param == "nanf" || param == "+inff" || param == "-inff")
	{
		std::cout	<< "char: Impossible\n"
					<< "int: Impossible\n"
					<< "float: " << param << "\n"
					<< "double: " << param.substr(0, param.length() - 1)
					<< std::endl;
		return ;
	}
	
	std::string	numstring = param.substr(0, param.length() - 1);
	int num = std::strtol(numstring.c_str(), NULL, 10);

	int n = ((param.size()) - (param.find('.')));

	char	c = static_cast<char>(num);
	int		i = static_cast<int>(num);
	float	f = static_cast<float>(num);
	double	d = static_cast<double>(num);
	
	std::cout	<< "char: ";
	if (std::isprint(static_cast<unsigned char>(i)))
		std::cout	<< "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout	<< "int: " << i << "\n"
				<< "float: " << std::fixed << std::setprecision(n) << f << "f\n"
				<< "double: " << std::fixed << std::setprecision(n) << d
				<< std::endl;
}

void ScalarConverter::converterDouble( const std::string& param )
{
	if (param == "nan" || param == "+inf" || param == "-inf")
	{
		std::cout	<< "char: Impossible\n"
					<< "int: Impossible\n"
					<< "float: " << param << "f\n"
					<< "double: " << param
					<< std::endl;
		return ;
	}
	
	std::string	numstring = param.substr(0, param.length() - 1);
	long int num = std::strtol(numstring.c_str(), NULL, 10);

	int n = ((param.size()) - (param.find('.')));

	char	c = static_cast<char>(num);
	int		i = static_cast<int>(num);
	float	f = static_cast<float>(num);
	double	d = static_cast<double>(num);
	
	std::cout	<< "char: ";
	if (std::isprint(static_cast<unsigned char>(i)))
		std::cout	<< "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout	<< "int: " << i << "\n"
				<< "float: " << std::fixed << std::setprecision(n) << f << "f\n"
				<< "double: " << std::fixed << std::setprecision(n) << d
				<< std::endl;
}