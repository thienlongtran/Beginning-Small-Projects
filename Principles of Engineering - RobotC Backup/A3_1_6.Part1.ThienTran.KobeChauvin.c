
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
Start Left Motor Clockwise for 0.5 Seconds > Start Left Motor Counter Clockwise for 0.5 Seconds > Repeat 20 Times

*/

task main(){
	int count; //Define Variable "Count"
	count = 0; //Make Variable Count Equal 0

	while(count < 20){ //Loop While Variable Count Is Less Than 20
	startMotor(leftMotor, 127) //Start Motor CW
	wait(0.5) //Wait 0.5 Seconds
	stopMotor(leftMotor)//Stop Motor
	startMotor(leftMotor, -127)//Start Motor CCW
	wait(0.5) //Wait 0.5 Seconds
	stopMotor(leftMotor) //Stop Motor
	count = count + 1 //Return The Sum of Count + 1 To Varialbe Count
}
}
