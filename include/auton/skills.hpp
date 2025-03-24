#pragma once
#include "components.hpp"

void skills() {
    
    conveyor.setInitColor(ConveyorNamespace::Color::RED);
    chassis.setPose(-62.5, 0, 90);

    conveyor.moveToState(ConveyorNamespace::State::FORWARDS, 500);

    pros::delay(400);

    //conveyor.moveToState(ConveyorNamespace::State::FORWARDS, 1500);

    chassis.moveToPoint(-24, 24, 1500, {.maxSpeed = 80}, false);

    conveyor.moveToState(ConveyorNamespace::State::STOP); //added

    chassis.turnToHeading(90, 700, {.maxSpeed = 80}, false);

    chassis.moveToPoint(-50, 24, 2000, {.forwards = false, .maxSpeed = 65});
    chassis.waitUntil(24);

    //first mobile grab
    holder.moveToState(HolderNamespace::State::HOLD);
    //pros::delay(100);

    conveyor.moveToState(ConveyorNamespace::State::FORWARDS, 1500); //no 1500

    chassis.moveDistance(26, 800, {}, false);

    chassis.turnToPoint(-3, 57, 1200, {}, false);
    chassis.moveToPoint(-3, 57, 1500, {.maxSpeed = 80}, false);

    chassis.moveToPose(-62, 47, 270, 4300, {.maxSpeed = 80}, false); //-59
    chassis.turnToHeading(26, 800, {.maxSpeed = 100}, false); //30

    chassis.moveDistance(15, 900, {.maxSpeed = 80}, false);

    chassis.turnToHeading(115, 1000, {.maxSpeed = 100}, false);

    holder.moveToState(HolderNamespace::State::RELEASE);
    conveyor.moveToState(ConveyorNamespace::State::REVERSE, 300);

    // First mobile goal drop
    chassis.moveDistance(-12, 700, {.forwards = false, .maxSpeed = 100}, false);

    chassis.moveToPoint(-48, 48, 1200, {.maxSpeed = 100}, false);

    chassis.turnToHeading(0, 1200, {}, false);

    chassis.correctAt0({"front", "left"});

    chassis.moveToPoint(-48, -7, 2500, {.forwards = false, .maxSpeed = 80});
    chassis.turnToHeading(0, 500, {}, false);

    chassis.correctAt0({"left"});

    chassis.moveToPoint(-48, -24, 1500, {.forwards = false, .maxSpeed = 65});
    chassis.waitUntil(13);

    holder.moveToState(HolderNamespace::State::HOLD);
    pros::delay(100);

    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);

    chassis.turnAndMoveToPoint(-24, -22, 1200, {.maxSpeed = 85}, false);

    chassis.turnAndMoveToPoint(2, -55, 1500, {.maxSpeed = 80}, false);

    chassis.moveToPose(-58, -48, 270, 3000, {.maxSpeed = 80}, false);

    chassis.correctAt270({"front", "left"});

    chassis.turnToPoint(-48, -58, 1000, {.maxSpeed = 90}, false);

    chassis.moveDistance(12, 1000, {.maxSpeed = 80}, false);
    chassis.turnToHeading(70, 1000, {.maxSpeed = 80}, false);
    holder.moveToState(HolderNamespace::State::RELEASE);

    chassis.moveDistance(-12, 500, {.forwards = false, .maxSpeed = 100}, false);
    conveyor.moveToState(ConveyorNamespace::State::REVERSE, 300);

    // Second mobile goal drop
    chassis.moveToPoint(-48, -48, 1000, {.maxSpeed = 100}, false);

    chassis.turnToHeading(90, 800, {.maxSpeed = 100}, false);
    chassis.waitUntilDone();

    chassis.correctAt90({"right"});
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS, 2350);


    chassis.moveToPoint(24, -48, 2000, {.maxSpeed = 70}, false);


    chassis.turnToHeading(90, 600, {.maxSpeed = 127}, false);

    chassis.correctAt90({"front", "right"});

    chassis.turnToPoint(22, -24, 1000, {.maxSpeed = 100}, false);
    conveyor.moveToState(ConveyorNamespace::State::INTAKE_FORWARD);

    chassis.moveToPoint(22, -24, 1000, {.maxSpeed = 80}, false);

    chassis.turnToPoint(48, 0, 800, {.forwards = false, .maxSpeed = 100}, false);
    chassis.moveToPoint(35, -12, 1000, {.forwards = false, .maxSpeed = 100});

    chassis.moveToPoint(48, 0, 2000, {.forwards = false, .maxSpeed = 60});

    chassis.waitUntil(13.5);
    holder.moveToState(HolderNamespace::State::HOLD);

    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.turnToHeading(0, 600, {}, false);
    chassis.correctAt0({"right"});

    chassis.turnAndMoveToPoint(22, 24, 900, {}, false);

    chassis.turnAndMoveToPoint(22, 48, 900, {}, false);

    chassis.turnToHeading(0, 600, {}, false);

    chassis.correctAt0({"front", "right"});
    chassis.turnToHeading(65, 600, {}, false);
    chassis.moveDistance(15, 900, {}, false);
    chassis.moveToPoint(60, 48, 1200, {}, false);
    chassis.turnToHeading(200, 600, {}, false); //180
    chassis.correctAt180({"left"});

    pros::delay(100);
    holder.moveToState(HolderNamespace::State::RELEASE);
    conveyor.moveToState(ConveyorNamespace::State::REVERSE);

    chassis.moveDistance(-15, 700, {.forwards = false, .minSpeed = 100}, false);


    chassis.moveToPoint(48, 30, 1500, {.minSpeed = 100}, false);
    chassis.turnToHeading(160, 800, {}, false);
    chassis.moveDistance(45, 1000, {}, false);
    chassis.turnToHeading(165, 700, {}, false);
    chassis.moveDistance(40, 1000, {}, false);

    intake_raiser.moveToState(HolderNamespace::State::HOLD);

    chassis.moveToPoint(38, -24, 1200, {.forwards = false, .maxSpeed = 100}, false);
    chassis.turnToHeading(135, 700, {}, false);

    hanger.moveToState(HolderNamespace::State::HOLD);
    conveyor.moveToState(ConveyorNamespace::State::STOP);

    chassis.moveDistance(-50, 1500, {.forwards = false, .maxSpeed = 70}, false);

   /*
   conveyor.setInitColor(ConveyorNamespace::Color::RED);
    chassis.setPose(-62, 0, 90);
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    pros::delay(300);
    chassis.moveDistance(14, 600, {.maxSpeed = 127}, false);
    chassis.turnToHeading(180, 900, {.maxSpeed = 90}, false);
    chassis.moveDistance(-24, 1000, {.forwards = false,.maxSpeed = 65}, false); 
    chassis.waitUntil(20);
    holder.moveToState(HolderNamespace::State::HOLD);
    pros::delay(100);
    chassis.turnToPoint(-24, -24, 700, {.maxSpeed = 100}, false);
    chassis.moveToPoint(-24, -24, 1000, {}, false);
    chassis.moveToPoint(24, -48, 1500, {.maxSpeed = 100}, true);
    chassis.waitUntil(20);
    arm.moveToState(ArmNamespace::State::WAIT);
    chassis.waitUntilDone();
    chassis.moveDistance(-24, 1000, {.forwards = false}, false);
    chassis.turnToHeading(0, 800, {}, false);
    chassis.moveDistance(30, 800, {.maxSpeed = 80}, true);
    chassis.waitUntil(5);
    conveyor.moveToState(ConveyorNamespace::State::STOP);
//First Wall State
    chassis.waitUntil(17);
    arm.moveToState(ArmNamespace::State::SCORE_UP);//SCORE_UP
    chassis.waitUntilDone();
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.moveDistance(-15, 800, {.forwards = false}, false);
    chassis.turnToHeading(270, 800, {}, false);
    chassis.correctAt270({ "left"});
    chassis.moveDistance(58, 1500, {.maxSpeed = 80}, false);
    chassis.correctAt270({ "front"});
    chassis.turnToPoint(-48, 60, 600, {}, false);
    chassis.moveToPoint(-48, 60, 800, {}, false);
    chassis.turnToHeading(90, 800, {}, false);

//First Mogo Drop
    holder.moveToState(HolderNamespace::State::RELEASE);
    arm.moveToState(ArmNamespace::State::DOWN, 500);
    chassis.moveDistance(-10, 1000, {.forwards = false, .maxSpeed = 100.}, false);
    chassis.moveToPoint(-48, 48, 1200, {.maxSpeed = 100}, false);
    chassis.turnToHeading(180, 800, {}, false);
    chassis.correctAt180({"front", "right"});
    chassis.moveToPose(-48, 7, 0, 2200, {.forwards = false, .maxSpeed = 120});
    chassis.correctAt180({"right"});
    chassis.moveToPoint(-48, 24, 1100, {.forwards = false, .maxSpeed = 65});
    chassis.waitUntil(13);
    holder.moveToState(HolderNamespace::State::HOLD);
    pros::delay(100);
    chassis.turnToPoint(-24, 24, 700, {.maxSpeed = 100}, false);
    chassis.moveToPoint(-24, 24, 1000, {}, false);
    chassis.moveToPoint(24, 48, 1600, {.maxSpeed = 80}, true);
    chassis.waitUntil(20);
    arm.moveToState(ArmNamespace::State::WAIT);
    chassis.waitUntilDone();
    chassis.moveDistance(-24, 1000, {.forwards = false}, false);
    chassis.turnToHeading(0, 800, {}, false);
    chassis.moveDistance(30, 800, {.maxSpeed = 80}, true);
    chassis.waitUntil(5);
    conveyor.moveToState(ConveyorNamespace::State::STOP);
    chassis.waitUntil(15);

//Second Wall stake
    arm.moveToState(ArmNamespace::State::SCORE_UP);//SCORE_UP
    chassis.waitUntilDone();
    chassis.moveDistance(-10, 1000, {.forwards = false}, false);
    chassis.turnToHeading(270, 800, {}, false);
    chassis.correctAt270({ "right"});
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.moveDistance(58, 1500, {.maxSpeed = 80}, false);
    chassis.correctAt270({ "front"});
    chassis.turnToPoint(-48, 60, 600, {}, false);
    chassis.moveToPoint(-48, 60, 800, {}, false);
    chassis.turnToHeading(90, 800, {}, false);

//Second Mogo drop
    holder.moveToState(HolderNamespace::State::RELEASE);
    chassis.moveDistance(-15, 800, {.forwards = false, .maxSpeed = 80.}, false);
    chassis.moveToPoint(-48, 48, 1000, {.maxSpeed = 127}, false);
    arm.moveToState(ArmNamespace::State::DOWN);
    chassis.turnToHeading(90, 800, {.maxSpeed = 100}, false);
    chassis.waitUntilDone();
    chassis.correctAt90({"left"});
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.moveToPoint(48, 48, 2200, {.maxSpeed = 100}, true);
    chassis.waitUntil(40);
    arm.moveToState(ArmNamespace::State::WAIT);
    chassis.waitUntil(60);
    doinker.moveToState(HolderNamespace::State::HOLD);
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 800, {}, false);
    chassis.correctAt90({"front", "left"});
    chassis.turnToPoint(60, 24, 800, {.forwards = false, .maxSpeed = 100}, false);
    chassis.moveToPoint(60, 24, 1000, {.forwards = false, .maxSpeed = 65}, true);
    chassis.waitUntil(20);
    holder.moveToState(HolderNamespace::State::HOLD);
    conveyor.moveToState(ConveyorNamespace::State::STOP);
    doinker.moveToState(HolderNamespace::State::RELEASE);
    chassis.waitUntilDone();
    chassis.turnToHeading(100, 700, {}, false);
    chassis.moveDistance(-30, 1000, {.forwards = false, .maxSpeed = 100}, true);
    chassis.waitUntil(10);

//Third Mogo Drop
    holder.moveToState(HolderNamespace::State::RELEASE);
    chassis.waitUntilDone();
    chassis.moveToPoint(48, 48, 1000, {.maxSpeed = 120}, false);
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.turnToHeading(0, 800, {.maxSpeed = 100}, false); 
    chassis.correctAt0({"front", "right"});
    chassis.moveToPose(48, 24, 0, 1200, {.forwards = false, .maxSpeed = 100}, false);
    chassis.moveDistance(-24, 1000, {.forwards = false, .maxSpeed = 65}, true);
    chassis.waitUntil(19);
    holder.moveToState(HolderNamespace::State::HOLD);
    pros::delay(100);
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 800, {}, false);
    conveyor.moveToState(ConveyorNamespace::State::STOP);


//Alliance stake
    chassis.moveDistance(7.5, 900, {.maxSpeed = 65}, true);
    chassis.waitUntil(4);
    arm.moveToState(ArmNamespace::State::UP);
    chassis.waitUntilDone();
    chassis.moveDistance(-7.5, 500, {.forwards = false}, false);
    chassis.turnToPoint(24, 24, 700, {}, false);
    arm.moveToState(ArmNamespace::State::DOWN);
    chassis.moveDistance(24, 900, {}, false);
    chassis.turnToHeading(45, 700, {}, false);
    chassis.moveDistance(24, 800, {}, true);
    chassis.waitUntil(20);
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS, 500);
    chassis.waitUntilDone();
    chassis.turnToHeading(-45, 700, {}, false);
    chassis.moveDistance(48, 1300, {}, true);
    chassis.waitUntil(36);
    conveyor.moveToState(ConveyorNamespace::State::FORWARDS);
    chassis.waitUntilDone();
    chassis.turnToHeading(90, 800, {}, false);
    chassis.moveDistance(15, 500, {}, false);
    chassis.correctAt90({"front", "right"});
    chassis.turnToHeading(30, 800, {}, false);
    chassis.moveDistance(15, 500, {}, false);
    chassis.turnToHeading(135, 500,{}, false);

//Forth mogo drop
    holder.moveToState(HolderNamespace::State::RELEASE);
    chassis.moveDistance(-15, 500, {.forwards = false}, false);
    chassis.moveDistance(30, 600, {}, true);
    chassis.waitUntil(20);
    arm.moveToState(ArmNamespace::State::SCORE_UP);//Score UP
    chassis.waitUntilDone();
    chassis.turnToHeading(135, 600, {}, false);

//Hanging
    chassis.moveDistance(-35, 1200, {.forwards = false, .maxSpeed = 70}, false);
    */
}