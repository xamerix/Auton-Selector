#include "main.h"
#include "autons/auton.h"
int autonSelected;
void SoloWP() {

}

void rightSide() {

}

void leftSide() {

}

void skills() {
    
}
void right_button() {
	static bool pressed = false;
  	pressed = !pressed;
  if (pressed) {
	autonSelected++;
  }
    if (autonSelected > 4) {
		autonSelected = 0;
	}
}
void left_button() {
  static bool pressed = false;
  pressed = !pressed;
  if (pressed) {
	autonSelected--;
  }
    if (autonSelected < 0) {
		autonSelected = 4;
	}
}

	

void initAuton() {
    bool autonStarted = false;
	pros::lcd::register_btn2_cb(left_button);
	pros::lcd::register_btn0_cb(right_button);
	while (!autonStarted) {
	switch (autonSelected) {
		case 0:
		pros::lcd::print(2,"Solo Win Point");
		break;
		case 1:
		pros::lcd::print(2, "Solo Win Point");
		break;
		case 2:
		pros::lcd::print(2, "Left Side");
		break;
		case 3:
		pros::lcd::print(2,"Right Side");
		break;
		case 4:
		pros::lcd::print(2,"Skills");
		break;

}
	
	}
}


void autonSelect() {
    switch (autonSelected) {
		case 0:
		SoloWP();
		break;
		case 1:
		SoloWP();
        break;
		case 2:
		rightSide();
		break;
		case 3:
		leftSide();
		break;
		case 4:
		skills();
		break;

}

    
}

