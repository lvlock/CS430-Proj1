#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
	// Open the file
	FILE * infile;
	infile = fopen(P3image.ppm, "r");
	// Check if file is null
	if(infile == NULL) {
		fprintf(stderr, "Error: Error in opening the file.\n");		
	}
	// Check if file is ppm file
	int c = fgetc(infile);
	if (c != 'P') {
		fprintf(stderr, "Error: This is not a PPM file.\n");
	}
}