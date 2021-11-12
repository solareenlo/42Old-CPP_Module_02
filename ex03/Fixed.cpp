/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:37:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/12 13:05:12 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_(0) {}
Fixed::Fixed(int const raw) : raw_(raw << NUM_FRACTION_BITS_) {}
Fixed::Fixed(float const raw) : raw_(roundf(raw * (1 << NUM_FRACTION_BITS_))) {}
Fixed::~Fixed() {}
Fixed::Fixed(Fixed const& src) { this->raw_ = src.getRawBits(); }

Fixed& Fixed::operator=(Fixed const& rhs) {
    if (this != &rhs) {
        this->raw_ = rhs.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(Fixed const& rhs) const { return raw_ > rhs.raw_; }
bool Fixed::operator<(Fixed const& rhs) const { return raw_ < rhs.raw_; }
bool Fixed::operator>=(Fixed const& rhs) const { return !(raw_ < rhs.raw_); }
bool Fixed::operator<=(Fixed const& rhs) const { return !(raw_ > rhs.raw_); }
bool Fixed::operator==(Fixed const& rhs) const { return raw_ == rhs.raw_; }
bool Fixed::operator!=(Fixed const& rhs) const { return !(*this == rhs); }

Fixed Fixed::operator+(Fixed const& rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++() {
    ++this->raw_;
    return *this;
}

Fixed& Fixed::operator--() {
    --this->raw_;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old = *this;
    operator++();
    return old;
}

Fixed Fixed::operator--(int) {
    Fixed old = *this;
    operator--();
    return old;
}

int Fixed::getRawBits() const { return this->raw_; }

void Fixed::setRawBits(int const raw) { this->raw_ = raw; }

float Fixed::toFloat(void) const {
    return static_cast<float>(this->raw_) / (1 << NUM_FRACTION_BITS_);
}

int Fixed::toInt(void) const { return this->raw_ >> NUM_FRACTION_BITS_; }

Fixed& Fixed::min(Fixed& a, Fixed& b) { return a <= b ? a : b; }
Fixed& Fixed::max(Fixed& a, Fixed& b) { return a >= b ? a : b; }

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
    return a <= b ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    return a >= b ? a : b;
}

std::ostream& operator<<(std::ostream& os, Fixed const& rhs) {
    return os << rhs.toFloat();
}
