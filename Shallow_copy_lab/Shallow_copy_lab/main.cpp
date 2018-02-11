#include <iostream>
#include <string>

#include "Vector.h"

using namespace std;

void DisplayVectorTest(string name, Vector v)
{
	cout << name << ": ";
	v.print();
	cout << endl;
}

int main()
{
	/*
	cout << "Testing the default constructor and toString" << endl;
	Vector v0;
	DisplayVectorTest("v0", v0);
	*/
	/*
	cout << "Testing the constructor" << endl;
	Vector v1(3, 2);
	DisplayVectorTest("v1", v1);
	*/
	/*
	cout << "Testing the copy constructor" << endl;
	Vector v2(v1);
	DisplayVectorTest("v1", v1);
	DisplayVectorTest("v2", v2);
	*/
	/*
	cout << "Testing the accessors" << endl;
	Vector v3(5, 7);
	DisplayVectorTest("v3", v3);
	cout << "X: " << v3.getX() << endl;
	cout << "Y: " << v3.getY() << endl;
	*/
	/*
	cout << "Testing the mutators" << endl;
	Vector v4(2, 10);
	DisplayVectorTest("v4", v4);
	v4.setX(6);
	v4.setY(7);
	DisplayVectorTest("v4", v4);
	*/
	/*
	cout << "Testing the add method" << endl;
	Vector v5(4, 9);
	Vector v6(7, 1);
	DisplayVectorTest("v5", v5);
	DisplayVectorTest("v6", v6);
	Vector v7 = v5.add(v6);
	DisplayVectorTest("v7", v7);
	*/
	/*
	cout << "Testing the subtract method" << endl;
	Vector v8(4, 9);
	Vector v9(7, 1);
	DisplayVectorTest("v8", v8);
	DisplayVectorTest("v9", v9);
	Vector v10 = v8.subtract(v9);
	DisplayVectorTest("v10", v10);
	*/
	/*
	cout << "Testing the dot method" << endl;
	Vector v11(3, 7);
	Vector v12(6, 1);
	DisplayVectorTest("v11", v11);
	DisplayVectorTest("v12", v12);
	cout << "dot: " << v11.dot(v12) << endl;
	*/
	/*
	cout << "Testing the length method" << endl;
	Vector v14(5, 7);
	DisplayVectorTest("v14", v14);
	cout << "length: " << v14.length() << endl;
	*/
	/*
	cout << "Testing the assignment operator" << endl;
	Vector v15(5, 6);
	Vector v16 = v15;
	DisplayVectorTest("v15", v15);
	DisplayVectorTest("v16", v16);
	v16.setX(1);
	v16.setY(2);
	DisplayVectorTest("v16", v16);
	*/
	/*
	cout << "Testing the destructor" << endl;
	{
	Vector v17(5, 6);
	DisplayVectorTest("v17", v17);
	}
	*/
	cout << "End of Testing" << endl;

	return 0;
}