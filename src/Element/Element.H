#ifndef ELEMENT_ELEMENT_H
#define ELEMENT_ELEMENT_H
#include "eigen3/Eigen/Core"
#include <time.h>

namespace Element
{
template<int D, int N, int Q>
class Element
{
public:

    Element()
    {}
    virtual std::array<double,N> eta(Eigen::Vector2d y) = 0;
    virtual std::array<Eigen::Vector2d,N> Deta(Eigen::Vector2d y) = 0;

public:
    constexpr int getN() {return N;}
    virtual const std::array<Eigen::Vector2d,N> & getY0() = 0;

    static const int _D = D;
    static const int _N = N;
    static const int _Q = Q;
};



}
#endif
