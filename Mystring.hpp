#ifndef MYSTRING_HPP
#define MYSTRING_HPP
#include <cstring>
#include <iostream>
using namespace std;

class Mystring
{
    friend ostream& operator<<(ostream& os, const Mystring& rhs);
    friend istream& operator>>(istream& is, Mystring& rhs);

private:
    char* str; // c-style string
public:
    Mystring();                               // no-args constructor
    Mystring(const char* s);                  // args constructor
    Mystring(const Mystring& source);         // copy constructor
    Mystring(Mystring&& source);              // move constructor
    Mystring& operator=(const Mystring& rhs); // copy assignment
    Mystring& operator=(Mystring&& source);   // move assignment;

    bool operator==(const Mystring& rhs) const;    // == operator
    bool operator!=(const Mystring& rhs) const;    //!=
    bool operator<(const Mystring& rhs) const;     //<
    bool operator>(const Mystring& rhs) const;     //>
    Mystring operator-() const;                    //- (lowercase)
    Mystring operator+(const Mystring& rhs) const; //+ operator
    Mystring& operator+=(const Mystring& rhs);     // s1 += s2    i.e s1 = s1 + s2
    Mystring operator*(int n) const;               // s1 = s2 * 3
    Mystring& operator*=(int n);                   // s1 *= 3   i.e s1 = s1 * 3
    Mystring operator++();                         // preinc ++i
    Mystring operator++(int);                      // post inc i++

    ~Mystring();          // destructor
    void display() const; // getters
    int get_lenght() const;
    const char* get_str() const;
};

#endif // MYSTRING_HPP
