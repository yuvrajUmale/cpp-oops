#include "Mystring.hpp"
#include <iostream>

using namespace std;

int main()
{

    //    Mystring empty;           // no args
    //    Mystring hero{ "xyz" };   // overloaded args constructor
    //    Mystring villian{ hero }; // copy constructor

    //    Mystring a{ "hello" };
    //    Mystring b;
    //    b = a;

    //    empty.display();
    //    hero.display();
    //    villian.display();
    //    a.display();
    //    b.display();

    // Mystring a {"hello"};clTabCtrl
    // a = Mystring{"bye"};
    //
    // a.display();

    //    cout << boolalpha << endl;
    //    Mystring yuvraj{ "YUVRAJ" };
    //    Mystring chetan{ "chetan" };
    //    Mystring stooge;
    //
    //    cout << (yuvraj == chetan) << endl; // false
    //    cout << (yuvraj != chetan) << endl; // true
    //
    //    cout<<(yuvraj < chetan)<<endl; //true
    //    cout<<(yuvraj > chetan)<<endl; //false
    //
    //
    //    stooge = -yuvraj;
    //    yuvraj.display();
    //    stooge.display();
    //
    //
    //    Mystring stooges = yuvraj + "umale";
    //    stooges.display();

    Mystring yuvraj{ "YUVRAJ" };
    Mystring chetan{ "chetan" };
    Mystring stooge;

    //    cout<<"enter stooge ";
    //    cin>>stooge;
    //
    //    cout<<"names: "<<yuvraj<<" , "<<chetan<<" , "<<stooge<<endl;
    //
    //    yuvraj += "----";
    //    cout<<"this is += "<<yuvraj<<endl;

    Mystring s2{ "1234" };
    yuvraj = s2 * 3;
    cout << yuvraj << endl;

    Mystring s3{ "abcd" };
    s3 *= 3;
    cout << s3 << endl;

    Mystring s4{ "tmkc" };
    cout << s4 << endl;
    ++s4; // pre increment
    cout << s4 << endl;

    Mystring s5{ "mkc" };
    cout << s5 << endl;
    s5++; // post increment
    cout << s5++ << endl;

    return 0;
}

/*
overloaded operators
==
- (lowecase)
+
!=
>
<
<<
>>
++
--
+=
*=
*/