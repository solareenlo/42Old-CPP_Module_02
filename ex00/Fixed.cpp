/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:37:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 10:00:01 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy constructor called" << std::endl;
    this->raw_ = src.getRawBits();
}

Fixed& Fixed::operator=(Fixed const& rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) {
        this->raw_ = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw_;
}

void Fixed::setRawBits(int const raw) { this->raw_ = raw; }
