/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:34:37 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUCREA_HPP
#define SHRUCREA_HPP

# include "./Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & rhs);
		virtual ~ShrubberyCreationForm();
		
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		
		void execute( Bureaucrat const & executor ) const;

		std::string getTarget( void ) const;

	private:
		std::string _target;
};

#endif
