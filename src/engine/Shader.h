#ifndef SHADER_H
#define SHADER_H

#include <unordered_map>
#include <string> 
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/glut.h>
#include "Matrix4f.h"

class Shader
{
    private:
        int program;
        std::unordered_map<std::string, int> uniforms;

    public:
        Shader();
        void bind();
        void updateUniforms();
        void addUniform(std::string uniform);
        
        void addVertexShaderFromFile(std::string text);
        void addGeometryShaderFromFile(std::string text);
        void addFragmentShaderFromFile(std::string text);
        
        void addVertexShader(std::string text);
        void addGeometryShader(std::string text);
        void addFragmentShader(std::string text);
        
        void compileShader();

        void ssetUniformi(std::string uniformName, int value);
        void ssetUniformf(std::string uniformName, float value);
        void ssetUniform(std::string uniformName, Vector3f value);
        void ssetUniform(std::string uniformName, Matrix4f value);

    private:
        void addProgram(std::string text, int type);
        static std::string loadShader(std::string fileName);
};

#endif