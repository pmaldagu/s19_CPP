/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:05:32 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/10 13:16:19 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include "./ShrubberyCreationForm.hpp"
# include "./RobotomyRequestForm.hpp"
# include "./PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const & rhs);
		virtual ~Intern();
		
		Intern & operator=( Intern const & rhs );

		Form *makeShrubbery( std::string target );
		Form *makeRobotomy( std::string target );
		Form *makePresidential( std::string target );
		Form *makeForm(std::string form, std::string target);

};


#endif
