/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:05:43 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form( std::string name, int gradeSign, int gardeExecute );
		Form( Form const & rhs);
		virtual ~Form();
		
		Form & operator=( Form const & rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form is not signed");
				}
		};
	
		std::string const & getName( void ) const;
		bool getSigned( void ) const;
		int getGradeSign( void ) const;
		int getGradeExecute( void ) const;

		void beSigned( Bureaucrat const & bc);
		virtual void execute( Bureaucrat const & executor ) const = 0;

	private:
		std::string const _name;
		bool _signed;
		int const _gradeSign;
		int const _gradeExecute;

};

std::ostream & operator<<( std::ostream & o, Form const & src );

#endif
