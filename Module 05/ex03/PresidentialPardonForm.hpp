/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 16:42:22 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESPAR_HPP
#define PRESPAR_HPP

# include "./Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & rhs);
		virtual ~PresidentialPardonForm();
		
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
		
		void execute( Bureaucrat const & executor ) const;

		std::string getTarget( void ) const;

	private:
		std::string _target;
};

#endif
