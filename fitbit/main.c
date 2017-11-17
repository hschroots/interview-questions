
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


//given an input from stdin of the following format
//3
//3
//0xFABC4
//0xFNCb3
//0xhfnd8
//
//read in the pixel values which are in RGBA8888 format
//
//write a function that converts the RGBA8888 format into RGB565 format
//
//original color values are truncated by taking the most significant bits
//
//

//@param dst_data
//	pointer to where convereted data is stored once it is in RGB565 format
//
//@param src_data
//	pointer to where current image data is located in RGBA888 format
//
//@para width
//	number of pixels across the screen
//
//@param height
//	number of pixels rows
//
//@param stride
//	number of bytes per row of pixels
//
//@return int
//	The new stride (number of bytes in row) after converting to RGB565. Must be 4 byte aligned
//

typedef union
{
	struct
	{
		uint8_t red;
		uint8_t green;
		uint8_t blue;
		uint8_t alpha;
	}
	uint32_t;
}rgba888_u;

int convertRGBA8888toRGB565(uint8_t* dst_data, uint8_t* src_data, uint16_t width, uint16_t height, uint16_t stride)
{

}

int main(void)
{
	uint16_t width;
	scanf("%hu\n", &width);

	uint16_t height;
	scanf("%hu\n", &height);


	uint8_t * image = (uint8_t*)malloc(width * height * 4 );
	uint16_t stride = width * 4;

	uint32_t pixel_val;
	uint32_t * pixel = (uint32_t*)image;

	while( scanf("%[^\n]%*c", pixel) )
	{
		pixel++;
	}


	int pad = width % (4/sizeof(rgba8888_uu));

	uint8_t* dst_data = (uint8_t*)malloc((width * height * 2
	int new_strid =	convertRGBA8888toRGB565(
}
