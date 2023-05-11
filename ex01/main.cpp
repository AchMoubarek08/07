/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:11:06 by amoubare          #+#    #+#             */
/*   Updated: 2023/02/16 02:11:08 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const &x)
{
    std::cout << x << " ";
}

int main()
{
    int array[] = {1, 2, 20, 4, 5};
    std::string str[] = {"hello", "world", "!"};
    std::cout << "int array : ";
    iter(array, 5, print);
    std::cout << std::endl;
    std::cout << "str array : ";
    iter(str, 3, print);
    return (0);
}