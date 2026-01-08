#ifndef ELEMENT_LST_H
#define ELEMENT_LST_H

#include "Element.H"

namespace Element
{
class LST : public Element<2,6,4>
{
public:
    using Element<2,6,4>::Element;

    std::array<double,6> eta(Set::Vector Y) override
    {
        std::array<double,6> ret;

        // TODO #1: Implement eta

        return ret;
    }

    std::array<Set::Vector,6> Deta(Set::Vector Y) override
    {
        std::array<Eigen::Vector2d,6> ret;

        // TODO #2: Implement dEta
        
        return ret;
    }

public:
    virtual const std::array<Set::Vector,6> & getY0() {return Y0;}

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Set::Vector,6> Y0 = {
        Set::Vector(0.0,0.0),
        Set::Vector(0.5,0.0),
        Set::Vector(1.0,0.0),
        Set::Vector(0.5,0.5),
        Set::Vector(0.0,1.0),
        Set::Vector(0.0,0.5)
    };

};

}
#endif
