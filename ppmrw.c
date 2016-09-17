#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rgbapixel{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
} RGBApixel

/*  RGBApixel **pixmap;
	pixmap = new RGBApixel * [height];
	pixmap[0] = new RGBApixel[width * height];
	for (int i = 1; i < height; i++)
		pixmap[i] = pixmap[i - 1] + width;
*/

// P3 is in ASCII 
void P3reader(unsigned int *pixmap, int width, int height) {
	
}

// P6 is in rawbits
void P6reader(unsigned int *pixmap, int width, int height) {
	
}

void main(int argc, char *argv[]) {
	// Open the file
	FILE * infile;
	infile = fopen(P3image.ppm, "r");
	// Check if file is null
	if(infile == NULL) {
		fprintf(stderr, "Error: Error in opening the file.\n");		
	}
	// Check if file is ppm file
	int first_byte = fgetc(infile);			// This should advance the pointer to the next bit, the number
	if (first_byte != 'P') {
		fprintf(stderr, "Error: This is not a PPM file.\n");
	}
	
	// Check if ppm file is P3 or P6
	int magic_num = fgetc(infile);
	if (magic_num == '3') {
		// call P3 reader function
		
	else if (magic_num == '6') {
		// call P6 reader function
		
	} else {
		fprintf(stderr, "Error: Not a P3 or P6 file.\n")
	}
}