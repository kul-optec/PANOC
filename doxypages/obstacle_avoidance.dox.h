/*! \page obstacle_avoidance Obstacle Avoidance
 * 
 * \section obstacle_avoidance_nmpc Nonlinear MPC
 * 
 * Problem statement
 * 
 * \section penalty_functions Penalty Functions
 * Circular obstacle (\f$\|z-c_{kj}\|_{E_{kj}}^2 \leq 1\f$) using the penalty function
 * \f$\tilde{h}_{kj}^{\mathrm{quad}}(z) = \eta_{kj} [1 - \|z-c_{kj}\|_{E_{kj}}^2]_+^2\f$
 * 
 * <div style="position:relative;display:flex">
 * <img src="pics/penalty_circle.svg" width="500px" alt="Circle penalty" style="display:inline-block;"/>
 * </div>
 * 
 * Polyhedral obstacle (\f$b^i-A_{kj}^i z \leq 0\f$) using the penalty 
 * \f$\tilde{h}_{kj}^{\mathrm{affine}}(z) = \eta_{kj} \prod_{i=1}^{m_{kj}}[b_{kj}^i -  (a_{kj}^{i})^{\top} z]_+^2.\f$
 * <div style="position:relative;display:flex">
 * <img src="pics/penalty_triangle.svg" width="500px"  alt="Triangle penalty" style="display:inline-block"/>
 * </div>
 * 
 * 
 * Rectangular constraints
 * <div style="position:relative;display:flex">
 * <img src="pics/penalty_rectangle.svg" width="500px"  alt="Rectangle penalty" style="display:inline-block"/>
 * </div>
 *
 * 
 * \section obstacle_avoidance_examples Obstacle avoidance 
 * Navigation results with rectangular and circular obstacles:
 * <div style="position:relative;display:flex">
 * <img src="pics/nav_rect_circ.svg" width="400px" alt="obstacle avoidance rectangle-circle 1" style="display:inline-block;"/>
 * <img src="pics/nav_rect_circ_2.svg" width="400px" alt="obstacle avoidance rectangle-circle 2" style="display:inline-block"/>
 * </div>
 * 
 * <div style="position:relative;display:flex">
 * <img src="pics/nav_rect_circ_3.svg" width="400px" alt="obstacle avoidance 3" style="display:inline-block;"/>
 * <img src="pics/nav_rect_circ_4.svg" width="400px" alt="obstacle avoidance 4" style="display:inline-block"/>
 * </div>
 * 
 */