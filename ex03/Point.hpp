/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:27:45 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 13:41:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

class Point {
 public:
    Point();
    virtual ~Point();
    Point(Point const& src);
    Point(float const x, float const y);

    Point& operator=(Point const& rhs);

    Fixed getX() const;
    Fixed getY() const;

 private:
    Fixed const x_;
    Fixed const y_;
};
#endif  // POINT_HPP_
