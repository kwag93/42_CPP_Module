/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:19:26 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 12:29:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include <iostream>

template <typename T>
void    print_array(Array<T> & arr) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    {
        Array<int> a(3);
        for (int i = 0; i < static_cast<int>(a.size()); i++) {
            a[i] = i;
        }
        std::cout << "Array size: " << a.size() << std::endl;
        print_array(a);
        std::cout << std::endl;

        Array<int> b;
        b = a;
        print_array(b);
        std::cout << std::endl;

        Array<int> c(a);
        print_array(c);
        std::cout << std::endl;

        a[0] = -1;
        b[0] = -2;
        c[0] = -3;
        print_array(a);
        print_array(b);
        print_array(c);
    }
    {
        Array<double> a(3);
        for (int i = 0; i < static_cast<int>(a.size()); i++) {
            a[i] = i;
        }
		std::cout<<a[4]<<std::endl;
		std::cout<<a[-1]<<std::endl;

        std::cout << "Array size: " << a.size() << std::endl;
        print_array(a);
        std::cout << std::endl;

        Array<double> b;
        b = a;
        print_array(b);
        std::cout << std::endl;

        Array<double> c(a);
        print_array(c);
        std::cout << std::endl;

        a[0] = -1;
        b[0] = -2;
        c[0] = -3;
        print_array(a);
        print_array(b);
        print_array(c);
    }
    return 0;
}
