#Lesson 1#

Convolutional neural networks are all about convolutions! So we better know what those are.

Convolutions are how we apply a small filter or kernel to an image to create a new, different image. Each pixel in the output image is a weighted sum of a few, nearby pixels in the input image. The weights are determined by the filter we are using:

![Convolution](https://camo.githubusercontent.com/709b7f5eb5203b41f9456f887787b6ea790878b5/68747470733a2f2f636f6d6d756e6974792e61726d2e636f6d2f6366732d66696c652f5f5f6b65792f636f6d6d756e6974797365727665722d626c6f67732d636f6d706f6e656e74732d7765626c6f6766696c65732f30302d30302d30302d32302d36362f343738362e636f6e762e706e67)

##Readings##

- [Wikipedia: Kernel\_\(image\_processing\)](https://en.wikipedia.org/wiki/Kernel\_\(image_processing\))
- Google "Image Convolution" and read some other things (if you want)

##Implement it!##

I've provided code to load images and display them for you. Run:

    ./filter dog.jpg

and the program will load the image and display it (if you have OpenCV).

Read through `src/image.h` and make sure you know how we define an `image` and what functions I provide. Basically it's just a record of the width, height, and number of channels in an image, and also the pixel values for every pixel. Images pixels are arranged in CHW format. This means in a 3 channel image with width 400 and height 300, the first 400 values are the 1st row of the 1st channel of the image. The second 400 pixels are the 2nd row. after 120,000 values we get to pixels in the 2nd channel, and so on. Also, look through `src/image.c` a little bit and see the provided functions work.

Write a function that will take an image and a convolution and return a new image. The new image should be the filter applied to the input image.

Run your function on different filters and images and see what happens!

Things to think about:

- What are the benefits of only looking at nearby pixel during filtering? What information do we lose?
- What should we do at the edges? Either the output image can be slightly smaller (why?) or you can pad with some value.
- What constraints are there on valid filters for a given image?
