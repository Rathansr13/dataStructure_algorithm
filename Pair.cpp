template<typename T>
class pair{
T x;
T y;

public:

void setX(T x)
{
    this->x=x;

}

void setY(T y)
{
    this->y=y;

}


T getX()
{
    return x;
}

T getY()
{
    return y;
}

};