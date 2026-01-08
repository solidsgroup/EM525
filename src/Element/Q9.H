#ifndef ELEMENT_Q9_H
#define ELEMENT_Q9_H

#include "Element.H"

namespace Element
{
class Q9 : public Element<2,9,9>
{
public:
    using Element<2,9,9>::Element;

    std::array<double,9> phi(Set::Vector Y) override
    {
        std::array<double,9> ret;

        // TODO - Copy implementation from PS03

        return ret;
    }

    std::array<Set::Vector,9> Dphi(Set::Vector Y) override
    {
        std::array<Set::Vector,9> Dret;

        // TODO - Copy implementation from PS03

        return Dret;
    }

public:
    virtual const std::array<Set::Vector,9> & getY0() {return Y0;}
    virtual const std::array<Set::Vector,9> & getQp() {return Qp;}
    virtual const std::array<double,9> & getQw() {return Qw;}
    virtual const double getArea() {
        // TODO return the area.
    } 

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Set::Vector,9> Y0 = {
        Set::Vector(-1.0,-1.0),
        Set::Vector( 0.0,-1.0),
        Set::Vector( 1.0,-1.0),
        Set::Vector( 1.0, 0.0),
        Set::Vector( 1.0, 1.0),
        Set::Vector( 0.0, 1.0),
        Set::Vector(-1.0, 1.0),
        Set::Vector(-1.0, 0.0),
        Set::Vector( 0.0, 0.0),
    };

    const std::array<Set::Vector,9> Qp = {
        // TODO add quadrature points (vectors)
    };

    const std::array<double,9> Qw = {
        // TODO add quadrature weights (scalars)
    };


public:
    
    static const int vtkid = 28;
};

}
#endif
