/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:36:38 by ael-maar          #+#    #+#             */
/*   Updated: 2023/11/04 15:32:29 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &src) { *this = src; }
        MutantStack &operator=(const MutantStack &src)
        {
            if (this != &src)
                this->c = src.c;
            return (*this);
        }
        ~MutantStack() {}
        typedef typename Container::iterator iterator;
        iterator begin() { return (this->c.begin()); }
        iterator end() { return (this->c.end()); }
};

#endif
