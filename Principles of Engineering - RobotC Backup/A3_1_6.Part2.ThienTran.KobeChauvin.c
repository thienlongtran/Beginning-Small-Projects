
#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl8,  ,               sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: VEX Robotic
Team Members: Thien Tran, Kobe Chauvin
Date: 4-7-17
Section: The Bananas


Task Description:


Pseudocode:
Start Left Motor Clockwise > When Limit Switch Pressed Start Counterclockwise For 0.5 Seconds Then Go Back

*/

task main(){
  while (true){
    if (SensorValue(limitswitch) == 1){ //Wait For When Limit Switch Pressed
      startMotor(leftmotor, -30) //Start Negative Direction When Limit Switch Pressed
      wait(0.5) //Waits 0.5 Seconds
      startMotor(leftMotor, 30) //Makes Motor Goes Positive Direction To Motor
    }
    else{
    	startMotor(leftMotor, 30) //Starts Motor
    }
  }
}