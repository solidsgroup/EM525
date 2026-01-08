#ifndef ELEMENT_Q4_H
#define ELEMENT_Q4_H

#include "Element.H"

namespace Element
{
template<class MODEL>
class Q4 : public Element<2,4,4,MODEL>
{
public:
    using Element<2,4,4,MODEL>::Element;

    std::array<double,4> eta(Set::Vector Y) override
    {
        // TODO - copy from previous
    }

    std::array<Set::Vector,4> Deta(Set::Vector Y) override
    {
        // TODO - copy from previous
    }

public:
    virtual const std::array<Set::Vector,4> & getY0() {return Y0;}
    virtual const std::array<Set::Vector,4> & getQp() {return Qp;}
    virtual const std::array<double,4> & getQw() {return Qw;}
    virtual const double getArea() {
        // TODO - copy from previous
    }

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Set::Vector,4> Y0 = {
        Set::Vector(-1.0,-1.0),
        Set::Vector(1.0,-1.0),
        Set::Vector(1.0,1.0),
        Set::Vector(-1.0,1.0)
    };

    const std::array<Set::Vector,4> Qp = {
        // TODO - copy from previous
    };

    const std::array<double,4> Qw = {
        // TODO - copy from previous
    };


public:
    
    static const int vtkid = 5;
};

}
#endif
