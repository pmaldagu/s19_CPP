/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:05:32 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 12:22:46 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & rhs);
		virtual ~Bureaucrat();
		
		Bureaucrat & operator=( Bureaucrat const & rhs );

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
		
		std::string const & getName( void ) const;
		int getGrade( void ) const;

		void increment( void );
		void decrement( void );

	private:
		std::string const _name;
		int _grade;

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src );

#endif
