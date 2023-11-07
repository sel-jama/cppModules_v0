#include "Fixed.hpp"

Fixed::Fixed(){
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copb constructor called" << std::endl;
    value = oldObj.getRawBits();
}


Fixed& Fixed::operator=(const Fixed& oldObj){
    std::cout << "Copb assignement operator called" << std::endl; 
    if (&oldObj == this)
        return *this;

    value = oldObj.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}