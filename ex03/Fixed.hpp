/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:19:30 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 13:05:06 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <cmath>
#include <iostream>

class Fixed {
 public:
    Fixed();
    Fixed(int const raw);
    Fixed(float const raw);
    Fixed(Fixed const& src);
    virtual ~Fixed();

    Fixed& operator=(Fixed const& rhs);

    bool operator>(Fixed const& rhs) const;
    bool operator<(Fixed const& rhs) const;
    bool operator>=(Fixed const& rhs) const;
    bool operator<=(Fixed const& rhs) const;
    bool operator==(Fixed const& rhs) const;
    bool operator!=(Fixed const& rhs) const;

    Fixed operator+(Fixed const& rhs) const;
    Fixed operator-(Fixed const& rhs) const;
    Fixed operator*(Fixed const& rhs) const;
    Fixed operator/(Fixed const& rhs) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    static Fixed& min(Fixed& a, Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static Fixed const& min(Fixed const& a, Fixed const& b);
    static Fixed const& max(Fixed const& a, Fixed const& b);

 private:
    int raw_;
    static const int NUM_FRACTION_BITS_ = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);

#endif  // FIXED_HPP_
