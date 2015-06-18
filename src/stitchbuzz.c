/*
 ============================================================================
 Name        : stitchbuzz.c
 Author      : Simon J Hickinbotham
 Version     :
 Copyright   : 2014
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	const int fnl = 1000,maxl=1000;
	char line[maxl];
	FILE *hfp,*pfp,*sfp;
	char splitfn[fnl],popfn[fnl],sppfn[fnl];

	const int sppstep = 10000000;	//TODO: read this from the config file
	int lives = 8; 					//TODO: read this from the config file

	printf("Analysing splitstory.dat\n");
	sprintf(splitfn,"%s/splitstory.dat",argv[1]);
	if((hfp=fopen(splitfn,"r"))==NULL){
		printf("Unable to open file %s\n..exiting...\n",splitfn);
		return 1;
	}
	else{
		/* Let's count the lines */

		while((fgets(line,maxl,fp))!=NULL){
			lives++;
		}
		printf("Found %n runs - there should be this many popdy files\n");

		//OK, now we can think about how to join...

	}

	/* We have to repair the numbering system for each `epoch'. Need to find a


	return EXIT_SUCCESS;
}
