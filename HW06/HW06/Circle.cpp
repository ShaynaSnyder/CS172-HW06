#include "Circle.hpp"
#include <cstdlib>

int Circle::numberOfObjects = 0;
//constructs a default circle object
Circle::Circle()
{
    radius=1;
    numberOfObjects++;
}
//constructs a circle object
Circle::Circle(double newRadius)
{
    radius=newRadius;
    numberOfObjects++;
}
//returns the radius of this circle
double Circle::getRadius() const
{
    return radius;
}
//sets a new radius
void Circle::setRadius(double newRadius)
{
    radius=(newRadius>=0) ? newRadius:0;
}
//returns the number of circle objects
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}
//defines bool operator functions by comparing circle radii with getRadius function
bool Circle::operator<(const Circle& c)
{
    if(getRadius()<c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator<=(const Circle& c)
{
    if(getRadius()<=c.getRadius())
       return true;
    else
       return false;
}
bool Circle::operator==(const Circle& c)
{
    if(getRadius()==c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator!=(const Circle& c)
{
    if(getRadius()!=c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>=(const Circle& c)
{
    if(getRadius()>=c.getRadius())
        return true;
    else
        return false;
}
bool Circle::operator>(const Circle& c)
{
    if(getRadius()>c.getRadius())
        return true;
    else
        return false;
}
