#ifndef ELEMENT_CST_H
#define ELEMENT_CST_H

#include "Element.H"

namespace Element
{
template<class MODEL>
class CST : public Element<2,3,1,MODEL>
{
public:
    using Element<2,3,1,MODEL>::Element;

    std::array<double,3> eta(Set::Vector Y) override
    {
        // TODO - copy from previous
    }

    std::array<Set::Vector,3> Deta(Set::Vector Y) override
    {
        // TODO - copy from previous
    }

public:
    //
    // These are utility functions 
    //
    virtual const std::array<Set::Vector,3> & getY0() {return Y0;}
    virtual const std::array<Set::Vector,1> & getQp() {return Qp;}
    virtual const std::array<double,1> & getQw() {return Qw;}
    virtual const double getArea() {
        // TODO - copy from previous
    }

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Set::Vector,3> Y0 = {
        Set::Vector(0.0,0.0),
        Set::Vector(1.0,0.0),
        Set::Vector(0.0,1.0)
    };

    const std::array<Set::Vector,1> Qp = {
        // TODO - copy from previous
    };

    const std::array<double,1> Qw = {
        // TODO - copy from previous
    };


public:
    
    static const int vtkid = 5;
};

}
#endif
