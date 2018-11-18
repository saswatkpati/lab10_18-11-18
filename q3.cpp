#include <iostream>
using namespace std;

//Class named Rectangle
class Rectangle 
{
	public:
	// Constructor class
	Rectangle(double L=1, double W=1);
	double getLength() const; 
	void setLength(double L);
	double getWidth(double W) const;
	void setWidth (double W);
	void calculatePerimeter() 
	//perimeter
	{perimeter = ((2*(length + width)));}
	double getPerimeter() const {return perimeter;}
	void calculateArea()
	//area
	{area = width * length;} 
	float getArea()const {return area;}
	   
	private:
	double length, width, area, perimeter, x, y;
};

Rectangle::Rectangle(double L, double W) 
{
	calculateArea();
	calculatePerimeter();
}

void Rectangle::setWidth(double W)
{
	//asking for input data
	cout << "Enter the width of your rectangle: \n";
	cin >> W;	
}

float Rectangle::getWidth(double W)const
{
	return width;
}

void Rectangle::setLength(double L)
{
	//asking for input data
	cout << "Enter the length of the rectangle: \n";
	cin >> L;
}

float Rectangle::getLength()const
{
	return length;
}

//main function
int main() 
{
	Rectangle MyRectangle;
	double length = 0.0;
	double width = 0.0;

	MyRectangle.setWidth(width);
	MyRectangle.getWidth();
	MyRectangle.setLength(length);
	MyRectangle.getLength();
	MyRectangle.calculateArea();
	MyRectangle.calculatePerimeter();
	//Giving the output
	cout << "The area of the rectangle is: " << MyRectangle.getArea() << endl;
	cout <<"The perimeter is: " <<MyRectangle.getPerimeter() << endl;

return 0 ;
}
// End of main() 

//I could not figure out how to get two rectangles from the length and width data of of one rectangle. If we can ask data for two rectangles MyRectangle1 and MyRectangle2 we can use If else loop to get comparison.
