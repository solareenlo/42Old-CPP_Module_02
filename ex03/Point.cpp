/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:31:09 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 13:44:46 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0) {}
Point::~Point() {}
Point::Point(Point const& src) : x_(src.x_), y_(src.y_) {}
Point::Point(float const x, float const y) : x_(x), y_(y) {}

Point& Point::operator=(Point const& rhs) {
    if (this != &rhs) {
        const_cast<Fixed&>(this->x_) = rhs.getX();
        const_cast<Fixed&>(this->y_) = rhs.getY();
    }
    return *this;
}

Fixed Point::getX() const { return this->x_; }
Fixed Point::getY() const { return this->y_; }
