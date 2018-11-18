//include library
#include <iostream>
using namespace std;

//  Declaration of two-dimensional class Point

class Point
{
	public:
	
	// default class constructor (with no arguments):
	Point(); 

	// class constructor that sets the coordinates x, y to the values xval,
	// yval:
	Point(int xval, int yval);

	// member function for moving a point by dx, dy:
	void Move(int dx, int dy);

	// member functions for getting values of x, y:
	int Get_X() const;
	int Get_Y() const;

	// member functions for setting x, y to xval, yval respectively  
	void Set_X(int xval);
	void Set_Y(int yval);

	//Add declaration of member function Print here:
	void print();

	// private data members x, y represent coordinates of the point:
	private:
	int X;
	int Y;
};  


//  Methods for class Point

// class constructor sets X, Y default values to zero:
Point::Point()
{
	X = 0;
	Y = 0;
}

// class constructor sets X, Y to given values xval, yval:

Point::Point(int xval, int yval)
{
	X = xval;
	Y = yval;
}

// member function Move: increases the x coordinate by dx and the y coordinate by dy.

void Point::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}

// Get_X returns the value of the X coordinate

int Point::Get_X() const
{
	return X;
}

// Get_Y returns the value of the Y coordinate

int Point::Get_Y() const
{
	return Y;
}

// Set_X sets the value of X coordinate to xval

void Point::Set_X(int xval)
{
	X = xval;
} 

// Set_Y sets the value of Y coordinate to yval

void Point::Set_Y(int yval)
{
	Y = yval;
} 
    

//Add definition of member function print:
void Point::print(){
	//print the coordinate
	cout<<"The coordinate is "<<"("<<X<<","<<Y<<")"<<endl;
}

//  Declaration of class Rectangle

// Add class Rectangle declaration HERE: 
class Rectangle{
	Point c1,c2,c3,c4;
	
	//  Methods for class Rectangle

	public:	
	//define constructre
	Rectangle(){
	
		c3.Set_X(1);c3.Set_Y(1);
		c4.Set_X(1);c2.Set_Y(1);
	}
	//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
	//print the value

	void print(){
		cout<<"For rectangle"<<endl;
		c1.print();
		c2.print();
		c3.print();
		c4.print();
	}
	int area(){
		return side1()*side2();
	
	}
	private:
	int side1(){
		return c3.Get_X()-c2.Get_X();
	
	}
	int side2(){
		return c3.Get_Y()-c4.Get_Y();
	}
	
};


//  main() function for testing classes Point and Rectangle

// Testing classes Point and Rectangle
int main()
{
	// Declaring a point using default class constructor (x = y = 0):
	Point p1;
	cout<< "The x value for p1 is " << p1.Get_X() << endl;
	cout<< "The y value for p1 is " << p1.Get_Y() << endl;

	// Declaring a point with coordinates X = 2, Y = 3:
	Point p2(2, 3);
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	// Moving point p2 by (1, -1):
	p2.Move(1, -1);
	cout<< "After the move:" << endl;
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	//Test member function print on points p1, p2:
	p1.print();
	p2.print();

	//Testing of the class Rectangle goes here: 
	Rectangle r;
	r.print();
	
return 0;
}



