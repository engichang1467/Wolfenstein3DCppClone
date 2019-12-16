#ifndef BASICSHADER_H
#define BASICSHADER_H

#include "Shader.h"
#include "Material.h"

class BasicShader
{
    private:
        static BasicShader instance;
        // static final BasicShader instance = new BasicShader();

    public:
        void updateUniforms(Matrix4f worldMatrix, Matrix4f projectMatrix, Material material);

    private:
        BasicShader();
};

#endif