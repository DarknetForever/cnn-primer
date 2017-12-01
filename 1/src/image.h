#ifndef IMAGE_H
#define IMAGE_H

typedef struct {
    int w;
    int h;
    int c;
    float *data;
} image;

image load_image(char *filename);
image make_image(int w, int h, int c);
image copy_image(image p);
void show_image(image p, const char *name);
void save_image(image im, const char *name);
void free_image(image m);

#endif

