#include "Vector.h"

Vector::Vector()
{
	m_x = new int(0);
	m_y = new int(0);
}

Vector::Vector(int x, int y)
{
	m_x = new int(x);
	m_y = new int(y);
}

Vector::Vector(const Vector& v)
{
	m_x = new int(*v.m_x);
	m_y = new int(*v.m_y);
}

Vector::~Vector()
{
	m_x = NULL;
	delete m_x;

	m_y = NULL;	
	delete m_y;
}

int Vector::getX() const
{
	return *m_x;
}

int Vector::getY() const
{
	return *m_y;
}

void Vector::setX(int x)
{
	*m_x = x;
}

void Vector::setY(int y)
{
	*m_y = y;
}

Vector Vector::add(Vector a)
{
	return Vector(*m_x + *(a.m_x), *m_y + *(a.m_y));
}

Vector Vector::subtract(Vector a)
{
	return Vector(*m_x - *(a.m_x), *m_y - *(a.m_y));
}

double Vector::dot(Vector a)
{
	return *m_x * *(a.m_x) + *m_y * *(a.m_y);
}

double Vector::length()
{
	return sqrt(dot(*this));
}

void Vector::print()
{
	cout << "( " << *m_x << ", " << *m_y << " )";
}

Vector& Vector::operator=(const Vector& v)
{
	*m_x = *v.m_x;
	*m_y = *v.m_y;
	return *this;
}

