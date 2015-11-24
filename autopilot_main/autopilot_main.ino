//include the necessary libraries
//initialize any global variables

void setup() {
  //begin communicating over serial and I2C
  //set up the sensors
    //set up the barometer, bmp180
    //set up the IMU, mpu6050
    //set up the magnetometer, hmc5883l
    //set up the gps
    //set up the airspeed sensor
  //ensure the aircraft is not moving and zero all the sensors
  //determine initial location and orientation
  //output initialization status (over serial or using leds)
}

void loop() {
  int z = 0;
  //The following items must be performed, but not at the same frequency
    //interpret external commands
      //determine flight mode (manual, assisted manual, gps waypoint, dead reckoning, 
      //  path following, object following, return to home, etc)
      //gather necessary inputs for current mode
    //update desired location and orientation
      //pass the inputs for the current mode to the function for that mode
      //the function will return a desired location and orientation
    //gather sensor data
      //get baro
      //get IMU
      //get mag
      //get gps
      //get airspeed
    //update location and orientation estimate
      //run sensor fusion for orientation
      //run kalman for location
    //update desired location and orientation
    //determine necessary control actuations
    //actuate controls
}
