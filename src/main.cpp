#define DIM 2

#include <iostream>
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include "Set/Set.H"
#include "Element/CST.H"
#include "Element/LST.H"
#include "Element/Q4.H"
#include "Element/Q9.H"
#include "Element/Test.H"

namespace Set
{
using Scalar = double;            // Note that "Set::Scalar" is the same as double
using Vector = Eigen::Vector2d;   // Note that "Set::Vector" is the same as Eigen::Vector2d
using Matrix = Eigen::Matrix2d;   // Note that "Set::Matrix" is the same as Eigen::Matrix2d
}

int main(int argc, char **argv)
{

    //
    // CST Tests
    //
    
    std::cout << "test.element.cst.diractest...";
    try {Element::Test<Element::CST>::Dirac(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.cst.sumtounitytest...";
    try {Element::Test<Element::CST>::SumToUnity(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.cst.phiderivativetest...";
    try {Element::Test<Element::CST>::PhiDerivative(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}


    //
    // LST Tests
    //
    
    std::cout << "test.element.lst.diractest...";
    try {Element::Test<Element::LST>::Dirac(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.lst.sumtounitytest...";
    try {Element::Test<Element::LST>::SumToUnity(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.lst.phiderivativetest...";
    try {Element::Test<Element::LST>::PhiDerivative(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    //
    // Q4 Tests
    //
    
    std::cout << "test.element.q4.diractest...";
    try {Element::Test<Element::Q4>::Dirac(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.q4.sumtounitytest...";
    try {Element::Test<Element::Q4>::SumToUnity(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.q4.phiderivativetest...";
    try {Element::Test<Element::Q4>::PhiDerivative(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    //
    // Q9 Tests
    //
    
    std::cout << "test.element.q9.diractest...";
    try {Element::Test<Element::Q9>::Dirac(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.q9.sumtounitytest...";
    try {Element::Test<Element::Q9>::SumToUnity(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

    std::cout << "test.element.q9.phiderivativetest...";
    try {Element::Test<Element::Q9>::PhiDerivative(); std::cout <<"pass"<<std::endl;}
    catch(Util::Exception::UnitTest &e) {std::cout << "failed:" << std::endl << e.what() << std::endl;}

}
