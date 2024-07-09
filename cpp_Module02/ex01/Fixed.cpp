#include "Fixed.hpp"

const int Fixed::f_bits = 8;

Fixed::Fixed(){
    std::cout << "Default constructor is called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int i){
    //It converts i to the corresponding fixed-point value
    std::cout << "Int constructor is called" << std::endl;
    this->value = i << f_bits;
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor is called" << std::endl;
    // value = roundf(f * 256);
    this->value = roundf(f * (1 << f_bits));
}

Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copy constructor called" << std::endl;
    // value = oldObj.value;
    *this = oldObj;
    // value = oldObj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &oldObj){
    std::cout << "Copy assignement operator called" << std::endl; 
    if (this == &oldObj)
        return *this;
    
    setRawBits(oldObj.getRawBits());
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return value;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

float Fixed::toFloat( void ) const{
    //converts the fixed-point value to a floating-point value
    return (float)value / (float)(1 << f_bits);
}

int Fixed::toInt( void ) const{
    //converts the fixed-point value to an integer value    
    return (value >> f_bits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& obj){
    stream << obj.toFloat();
    return stream;
}

