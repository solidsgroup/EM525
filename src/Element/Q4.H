#ifndef ELEMENT_Q4_H
#define ELEMENT_Q4_H

#include "Element.H"

namespace Element
{
class Q4 : public Element<2,4,4>
{
public:
    using Element<2,4,4>::Element;

    std::array<double,4> phi(Set::Vector Y) override
    {
        std::array<double,4> ret;

        // TODO #1: Implement phi

        return ret;
    }

    std::array<Set::Vector,4> Dphi(Set::Vector Y) override
    {
        std::array<Set::Vector,4> Dphi;

        // TODO #2: Implement derivative of phi

        return Dphi;
    }

public:
    virtual const std::array<Set::Vector,4> & getY0() {return Y0;}

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

};

}
#endif
