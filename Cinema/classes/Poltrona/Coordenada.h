#ifndef COORDENADA_H
#define COORDENADA_H


class Coordenada
{
public:
    Coordenada();
    ~Coordenada();
    int getX();
    void setX(int x);
    char getY();
    void setY(char y);

protected:

private:
    int x;
    char y;
};

#endif // COORDENADA_H
