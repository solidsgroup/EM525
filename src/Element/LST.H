#ifndef ELEMENT_LST_H
#define ELEMENT_LST_H

#include "Element.H"

namespace Element
{
class LST : public Element<2,6,3>
{
public:
    using Element<2,6,3>::Element;

    std::array<double,6> eta(Eigen::Vector2d Y) override
    {
        std::array<double,6> ret;

        // TODO #1: Implement eta

        return ret;
    }

    std::array<Eigen::Vector2d,6> Deta(Eigen::Vector2d Y) override
    {
        std::array<Eigen::Vector2d,6> ret;

        // TODO #2: Implement dEta
        
        return ret;
    }

public:
    virtual const std::array<Eigen::Vector2d,6> & getY0() {return Y0;}

private:
    //
    // Hard-coded values common to all elements
    //
    const std::array<Eigen::Vector2d,6> Y0 = {
        Eigen::Vector2d(0.0,0.0),
        Eigen::Vector2d(0.5,0.0),
        Eigen::Vector2d(1.0,0.0),
        Eigen::Vector2d(0.5,0.5),
        Eigen::Vector2d(0.0,1.0),
        Eigen::Vector2d(0.0,0.5)
    };

    };

}
#endif
