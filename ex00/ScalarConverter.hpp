/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:30:05 by hgutterr          #+#    #+#             */
/*   Updated: 2026/07/07 22:30:05 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {
	public:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter& operator=( const ScalarConverter& other );
		~ScalarConverter( void );

		static void	convert( std::string param );
};

#endif