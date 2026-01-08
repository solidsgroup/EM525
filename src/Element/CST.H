#ifndef ELEMENT_CST_H
#define ELEMENT_CST_H

#include "Element.H"

namespace Element
{
class CST : public Element<2,3,1>
{
public:
    using Element<2,3,1>::Element;

    std::array<double,3> eta(Set::Vector Y) override
    {
        std::array<double,3> ret;

        // TODO #1: Implement eta

        return ret;
    }

    std::array<Set::Vector,3> Deta(Set::Vector Y) override
    {
        std::array<Eigen::Vector2d,3> ret;

        // TODO #2: Implement dEta
        
        return ret;
    }

public:
    virtual const std::array<Set::Vector,3> & getY0() {return Y0;}

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Set::Vector,3> Y0 = {
        Set::Vector(0.0,0.0),
        Set::Vector(1.0,0.0),
        Set::Vector(0.0,1.0)
    };

};

}
#endif
