#include "thetalib.h"


int olympiacos[6], panathinaikos[6];


int difference[6];


int olympiacosWins, panathinaikosWins;


const int scoreBoardSize = 6;


void allocateScores() {

	
	
	
	
	
	
	
	
	
	
	
	
	olympiacosWins = 0;
	panathinaikosWins = 0;
	olympiacos[0] = 1;
	panathinaikos[0] = 2;
	olympiacos[1] = 3;
	panathinaikos[1] = 0;
	olympiacos[2] = 2;
	panathinaikos[2] = 2;
	olympiacos[3] = 1;
	panathinaikos[3] = 3;
	olympiacos[4] = 4;
	panathinaikos[4] = 2;
	olympiacos[5] = 2;
	panathinaikos[5] = 1;

}


void calculateDifference(int o[], int p[]) {
	int j, j_out;


	
	
		
	for(int i = 0; i<scoreBoardSize; i++){

	
		
	if(o[i] == p[i]){
	
	difference[i] = 0;
		continue;

	}


		
	if(o[i] > p[i]){
	difference[i] = o[i] - p[i];
	}
	else{
	difference[i] = p[i] - o[i];
	}


	}


	j = 0;
	j_out = 0;
		
	while(j != scoreBoardSize){
		
	
	
	
	
	
	writeStr("Score difference for match '");

	j_out = j + 1;
	writeInteger(j_out);

	writeStr("' : ");

	writeInteger(difference[j]);

	writeStr("\n");

	j+=1;
	}

}


void calculateWins(int o[], int p[]) {

	
	
	
	
		
	for(int i = 0; i<scoreBoardSize; i++){

	
		
	if(o[i] == p[i]){
		continue;

	}


		
	if(o[i] > p[i]){
	olympiacosWins = olympiacosWins + 1;
	}
	else{
	panathinaikosWins = panathinaikosWins + 1;
	}


	}


	writeStr("\n--> Olympiacos Wins: ");

	writeInteger(olympiacosWins);

	writeStr("\n--> Panathinaikos Wins: ");

	writeInteger(panathinaikosWins);

	writeStr("\n");


}


void printScores(int o[], int p[]) {
	int j;


	
	j = 0;
	writeStr("\n");

		
	for(int i = 0; i<scoreBoardSize; i++){

	
	
	
	
	
	
	
	writeStr("Score for match '");

	j = i + 1;
	writeInteger(j);

	writeStr("' : ");

	writeInteger(o[i]);

	writeStr(" - ");

	writeInteger(p[i]);

	writeStr(" \n");

	}


}


void calcAvgScorePerTeam(int o[], int p[]) {
	double totalOlymp, totalPanath;


	
	
	
	
	
	
	
		
	for(int i = 0; i<scoreBoardSize; i++){

	
	totalOlymp+=o[i];
	totalPanath+=p[i];
	}


	totalOlymp/=6;
	totalPanath/=6;
	writeStr("\nAVG Score for Olympiacos: ");

	writeScalar(totalOlymp);

	writeStr("\n");

	writeStr("AVG Score for Panathinaikos: ");

	writeScalar(totalPanath);

	writeStr("\n");

}


void main(){

	
	
	
	allocateScores();
	printScores(olympiacos, panathinaikos);
	calculateDifference(olympiacos, panathinaikos);
	calculateWins(olympiacos, panathinaikos);
	calcAvgScorePerTeam(olympiacos, panathinaikos);

}

