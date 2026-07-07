/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:29:58 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/07 22:29:58 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	// std::cout << "ScalarConverter Default constructor called." << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter& other )
{
	(void)other;	
	// std::cout << "ScalarConverter Copy constructor called." << std::endl;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& other )
{
	// std::cout << "ScalarConverter Copy assignment called." << std::endl;
	if (this != &other) {}
	return (*this);
}

ScalarConverter::~ScalarConverter( void )
{
	// std::cout << "ScalarConverter Destructor called." << std::endl;
}

static void	convert( std::string param )
{
	
}