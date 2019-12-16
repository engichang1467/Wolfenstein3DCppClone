#ifndef MESH_H
#define MESH_H

#include <string> 
#include <stdbool.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/glut.h>
#include "Vertex.h"

class Mesh
{
    private:
        int vbo, ibo, size;

    public:
        Mesh(std::string fileName);
        Mesh(Vertex *vertices, int *indices);
        Mesh(Vertex *vertices, int *indices, bool calcNormals);

        void draw();
        

    private:
        void initMeshData();
        void addVertices(Vertex *vertices, int *indices, bool calcNormals);
        void calcNormals(Vertex *vertices, int *indices);
        Mesh loadMesh(std::string fileName);
};

#endif