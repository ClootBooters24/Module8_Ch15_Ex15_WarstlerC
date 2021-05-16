class Rectangle
{
public:
    Rectangle();
    void setDimensions(double, double);
    double calcArea();
    double calcPerimeter();
private:
    double length;
    double width;
};

//implementation section
Rectangle::Rectangle()
{
    length = 0.0;
    width = 0.0;
}  //end of default constructor

void Rectangle::setDimensions(double len, double wid)
{
    //assigns dimensions to private data members
    if (len > 0.0 && wid > 0.0)
    {
        length = len;
        width = wid;
    }  //end if
}  //end of setDimensions method

double Rectangle::calcArea()
{
    return length * width;
}  //end of calcArea method

double Rectangle::calcPerimeter()
{
    return (length + width) * 2;
}  //end of calcPerimeter method
