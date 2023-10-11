#include <iostream>
class Shape
{
    protected:
        std::string name;
        float width;
        float height;
    public:
        Shape():width(0),height(0)
        {

        }
    virtual void Draw(void)=0;
};
class Circle:public Shape
{
    private:
        float redius;
    public:
    Circle():redius(0)
      {}
    Circle(float r)
    {
        redius=r;
    }
    void Draw(void)
    {
        float area= (3.14*redius*redius);
        std::cout<<"Area of Circle with Radius "<<redius
        <<" cm is "<<area<<std::endl;
    }
};
class Rectangle :public Shape
{
    public:
        Rectangle(float w,float h)
        {
            width=w;
            height=h;
        }
    void Draw(void)
    {
        float area = width*height;
        std::cout<<"Area of Rectangle with width "<< width<<" and "
        <<height<<" cm is "<<area<<std::endl;
    }
};
class Triangle:public Shape
{
    public:
     Triangle(float w,float h)
     {
        width=w;
        height=h;
     }
     void Draw(void)
     {
        int area = 0.5*width*height;
        std::cout<<"Area of Triangle with width "<< width<<" and "
        <<height<<" cm is "<<area<<std::endl;
     }
};
int main(void)
{
  Shape *sh_ptr;
  Circle c1(10.5);
  sh_ptr=&c1;
  sh_ptr->Draw();
  Rectangle r1(15.2,7.8);
  sh_ptr=&r1;
  sh_ptr->Draw();
  Triangle t1(2.4,7.5);
  sh_ptr=&t1;
  sh_ptr->Draw();

    return 0;
}