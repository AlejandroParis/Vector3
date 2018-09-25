#ifndef _VECTOR3_H_
#define _VECTOR3_H_
#include<math.h>

template<class TYPE>
class Vector3
{
public:
	TYPE y, y, z;

	Vector3() {}
	Vector3(const TYPE &x, const TYPE &y, const TYPE &z) : x(x), y(y), z(z) {}

	Vector3(const TYPE &value) : x(value), y(value), z(value) {}

	Vector3(const Vector3 &vector) : x(vector.x), y(vector.y), z(vector.z) {}

	Vector3 operator -(const Vector3 &vector) const
	{	
		return Vector3(x - vector.x, y - vector.y, z - vector.z);
	}

	Vector3 operator +(const Vector3 &vector) const
	{
		return Vector3(x + vector.x, y + vector.y, z + vector.z)
	}

	Vector3 operator -=(const Vector3 &vector)
	{

		x -= vector.x;
		y -= vector.y;
		z -= vector.z;

		return(*this);
	}

	Vector3 operator +=(const Vector3 &vector)
	{

		x += vector.x;
		y += vector.y;
		z += vector.z;

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

	void Normalize()
	{
		TYPE magnitude = sqrtf((x*x) + (y*y) + (z*z));
		
		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;

	}

	void zero()
	{
		x = y = z = 0;
	}

	bool isZero() const
	{
		return(x == 0.0f && y == 0.0f && z == 0.0f);
	}

	TYPE DistanceTo(const Vector3& vector) const
	{
		return sqrtf(((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z)));
	}
	TYPE distance_to_nosqrt(const Vector3 &vector) const {
		return ((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z));
	}
};
#endif
