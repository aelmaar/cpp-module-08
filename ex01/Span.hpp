/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:19:46 by ael-maar          #+#    #+#             */
/*   Updated: 2023/11/04 15:30:29 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <numeric>
#include <vector>

typedef std::vector<int>::iterator v_iterator;

class Span
{
    std::vector<int> v;
    unsigned int len;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();
        void addNumber(int n);
        int getElement(int index) const;
        std::vector<int> &getVector();
        void assignNumbers(std::vector<int> &lst);
        int shortestSpan();
        int longestSpan();
};

#endif
