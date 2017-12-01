#include "image.h"

image convolve(image im, image kernel)
{
    return copy_image(im);
}

int main(int argc, char **argv)
{

    image kernel = make_image(3,3,3);   

    if(argc > 1){
        image im = load_image(argv[1]);
        image result = convolve(im, kernel);
        show_image(result, "result");
    }
    return 0;
}
