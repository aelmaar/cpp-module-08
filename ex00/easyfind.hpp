/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:47:10 by ael-maar          #+#    #+#             */
/*   Updated: 2023/11/04 15:28:59 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator bg;
    for (bg = container.begin(); bg != container.end(); bg++)
    {
        if (*bg == n)
            return(bg);
    }
    throw std::exception();
}

#endif
