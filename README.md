FEM Coding Assignment 5: Elastic strain energy density,and element energy, and derivatives
==========================================================================================

This assignment extends the Q4, Q9, CST, and LST elements that you implemented in PS03 to
include quadrature weights and points, as well as to add the calculation of the Jacobian.

Initial setup (same as before)
------------------------------

Either (1) check out a fresh copy of this repo with the appropriate branch, or (2) switch to the appropriate branch on your existing copy.
(Don't forget to do a `git pull` on the branch to get any recent changes.)


Part 1: Copying previous implementation of LST, CST, Q4, Q9
-----------------------------------------------------------

Copy and paste your previous implementation for the following functions where indicated by "TODO"

- `src/Element/LST.H`
- `src/Element/CST.H`
- `src/Element/Q4.H`
- `src/Element/Q9.H`

(For future assignments, you will be able to simply copy/paste the files.)

If this passes successfully, you will see the usual "test.element..." tests pass 
(except for the "energyderivative" tests)


Part 2: Implement isotropic elasticity
--------------------------------------

You will find TODOs in the following file

- `src/Model/Isotropic.H`

In this element, implement the calculation of the isotropic elastic energy density and its derivatives.
See Problem Set 4 Problem 2 for the equations that you need to implement.
Once complete, you should see the "model.isotropic.derivative" test pass.


Part 3: Implement element energy and derivatives
------------------------------------------------

You will find TODOs in the following file

- `src/Element/Element.H`

In this element, implement the calculation of the element's energy (W) and its derivatives (DW, DDW).
See Problem 1 of this problem set for the relevant equations.

**Note**: for this assignment, you can assume that the element is not an isoparametric element.
This means that X = Y, and you do not need to include Jacobian corrections.
We will introduce these corrections in a subsequent assignment.

