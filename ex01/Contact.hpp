#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <cstring>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
         void set_contact(const std::string& first, const std::string& last,
                        const std::string& nick, const std::string& phone,
                        const std::string& secret)
                        {
                            first_name = first;
                            last_name = last;
                            nickname = nick;
                            phone_number = phone;
                            darkest_secret = secret;
                        }
        std::string get_first_name() const{
            return (first_name);
        }
        std::string get_last_name() const{
            return (last_name);
        }
        std::string get_nickname() const{
            return (nickname);
        }
        std::string get_phone_number() const{
            return (phone_number);
        }
        std::string get_secret() const{
            return (darkest_secret);
        }
};

#endif

