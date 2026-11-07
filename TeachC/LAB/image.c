#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;

}pixel;

typedef struct 
{
    int width ;
    int height;
    pixel *data;
    
}Image ;

Image *createImage (int width , int height ){

    Image * img =malloc(sizeof(Image));
    img->width= width;
    img->height=height;
    img->data= malloc(height * width* sizeof(pixel));

    return img;

}

void free_img (Image * img){
    if(img != NULL){
        free(img->data);
        free(img);
    }
    return;
}

int main (){
    Image *img = createImage(3, 2);

    img->data[0].r = 255;
    img->data[0].g = 0;
    img->data[0].b = 0;

    printf("Width: %d\n", img->width);
    printf("Height: %d\n", img->height);

    printf("Pixel 0: R=%d G=%d B=%d\n",
           img->data[0].r,
           img->data[0].g,
           img->data[0].b);

    free_img (img);


    return 0;
}     