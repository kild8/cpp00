#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
    //Attributes
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    public:

    //Constructor
    Contact(std::string f_n, std::string l_n, std::string n_m, std::string p_n, std::string d_s)
        :   first_name(f_n), last_name(l_n), nick_name(n_m), phone_number(p_n), darkest_secret(d_s)
        {}

    //Setters
    void    set_first_name(const std::string &value);
    void    set_last_name(const std::string &value);
    void    set_nick_name(const std::string &value);
    void    set_phone_number(const std::string &value);
    void    set_darkest_secret(const std::string &value);

    //Getters
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nick_name() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};

#endif
