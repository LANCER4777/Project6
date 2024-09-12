#include "Point3D.h"
#include<iostream>

Point3D::Point3D() : x(0), y(0), z(0) {}

Point3D::Point3D(int x, int y, int z) : x(x), y(y), z(z) {}

void Point3D::Init(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Point3D Point3D::Sum(Point3D& b)
{
	Point3D rez;
	rez.x = x + b.x;
	rez.y = y + b.y;
	rez.z = z + b.z;
	return rez;
}

Point3D Point3D::Mult(Point3D& b)
{
	Point3D rez;
	rez.x = x * b.x;
	rez.y = y * b.y;
	rez.z = z * b.z;
	return rez;
}

Point3D& Point3D::Sum(int x, int y, int z)
{
	this->x += x;
	this->y += y;
	this->z += z;

	return *this;
}

Point3D& Point3D::Min(int x, int y, int z) {
	this->x = std::min(this->x, x);
	this->y = std::min(this->y, y);
	this->z = std::min(this->z, z);
	return *this;
}

Point3D& Point3D::Mult(int x, int y, int z) {
	this->x *= x;
	this->y *= y;
	this->z *= z;
	return *this;
}

Point3D& Point3D::Div(int x, int y, int z) {
	if (x == 0 || y == 0 || z == 0) return *this;

	this->x /= x;
	this->y /= y;
	this->z /= z;
	return *this;
}