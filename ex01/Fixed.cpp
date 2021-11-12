/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:37:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 10:48:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw) : raw_(raw << NUM_FRACTION_BITS_) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw) : raw_(roundf(raw * (1 << NUM_FRACTION_BITS_))) {
    std::cout << "Float constructor called" << std::endl;
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

int Fixed::getRawBits() const { return this->raw_; }

void Fixed::setRawBits(int const raw) { this->raw_ = raw; }

float Fixed::toFloat(void) const {
    return static_cast<float>(this->raw_) / (1 << NUM_FRACTION_BITS_);
}

int Fixed::toInt(void) const { return this->raw_ >> NUM_FRACTION_BITS_; }

std::ostream& operator<<(std::ostream& os, Fixed const& rhs) {
    return os << rhs.toFloat();
}
