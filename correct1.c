#include "thetalib.h"


const double ANOREXIC = 15.0;


const double UNDERWEIGHT = 18.5;


const double IDEAL = 24.9;


const double OVERWEIGHT = 25.9;


const double OBESE = 30.1;


int height, age;


double weight;


double calcBMI(int h, int ag, double w) {
	
	return (pow(100,2) * w) / (pow(h,2));



}


void printResult(double bmi) {

	
	
	
	
	
	
	
	writeStr("Your BMI is: ");

	writeScalar(bmi);

	writeStr("\n");

		
	if(bmi <= ANOREXIC){
	
	writeStr("You are Anorexic...\n");

		
	return;


	}


		
	if(bmi > ANOREXIC && bmi <= UNDERWEIGHT){
	
	writeStr("You are Underweight...\n");

		
	return;


	}


		
	if(bmi > UNDERWEIGHT && bmi <= IDEAL){
	
	writeStr("You are Ideal...\n");

		
	return;


	}


		
	if(bmi > IDEAL && bmi <= OVERWEIGHT){
	
	writeStr("You are Overweight...\n");

		
	return;


	}


		
	if(bmi > OVERWEIGHT && bmi <= OBESE){
	
	writeStr("You are Obese...\n");

		
	return;


	}


		
	if(bmi > OBESE){
	writeStr("Limit reached...\n");

	}



}


void main(){
	double bmi_local;


	
	
	
	
	
	
	writeStr("Enter you height: ");

	height = readInteger();

	writeStr("Enter you age: ");

	age = readInteger();

	writeStr("Enter you weight(xx.x): ");

	weight = readScalar();

	bmi_local = calcBMI(height, age, weight);
	printResult(bmi_local);
}

