#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl8,  ,               sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: VEX Robotic
Team Members: Thien Tran, Ryan Luong
Date: 3-21-17
Section: Yellow Ninjas


Task Description:


Pseudocode:
Turn Both Motor On > Wait 5 Seconds > Turn Motor Off

*/

task main()
{
	startMotor(rightmotor, 64);
	startMotor(leftmotor, 64);
	wait(5);
	stopMotor(rightmotor);
}
