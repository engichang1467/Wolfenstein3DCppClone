#ifndef VERTEX_H
#define VERTEX_H

#include "Vector3f.h"
#include "Vector2f.h"

#define SIZE 8

class Vertex
{
    private:
        Vector3f pos, normal;
        Vector2f texCoord;

    public:
        Vertex(Vertex3f pos);
        Vertex(Vector3f pos, Vector2f texCoord);
        Vertex(Vector3f pos, Vector2f texCoord, Vertex3f normal);

        Vertex3f getPos();
        void setPos(Vector3f pos);
        Vector2f getTexCoord();
        void setTexCoord(Vector2f textCoord);
        Vector3f getNormal();
        void setNormal(Vector3f normal);
};

#endif