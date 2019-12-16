#ifndef VECTOR2F_H
#define VECTOR2F_H

class Vector2f
{
    private:
        float x, y;

    public:
        Vector2f(float x, float y);
        float length();
        float dot(Vector2f r);
        Vector2f normalized();
        Vector2f rotate(float angle, Vector2f axis);
       
        Vector2f add(Vector2f r);
        Vector2f add(float r);
        Vector2f sub(Vector2f r);
        Vector2f sub(float r);
        Vector2f mul(Vector2f r);
        Vector2f mul(float r);
        Vector2f div(Vector2f r);
        Vector2f div(float r);

        Vector2f abs();

        char toString();

        float getX();
        void setX(float x);
        float getY();
        void setY(float y);


};

#endif