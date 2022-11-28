/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 17:12:52 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBORE_HPP
#define ROBORE_HPP

# include <time.h>
# include "./Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & rhs);
		virtual ~RobotomyRequestForm();
		
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
		
		void execute( Bureaucrat const & executor ) const;

		std::string getTarget( void ) const;

	private:
		std::string _target;
};

#endif
