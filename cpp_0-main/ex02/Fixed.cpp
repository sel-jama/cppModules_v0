#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
}

Fixed::Fixed(const int i){
    this->value = i << f_bits;
}

Fixed::Fixed(const float f){
    this->value = roundf(f * (1 << f_bits));
}

Fixed::Fixed(const Fixed& old){
    *this = old;
}

Fixed& Fixed::operator=(const Fixed &old){
    if (this == &old)
        return *this;
    
    value = old.getRawBits();
    return *this;
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
    return value;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

float Fixed::toFloat( void ) const{
    return (float)value / (float)(1 << f_bits);
}

std::ostream& operator<<(std::ostream& stream,const Fixed& obj){
    stream << obj.toFloat();
    return stream;
}

//Comparison operators overloading

bool	Fixed::operator>(const Fixed& other) const{
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed& other) const{
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->value != other.value);
}

//Arithmetic operators overloading

Fixed& Fixed::operator*(const Fixed& operand){
   this->value *= operand.value / 256;
   return (*this);
}

Fixed& Fixed::operator/(const Fixed& operand){
    this->value /= operand.value * 256;
    return (*this);
}

Fixed& Fixed::operator+(const Fixed& operand){
    this->value += operand.value;
    return (*this);
}

Fixed& Fixed::operator-(const Fixed& operand){
    this->value -= operand.value;
    return (*this);
}

//Increment/Decrement operators overloading

Fixed& Fixed::operator++(){
    ++value;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed saver = *this;
    ++value;
    return (saver);
}

Fixed& Fixed::operator--(){
    --value;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed saver = *this;
    --value;
    return (saver);
}

//overloaded function

Fixed& Fixed::max(Fixed & a, Fixed & b){
    if (a > b)
        return (a);
    return (b); 
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a > b)
        return (a);
    return (b); 
}

Fixed& Fixed::min(Fixed &a, Fixed& b){
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if (a < b)
        return (a);
    return (b); 
}

