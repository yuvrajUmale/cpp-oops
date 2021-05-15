#include "Mystring.hpp"
using namespace std;

// noargs constructor
Mystring::Mystring()
    : str{ nullptr }
{
    str = new char[1];
    *str = '\0';
}

// args constructro
Mystring::Mystring(const char* s)
    : str{ nullptr }
{
    if(s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// copy constructor
Mystring::Mystring(const Mystring& source)
    : str{ nullptr }
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

// move constructor
Mystring::Mystring(Mystring&& source)
    : str{ source.str }
{
    source.str = nullptr;
}

// copy assignment
Mystring& Mystring::operator=(const Mystring& rhs)
{
    if(this == &rhs) {
        return *this;
    } else {
        delete[] str;
        str = new char[strlen(rhs.str) + 1];
        strcpy(str, rhs.str);
        return *this;
    }
}

// move assignment
Mystring& Mystring::operator=(Mystring&& source)
{
    if(this == &source) {
        return *this;
    } else {
        delete[] str;
        str = source.str;
        source.str = nullptr;
        return *this;
    }
}

//== operator
bool Mystring::operator==(const Mystring& rhs) const
{
    return (strcmp(str, rhs.str) == 0);
}

//!=
bool Mystring::operator!=(const Mystring& rhs) const
{
    return (strcmp(str, rhs.str) != 0);
}

//- (lowercase)
Mystring Mystring::operator-() const
{
    char* buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for(size_t i{ 0 }; i < strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp{ buff };
    delete[] buff;
    return temp;
}

//+
Mystring Mystring::operator+(const Mystring& rhs) const
{
    int size_arr = strlen(str) + strlen(rhs.str) + 1;
    char* buff = new char[size_arr];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp{ buff };
    delete[] buff;
    return temp;
}

//<
bool Mystring::operator<(const Mystring& rhs) const
{
    return (strcmp(str, rhs.str) < 0);
}

//>
bool Mystring::operator>(const Mystring& rhs) const
{
    return (strcmp(str, rhs.str) > 0);
}

//+=
Mystring& Mystring::operator+=(const Mystring& rhs)
{
    *this = *this + rhs;
    return *this;
}

//*
Mystring Mystring::operator*(int n) const
{
    //    char size_t = strlen(str) * n +1;
    char* buff = new char[strlen(str) * n + 1];
    strcpy(buff, "");
    for(int i{ 1 }; i <= n; i++) {
        strcat(buff, str);
    }
    Mystring temp{ buff };
    delete[] buff;
    return temp;
}

//*=
Mystring& Mystring::operator*=(int n)
{
    *this = *this * n;
    return *this;
}

// preincrement 
Mystring Mystring::operator++(){
    for(size_t i{0}; i<strlen(str); i++){
        str[i] = static_cast<char> (toupper(str[i]));
    }
    return *this;
}

//post increment
Mystring Mystring::operator++(int){
    Mystring temp{*this};
    operator++();
    return temp;
}

// destructor
Mystring::~Mystring()
{
    delete[] str;
}

void Mystring::display() const
{
    cout << str << ":" << get_lenght() << endl;
}

int Mystring::get_lenght() const
{
    return strlen(str);
}

const char* Mystring::get_str() const
{
    return str;
}

//<<
ostream& operator<<(ostream& os, const Mystring& rhs)
{
    os << rhs.str;
    return os;
}

//>>
istream& operator>>(istream& is, Mystring& rhs)
{
    char* buff = new char[1000];
    is >> buff;
    rhs = Mystring{ buff };
    delete[] buff;
    return is;
}