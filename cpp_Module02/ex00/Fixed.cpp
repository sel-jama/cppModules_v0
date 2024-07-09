#include "Fixed.hpp"

const int Fixed::f_bits = 8;

Fixed::Fixed(){
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(oldObj.getRawBits());
}


Fixed& Fixed::operator=(const Fixed& oldObj){
    std::cout << "Copy assignement operator called" << std::endl; 
    if (&oldObj == this)
        return *this;

   setRawBits(oldObj.getRawBits());
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}