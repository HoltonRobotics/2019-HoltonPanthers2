#include <kipr/botball.h>

void Forward (double distance) {
    set_create_distance(0);
    double actualDIST = 0;
    while (actualDIST<distance) {
        create_drive_direct(70, 70);
        msleep(50);
        //printf("%lf\n", actualDIST);
        actualDIST=(double) get_create_distance();
    }   
    printf("final distance is :%lf\n", actualDIST);
}

void Backwards (double distance) {
set_create_distance(0);
    double actualDIST = 0;
    while (actualDIST>distance) {
    create_drive_direct(-70, -70);
        msleep(50);
        //printf("%lf\n", actualDIST);
        actualDIST=(double) get_create_distance();
    }
    printf("final distance is :%lf\n", actualDIST);
}

void Turn_Left (double angle) {
    set_create_total_angle(0);
    double actualANG = 0;
    while (actualANG<angle) {
    create_drive_direct (-70, 70);
   msleep(50);
    //printf("%lf\n", actualANG);
    actualANG=(double) get_create_total_angle();
    }
    printf("final angle is :%lf\n", actualANG);
}

void Turn_Right (double angle) {
set_create_total_angle(0);
    double actualANG = 0;
    while (actualANG>-angle) {
        create_drive_direct (70, -70);
        msleep(50);
        //printf("%lf\n", actualANG);
        actualANG=(double) get_create_total_angle();
    }
    printf("final angle is :%lf\n", actualANG);
}
  const int pause=100; //the msleeps easier to edit
int main()
{
    wait_for_light(2); //calibrate light
    printf("I see the light!/n"); 
    shut_down_in(118); //sets shutdown
    
    create_connect(); //STARTING POSITION: with designated ruler, match 8 inches tape mark(on robot) with approx. 8 inches on ruler
      create_full(); // disables safety features 
    
    
    //taking the small yellow cube on the beginning tape and longy yellow to the farthest zone
    Turn_Left(170);
    Forward(170);
    msleep(pause);
    //Turn_Left(40);
    //msleep(50);
    //Forward(160);
    //msleep(50);
    Turn_Left(80);
    msleep(pause);
    Forward(560); // moves towards longy-yellow,, edit this value if running into hospitals
    printf("hopefully not as forward as before\n"); 
    msleep(pause);
    Turn_Right(85);
    msleep(pause);
    Forward(400);//moves to furthest zone delivering block yellow and longy yellow
    msleep(pause);
    Turn_Right(10);//drops off block yellow and longy yellow
    printf("brenda stop being annoying\n");
    msleep(pause);
    Turn_Left(10);
    msleep(pause);
    Backwards(-480);
    printf("is it hitting the blue spot????????????????????????????????\n");
    msleep(pause);
    
    //get blue block out of the way
    Turn_Left(40);
    printf("brenda be happy\n");
    msleep(pause);
    Forward(150);//change this value and other one to fix if arm is stuck on blue block
    msleep(pause);
    Turn_Right(40);
    msleep(pause);
    Backwards(-270);//this is the other value 
    msleep(pause);
    create_drive_direct(0,100);
    msleep(3500);//if anyone wants to actually math this out they are welcome to but it works either way so yolo
    printf("turn aroud axis???\n");
    Backwards(-300);//get that annoying blue block OUT OF THE WAY 
    //Forward(300);
    msleep(pause);
    
    //whack-a-mole process with yellow block canister
    create_drive_direct(0,-100);
    msleep(1500); //again people are welcome to math it out, but this isn't supposed to be exactly 90 deg or perpendicular
    printf("did it work????\n"); 
    Forward(100); 
    msleep(pause);
    Turn_Right(60);
    msleep(pause);
    //Forward(50);
    printf("please work!!!!!\n");
    Turn_Left(110);
    msleep(pause);
    Turn_Right(110);
    msleep(pause);
    Turn_Left(110);
    msleep(pause);
    Turn_Right(110);
    msleep(pause);
    Turn_Left(110);
    printf("whack a mole [-_-]\n"); 
    
    
    msleep(pause);
    
    
    //go to the firefighter pole and get firefighters
    
    
    /*Turn_Left(90); //Turn Left 90
    msleep(50); // pause for 50 millisec. 
    Forward(100); // goes forward 
    msleep(50); // pause for 50 millisec. 
    Turn_Right(90); // turns at a 90 degree angle 
    msleep(50);
    Forward(50);
    msleep(50);
    Turn_Right(45);
    msleep(50);
    Forward(50);
    msleep(50);
    Turn_Left(45); 
    msleep(50);
    Forward(100);
    msleep(50);
    Turn_Right(45);
    msleep(50); 
    Forward(100);
    msleep(50); 
    Turn_Right(180);
    msleep(50);
    Forward(100); 
    msleep(50);
    Turn_Right(120);
    msleep(50);
    Forward(200);
    msleep(50);*/

    
    printf("Hello World\n");
    create_disconnect();
    return 0;
}
 
