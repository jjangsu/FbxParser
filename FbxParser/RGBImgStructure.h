#ifndef RGBIMGSTRUCTURE_H
#define RGBIMGSTRUCTURE_H
#include "tgaParser.h"	//used for read *.tga, but we failed to get the pixel data from the *.tga image
#include <gl\glut.h>

// the format of texture, *.tga, *.dds, *.bmp
enum eTextureType
{
	TGA,
	DDS,
	BMP,
	UNKNOWN
};

typedef struct __RGBImgStructure{
	unsigned long width;	//width of the texure image
	unsigned long height;	//height
	unsigned char *data;	//data
}RGBImgStructure;

eTextureType getFileSuffix(const char *fileName);

bool loadTGA(const char *fileName, GLuint pTextureObject);
RGBImgStructure* loadBMP(const char *fileName);
bool loadDDS(const char *fileName);

RGBImgStructure* loadTextureImg(const char *fileName,char **argv);

#endif