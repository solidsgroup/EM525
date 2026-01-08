#include <iostream>
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include "Element/CST.H"
#include "Element/Test.H"

namespace Set
{
using Scalar = double;            // Note that "Set::Scalar" is the same as double
using Vector = Eigen::Vector2d;   // Note that "Set::Vector" is the same as Eigen::Vector2d
using Matrix = Eigen::Matrix2d;   // Note that "Set::Matrix" is the same as Eigen::Matrix2d
}

int main(int argc, char **argv)
{

    // This code tests the CST element defined in
    //    src/Element/CST.H
    // using the tests defined in
    //    src/Element/Test.H

    std::cout << "test.element.cst..." << std::endl;
    Element::Test<Element::CST>::Dirac();
    Element::Test<Element::CST>::SumToUnity();
    Element::Test<Element::CST>::EtaDerivative();
    std::cout << "                  ...tests pass!" << std::endl;

}
