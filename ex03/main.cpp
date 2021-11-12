/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:34:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 14:55:25 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
void print(std::string point, Point p);
void output(Point const a, Point const b, Point const c, Point const point,
            std::string p_str);

int main() {
    Point a(0.0f, 0.0f), b(2.0f, 0.0f), c(1.0f, 1.414f);
    Point p1(1.0f, 1.0f), p2(0.0f, 0.5f), p3(-0.1f, 0.0f), p4(-0.1f, -0.1f);

    print("a", a);
    std::cout << std::endl;
    print("b", b);
    std::cout << std::endl;
    print("c", c);
    std::cout << std::endl;
    std::cout << std::endl;

    output(a, b, c, p1, "p1");
    output(b, a, c, p1, "p1");
    output(b, a, c, p2, "p2");
    output(b, a, c, p3, "p3");
    output(b, a, c, p4, "p4");
    output(b, a, c, a, "a");
    output(b, a, c, b, "b");
    output(b, a, c, c, "c");
    return 0;
}

void print(std::string point, Point p) {
    std::cout << point << ": (" << p.getX() << ", " << p.getY() << ")";
}

void output(Point const a, Point const b, Point const c, Point const point,
            std::string p_str) {
    print(p_str, point);
    std::cout << (bsp(a, b, c, point) ? " is inside" : " is outside")
              << std::endl;
}
