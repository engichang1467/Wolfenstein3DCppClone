#ifndef BITMAP_H
#define BITMAP_H

#include <string>

class Bitmap
{
    private:
        int width, height;
        int pixels[100];

    public:
        Bitmap(std::string fileName);
        Bitmap(int width, int height);

        Bitmap flipX();
        Bitmap flipY();

        int getWidth();
        int getHeight();
        int *getPixels();
        int getPixel(int x, int y);
        void setPixel(int x, int y, int value);
};

#endif