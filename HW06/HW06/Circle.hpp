#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle
{
private:
    double radius;
    static int numberOfObjects;
    
public:
    Circle();
    Circle (double radius);
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    //declares bool operator functions
    bool operator<(const Circle& c);
    bool operator<=(const Circle& c);
    bool operator==(const Circle& c);
    bool operator!=(const Circle& c);
    bool operator>=(const Circle& c);
    bool operator>(const Circle& c);
};

#endif /* Circle_hpp */
