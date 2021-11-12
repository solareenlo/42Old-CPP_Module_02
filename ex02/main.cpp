/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:34:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 13:15:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[ pre-increment ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << "[ post-increment ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "[ pre-decrement ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << "[ post-decrement ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << "[ pre-increment ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << "[ post-increment ]" << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << "[ b ]" << std::endl;
    std::cout << b << std::endl;

    std::cout << "[ max ]" << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << "[ min ]" << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    std::cout << "[ Plus ]" << std::endl;
    std::cout << a + b << std::endl;

    std::cout << "[ Minus ]" << std::endl;
    std::cout << a - b << std::endl;

    std::cout << "[ Multi ]" << std::endl;
    std::cout << a * b << std::endl;

    std::cout << "[ Div ]" << std::endl;
    std::cout << a / a << std::endl;

    Fixed c = a + b;
    std::cout << "[ c ]" << std::endl;
    std::cout << c << std::endl;

    Fixed d = a++;
    std::cout << "[ d ]" << std::endl;
    std::cout << d << std::endl;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a >  b = " << (a > b) << std::endl;
    std::cout << "a <  b = " << (a < b) << std::endl;
    std::cout << "a >= b = " << (a >= b) << std::endl;
    std::cout << "a <= b = " << (a <= b) << std::endl;
    std::cout << "a == b = " << (a == b) << std::endl;
    std::cout << "a != b = " << (a != b) << std::endl;
    return 0;
}
