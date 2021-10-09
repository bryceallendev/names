/*
    Name.hpp

    Declarations for multi-part names class
*/

#ifndef INCLUDED_NAME_HPP
#define INCLUDED_NAME_HPP

#include <iostream>
#include <optional>

class Name {
public:

    // first, middle, and last name constructor
    Name(const std::string& firstName, const std::string& middleName, const std::string& lastName);

    // first and last name constructor
    Name(const std::string& firstName, const std::string& lastName);

    // last name constructor
    Name(const std::string& lastName);

    // first name
    std::string getFirstName() const;

    // middle name
    std::string getMiddleName() const;

    // last name
    std::string getLastName() const;

    // output the name, single space between the parts of the name
    std::ostream& outputName(std::ostream& out) const;

private:
    //std::string firstName;
    //bool hasFirstName = false;
    std::optional<std::string> firstName;
    //std::string middleName;
    //bool hasMiddleName = false;
    std::optional<std::string> middleName;
    //std::string lastName;
    //bool hasLastName = false;
    std::optional<std::string> lastName;
};

#endif
