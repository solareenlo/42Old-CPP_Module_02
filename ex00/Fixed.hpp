/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:19:30 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 09:44:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed {
 public:
    Fixed();
    virtual ~Fixed();
    Fixed(Fixed const& src);
    Fixed& operator=(Fixed const& rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);

 private:
    int raw_;
    static const int NUM_FRACTION_BITS_ = 8;
};

#endif  // FIXED_HPP_
