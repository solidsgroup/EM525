# FEM Coding Assignment 8: Stresses and Convergence Study


## Initial setup (same as before)

Either (1) check out a fresh copy of this repo with the appropriate branch, or (2) switch to the appropriate branch on your existing copy.
(Don't forget to do a `git pull` on the branch to get any recent changes.)


## Copying previous implementation

Copy the following files directly from PS05. 

- `src/Element/LST.H`
- `src/Element/CST.H`
- `src/Element/Q4.H`
- `src/Element/Q9.H`
- `src/Model/Isotropic.H`

If you do this correctly the code will compile.

## Part 1: Calculate element stresses

Edit the following file

- `src/Element/Element.H`

* Update the missing code with your code from PS07.

* Implement the `Stress` function, which calculates the average stress over the element and returns
  the corresponding stress tensor as a matrix.

Edit the following file

- `src/Mesh/Unstructured.H`

* Update the missing code with your code from PS07

* Complete the implementation of the `Stress` function, which calculates the stresses for all elements
  and stores them in a vector.

* Complete the implementation of the `Print` function to include stress as an ouptut.


## Part 2: Mesh convergence

The following mesh files are included:

- `platehole_cst.vtk`
- `platehole_cst_refine1.vtk`
- `platehole_cst_refine2.vtk`
- `platehole_lst.vtk`
- `platehole_lst_refine1.vtk`
- `platehole_lst_refine2.vtk`
- `platehole_q4.vtk`
- `platehole_q4_refine1.vtk`
- `platehole_q4_refine2.vtk`
- `platehole_q9.vtk`
- `platehole_q9_refine1.vtk`
- `platehole_q9_refine2.vtk`

(Note: the `q9_refine2` may take a little while to run, especially on older computers.)

All meshes have the same geometry, but different elements and differing resolutions.
Run the code for each of these meshes, and report the convergence (via a plot) of the solution with respect to average element size and element order.



