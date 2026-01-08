#ifndef ELEMENT_Q4_H
#define ELEMENT_Q4_H

#include "Element.H"

namespace Element
{
class Q4 : public Element<2,4,4>
{
public:
    using Element<2,4,4>::Element;

    std::array<double,4> eta(Eigen::Vector2d Y) override
    {
        std::array<double,4> ret;

        // TODO #1: Implement eta

        return ret;
    }

    std::array<Eigen::Vector2d,4> Deta(Eigen::Vector2d Y) override
    {
        std::array<Eigen::Vector2d,4> Deta;

        // TODO #2: Implement derivative of eta

        return Deta;
    }

public:
    virtual const std::array<Eigen::Vector2d,4> & getY0() {return Y0;}

private:
    //
    // Hard-coded values common to all elements
    //

    const std::array<Eigen::Vector2d,4> Y0 = {
        Eigen::Vector2d(-1.0,-1.0),
        Eigen::Vector2d(1.0,-1.0),
        Eigen::Vector2d(1.0,1.0),
        Eigen::Vector2d(-1.0,1.0)
    };

};

}
#endif
