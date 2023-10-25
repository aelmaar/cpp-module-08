/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:19:48 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/25 18:29:23 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    Span sp1 = Span(3);
    Span sp2 = Span(1);

    std::cout << "-------Test1--------" << std::endl;
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        sp1.assignNumbers(sp.getVector());
    }
    catch(const std::exception& e)
    {
        std::cerr << "The vector sp size is larger then sp1" << '\n';
    }

    std::cout << "-------Test2--------" << std::endl;
    try
    {
        sp.addNumber(20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------Test3--------" << std::endl;
    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "The sp2 vector size is: " << sp2.getVector().size() << '\n';
    }
    std::cout << "-------Test4--------" << std::endl;
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return (EXIT_SUCCESS);
}
