#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor is called" << std::endl;
}

Fixed::Fixed(const int i){
    //It converts it i to the corresponding fixed-point value
}

Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copy constructor called" << std::endl;
    value = oldObj.value;
}

Fixed& Fixed::operator=(const Fixed &oldObj){
    std::cout << "Copy assignement operator called" << std::endl; 
    if (this == &oldObj)
        return *this;
    
    value = oldObj.value;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
    //converts the fixed-point value to a floating-point value

}

int Fixed::toInt( void ) const{
    //converts the fixed-point value to an integer value

}

void operator<<(const )