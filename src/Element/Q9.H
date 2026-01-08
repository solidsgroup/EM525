#ifndef ELEMENT_Q9_H
#define ELEMENT_Q9_H

#include "Element.H"

namespace Element
{
class Q9 : public Element<2,9,9>
{
public:
    using Element<2,9,9>::Element;

    std::array<double,9> eta(Eigen::Vector2d Y) override
    {
        std::array<double,9> ret;

        // TODO #1: Implement eta

        return ret;
    }

    std::array<Eigen::Vector2d,9> Deta(Eigen::Vector2d Y) override
    {
        std::array<Eigen::Vector2d,9> Dphi;

        // TODO #2: Implement derivative of eta

        return Dphi;
    }

public:
    virtual const std::array<Eigen::Vector2d,9> & getY0() {return Y0;}

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Eigen::Vector2d,9> Y0 = {
        Eigen::Vector2d(-1.0,-1.0),
        Eigen::Vector2d( 0.0,-1.0),
        Eigen::Vector2d( 1.0,-1.0),
        Eigen::Vector2d( 1.0, 0.0),
        Eigen::Vector2d( 1.0, 1.0),
        Eigen::Vector2d( 0.0, 1.0),
        Eigen::Vector2d(-1.0, 1.0),
        Eigen::Vector2d(-1.0, 0.0),
        Eigen::Vector2d( 0.0, 0.0),
    };
};

}
#endif
