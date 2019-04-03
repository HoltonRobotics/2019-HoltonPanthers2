

#include <kipr/botball.h>
#include <stdio.h>
#define left_motor 0 // used so that we can write left motor instead of 0
#define right_motor 1 // used so that we can write right motor instead of 1 so we are less likely to mix them up

int Turn (int milliseconds) // function for turning left/right (+ = left, - = right)
{
    if (milliseconds > 0) // if we are turning to the right
    {
    	mav(right_motor, 530); // moving right motor
	mav(left_motor, -500); // moving left motor
	msleep(milliseconds); // it will turn for however many milliseconds we plug in
    }
    if (milliseconds < 0) // if we are turning to the left
    {
        mav(right_motor, -530); // moving right motor
        mav(left_motor, 500); // moving left motor
        msleep(-milliseconds); // it will turn for however many milliseconds we plug in
    }
    return 0;
}
int forward (int milliseconds) // moving forward/backward; negative milliseconds backwards, positive milliseconds means forwards
{
    if (milliseconds < 0) // moving backwards
    {
   	 mav(right_motor, 530); // moving right motor
	 mav(left_motor, 500); // moving left motor 
	 msleep(-milliseconds); // it will move forward for however many milliseconds we plug in
    }
    if (milliseconds > 0) // moving forwards
    {
        mav(right_motor, -530); // moving right motor 
        mav(left_motor, -500); // moving left motor; v would be the same here as it would be up there
        msleep(milliseconds); // it will move backwards for however many milliseconds we plug in
    }
    return 0;
}


int gate (int open) // creating a function to open the door or close it; positive means that it is opening, negative means that it is closing
{
	if (open > 0) // to open the door
		{
		enable_servos(); // turns servos on
		set_servo_position(0, 0); // opens the door
        msleep(1200); // gives time for servos to move
		disable_servos(); // turns servos off
		}
	if (open < 0) // to close the door
		{
		enable_servos(); // turns servos on
		set_servo_position(0, 897); // closes the door
        msleep(1200); // gives time for servos to move
		}
	return 0; 
}
int main()
{
   //	wait_for_light(2);
   // printf("I can see the light! \n");
   // shut_down_in(118);
    gate(-1);
   forward(3400); // to help move robot out of starting box
    Turn(1250); // turn so that it is facing perpendicular to the to the right
    forward(4450); // moving robot so that it is in line with the first skybridge
    gate(1); // opening gate
	Turn(-1700); // turning robot so that it is facing the first skybridge
    mav(left_motor, -500);
    mav(right_motor, -532);
    msleep(800);
    Turn(-10);
    forward(10300);
    forward(-100);
		gate(-1); // closes door
   	msleep(6500); // gives door time to close
   Turn(-2400);
    forward(5250);
    Turn(2400);
    forward(4400);
    gate(1);
    forward(-100);
    msleep(4400);

	

return 0;
}
