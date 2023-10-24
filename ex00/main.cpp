/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:47:35 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/24 13:08:49 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int>::iterator it;
    try
    {
        std::vector<int> v;
        for (int i = 0; i < 5; i++)
            v.push_back(i+1);

        it = easyfind<std::vector<int> >(v, 5);
        std::cout << "The value is founded: " << *it << std::endl;
        it = easyfind<std::vector<int> >(v, 6);
        std::cout << "The value is founded: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": The value is not founded" << std::endl;
    }
    
    
    return (EXIT_SUCCESS);
}
