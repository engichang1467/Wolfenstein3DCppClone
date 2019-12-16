#ifndef TEXTURE_H
#define TEXTURE_H

#include <string> 
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/glut.h>

class Texture
{
    private:
        int id;

    public:
        Texture(std::string fileName);
        Texture(int id);

        void bind();
        int getID();

    private:
        static int loadTexture(std::string fileName);
        
};

#endif