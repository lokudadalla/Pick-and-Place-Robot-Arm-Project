<h1>Pick-and-Place Robot Arm</h1>

<p>This repository contains the code and documentation for the <strong>Pick-and-Place Robot Arm</strong>, developed as part of the Robotics Mini Project for EN3563.</p>

<h2>Overview</h2>

<p>This project involves designing and implementing a 5-DOF robotic arm for a simple pick-and-place task. The robot uses servo motors to perform pre-programmed movements based on predefined positions.</p>

<h2>Features</h2>
<ul>
  <li><strong>5 Degrees of Freedom (DoF) robotic arm.</strong></li>
  <li><strong>Hardcoded functionality</strong> to pick and place objects based on pre-defined angles and positions.</li>
  <li><strong>Kinematics analysis</strong>, including:
    <ul>
      <li><strong>Denavit-Hartenberg (DH) parameterization</strong> for defining kinematic parameters.</li>
      <li><strong>Forward kinematics</strong> for determining the end-effector's position and orientation.</li>
      <li><strong>Inverse kinematics</strong> for calculating joint angles to achieve desired end-effector positions.</li>
      <li><strong>Jacobian analysis</strong> to compute joint velocities.</li>
    </ul>
  </li>
</ul>

<h2>How It Works</h2>
<ol>
  <li>The robotic arm executes pre-programmed movements based on hardcoded positions.</li>
  <li>Objects are sorted according to predefined logic for specific positions.</li>
  <li>Asynchronous control ensures smooth transitions and efficient movements.</li>
</ol>

<h2>Contributors</h2>
<ul>
  <li><strong>Abewickrema A.S.J.</strong></li>
  <li><strong>Botheju W.G.W</strong></li>
  <li><strong>Lokudadalla L.D.S.D</strong></li>
</ul>
