/*! \page obstacle_avoidance Obstacle Avoidance
 * 
 * \section obstacle_avoidance_nmpc Nonlinear MPC
 *
 * Nonlinear MPC for obstacle avoidance:
 * 
 * - The robot must reach a given **destination** with a desired **heading** while avoiding a set of obstacles
 * - Path planning takes into account the **nonlinear dynamics** of the vehicle
 * - At every sampling time the robot makes an optimal plan by **minimizing the total effort** to reach the destination point (actuation energy and trajectory length)
 * - The problem is solved subject to **actuation constraints**
 * - Obstacles are taken into account to generate **collision-free trajectories**
 * 
 *
 *
 * \section obstacle_avoidance_examples Obstacle avoidance examples
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
