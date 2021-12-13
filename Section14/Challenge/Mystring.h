#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                          // No-args constructor
    Mystring(const char *s);                             // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                        // Move constructor
    ~Mystring();                                         // Destructor
    
    Mystring &operator=(const Mystring &rhs);            // Copy assignment
    Mystring &operator=(Mystring &&rhs);                 // Move assignment
    
    void display() const;
    
    int get_length() const;                              // getters
    const char *get_str() const;
    //operator overloading definition as member functions
    // Mystring operator-()const;
    // Mystring operator+(const Mystring &rhs)const;
    // bool operator==(const Mystring&rhs)const;
    // bool operator!=(const Mystring &rhs) const;
    // bool operator<(const Mystring &rhs)const;
    // bool operator>(const Mystring &rhs)const;
   
    // Mystring  &operator+=(const Mystring &rhs);
    // Mystring operator*(int n)const;
    // Mystring &operator*=(int n);

//  Mystring &operator++();
   //operator overloading definition as a non-member function
    friend Mystring operator-(const Mystring&lhs) ;                   //make lowercase
    friend Mystring operator+(const Mystring&lhs, const Mystring&rhs);  //concatenate

    friend bool operator==(const Mystring&lhs, const Mystring&rhs);  //check equal
    friend bool operator!=(const Mystring&lhs, const Mystring&rhs); //check not equal
    friend bool operator<(const Mystring&lhs, const Mystring&rhs); ////check less than
    friend bool operator>(const Mystring&lhs, const Mystring&rhs); //check greater than
    friend Mystring &operator+=(const Mystring&lhs, const Mystring&rhs); // s1 += s2 concatenate and assign
    friend Mystring operator*(const Mystring&lhs, const Mystring&rhs); // s1= s2*3, repeat s2 n times
    friend Mystring &operator*=(const Mystring&lhs, const Mystring&rhs); //s1 *=3; s1 = s1*3
    friend Mystring &operator++(Mystring &obj);                                           // ++s1; pre-increment make uppercase
    friend Mystring operator++(Mystring &obj, int);    
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &in, Mystring &obj);    
};

#endif // _MYSTRING_H_