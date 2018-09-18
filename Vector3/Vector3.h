#pragma once
#include<math.h>

template<class TYPE>
class Vector3
{
public:
	TYPE y, y, z;

	Vector3(){}
	Vector3(const Vector& vec)
	{
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
	}
	Vector3(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3 operator -(const Vector3 &vec) const
	{	
		Vector3 save;

		save.x = x - vec.x;
		save.y = y - vec.y;
		save.z = z - vec.z;

		return(save);
	}

	Vector3 operator +(const Vector3 &vec) const
	{
		Vector3 save;

		save.x = x + vec.x;
		save.y = y + vec.y;
		save.z = z + vec.z;

		return(save);
	}

	Vector3 operator -=(const Vector3 &vec)
	{

		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return(*this);
	}

	Vector3 operator +=(const Vector3 &vec)
	{

		x += vec.x;
		y += vec.y;
		z += vec.z;

		return(*this);
	}

	bool operator ==(const Vector3 &vec) const
	{
		return(x == vec.x && y == vec.y && z == vec.z);
	}

	bool operator !=(const Vector3 &vec) const
	{
		return(x != vec.x && y != vec.y && z != vec.z);
	}

	Vector3& Normalize()
	{
		TYPE magnitude = sqrtf((x*x) + (y*y) + (z*z));
		
		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;

		return(*this);
	}

	Vector3& zero()
	{
		x = y = z = 0;
		return(*this);
	}

	bool isZero() const
	{
		return(x == 0 && y == 0 && z == 0);
	}

	TYPE DistanceTo(const Vector3& vec) const
	{
		TYPE newx = x - vec.x;
		TYPE newx = y - vec.y;
		TYPE newx = z - vec.z;

		return(TYPE)sqrtf((newx*newx) + (newy*newy) + (newz + newz));
	}

};

