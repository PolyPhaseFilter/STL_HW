#pragma once
#include <vector>
#include <string>
//variables///////////////////////////////////////////////////////4

struct vertax
{
	float m_x;
	float m_y;
	float m_z;
	vertax() : m_x(0), m_y(0), m_z(0) {}
	vertax(float xp, float yp, float zp) : m_x(xp), m_y(yp), m_z(zp) {}
};
int tri_n = 12;
struct tri
{
	vertax m_p1;
	vertax m_p2;
	vertax m_p3;
	vertax m_n;

	/*tri(vertax normalp, vertax v1p, vertax v2p, vertax v3p) :
	m_n(normalp), m_p1(v1p), m_p2(v2p), m_p3(v3p) {}*/

};
std::vector<tri> triangles;
std::vector<tri> triangles_d;
///////////////////////////////////////////////////////////////////////////////

class Design 
{
public:

	
	///////////////////////////////////////////////////////////////////////////////
	Design();
	~Design();
	void write(std::string filename);
	void add(std::vector <tri> &add_item);
	
private:

};

class Cube 
{
public:
	
	Cube();
	Cube(double s);
	~Cube();
	void write(std::string filename);
	void crossproduct(tri &data);
	void translate(int x, int y, int z);
	double volume();
	friend std::ostream &operator<< (std::ostream &os, Cube& dt);

private:
	double s;
	int num_tri=12;
	int x=0, y=0, z=0;
	float length, height;
#if 0
	struct vertax
	{
		float m_x;
		float m_y;
		float m_z;
		vertax() : m_x(0), m_y(0), m_z(0) {}
		vertax(float xp, float yp, float zp) : m_x(xp), m_y(yp), m_z(zp) {}
	};
	struct tri
	{
		vertax m_p1;
		vertax m_p2;
		vertax m_p3;
		vertax m_n;
		
		/*tri(vertax normalp, vertax v1p, vertax v2p, vertax v3p) :
			m_n(normalp), m_p1(v1p), m_p2(v2p), m_p3(v3p) {}*/

	}; 
	std::vector<tri> triangles;
#endif
};

class Cylinder
{
public:
	Cylinder();
	~Cylinder();

private:

};

Cylinder::Cylinder()
{
}

Cylinder::~Cylinder()
{
}
Cube::Cube()
{

}

Cube::~Cube()
{
}

Design::Design()
{
}

Design::~Design()
{
}