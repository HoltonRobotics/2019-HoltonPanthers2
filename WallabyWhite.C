//global variables:
const int motorPortLeft = 0;
const int motorPortRight = 2;

//global functions
//turning Right
int turnRight (int degrees) {
	int turnTicks = degrees * [number to test]; 
mav(motorPortLeft, 50);
mav(motorPortRight, -50);
msleep(turnTicks); 
return 0;
}

//turning Left
int turnLeft (int degrees) {
	int turnTicks = degrees * [number to test]; 
mav(motorPortLeft, -50);
mav(motorPortRight, 50);
msleep(turnTicks); 
return 0;
}

//moving in a straight line
int driveStraight (int centimeters) {
if (centimeters > 0) {
int forwardTicks = centimeters * [number to test]; 
mav(motorPortLeft, 50); //velocities might have to change to adjust driving straight
mav(motorPortRight, 50); //velocities might have to change to adjust driving straight
msleep(forwardTicks); 
}
else if (centimeters == 0) {
printf("did you mean to move 0 cm?");
}
else {
	int backwardTicks = -1 * centimeters * [number to test]; 
mav(motorPortLeft, -50); //velocities might have to change to adjust driving straight
mav(motorPortRight, -50); //velocities might have to change to adjust driving straight
msleep(backwardTicks); 
}
return 0; 
}


//main script with placeholders for cube grabber
int main (){
	//light sensor to be included later
	
//Move from start box to pipe (I need specific movements)
//Use arm to move first block to far holding area
//Use arm to move second block to far holding area
//Use arm to move third block to far holding area
//Use arm to move fourth block to near holding area
//Use arm to move fifth block to near holding area
//Move ambulance? (I need specific movements)

return 0;
}
