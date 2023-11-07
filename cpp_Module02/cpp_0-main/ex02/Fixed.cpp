#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
}

Fixed::Fixed(const int i){
    this->value = i << f_bits;
}

Fixed::Fixed(const float f){
    this->value = (int)roundf(f * (1 << f_bits));
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

Fixed &Fixed::operator*(const Fixed& right){
   this->value *= right.value / 256;
   return (*this);
}

    stream << obj.toFloat();
    return stream;
}