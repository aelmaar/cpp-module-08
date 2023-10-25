/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:19:43 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/25 18:22:34 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : len(n) {}

Span::Span(const Span &src) { *this = src; }

Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        this->v = src.v;
        this->len = src.len;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (v.size() >= len)
        throw std::out_of_range("Index out of range");
    v.push_back(n);
}

int Span::getElement(int index) const { return v[index]; }

void Span::assignNumbers(std::vector<int> &lst)
{
    if (lst.size() > len)
        throw std::exception();
    this->v.assign(lst.begin(), lst.end());
}

std::vector<int> &Span::getVector() { return v; }

int Span::shortestSpan()
{
    if (len < 2)
        throw std::exception();
    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());
    std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
    return (*std::min_element(tmp.begin(), tmp.end()));
}

int Span::longestSpan()
{
    if (len < 2)
        throw std::exception();
    return (*std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end()));
}
