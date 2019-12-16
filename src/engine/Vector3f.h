#ifndef VECTOR3F_H
#define VECTOR3F_H

class Vector3f
{
    private:
        float x, y, z;
    
    public:
        Vector3f(float x, float y, float z);
        float length();
        float dot(Vector3f r);
        Vector3f cross(Vector3f r);
        Vector3f normalized();
        Vector3f rotate(float angle, Vector3f axis);
       
        Vector3f add(Vector3f r);
        Vector3f add(float r);
        Vector3f sub(Vector3f r);
        Vector3f sub(float r);
        Vector3f mul(Vector3f r);
        Vector3f mul(float r);
        Vector3f div(Vector3f r);
        Vector3f div(float r);

        Vector3f abs();

        char toString();

        float getX();
        void setX(float x);
        float getY();
        void setY(float y);
        float getZ();
        void setZ(float z);


};

#endif
