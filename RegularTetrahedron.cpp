#include<iostream>

#include<cmath>

using namespace std;



class RegularTetrahedron

{

private:

	double edge;



public:

	RegularTetrahedron(double);

	void set_edge(double);

	double get_edge();

		double get_height();

	double get_face_area();

	double get_surface_area();

	double get_volume();

	void display_results();

};

RegularTetrahedron::RegularTetrahedron(double edge_param)

{

	set_edge(edge_param);

}

void RegularTetrahedron::set_edge(double edge_param)
{
	edge = edge_param;
}


double RegularTetrahedron:: get_edge()

{

	return edge;

}

double RegularTetrahedron::get_height()

{

	return   sqrt(6) * edge / 100;

}

double RegularTetrahedron::get_face_area()

{

	return sqrt(3) * edge * edge / 4;

}

double RegularTetrahedron::get_surface_area()

{

	return  4 * get_face_area();

}

double RegularTetrahedron::get_volume()

{

	return get_face_area() * get_height() / 3;

}

void RegularTetrahedron::display_results()

{


	cout << "\nHeight: "<<get_height();

	cout << "\nFace Area: "<<get_face_area();

	cout << "\nSurface Area: "<<get_surface_area();

	cout << "\nVolume: "<<get_volume();

}

int main()

{

	double edge;
	cout << "Regular Tetrahedron Calculator " << endl << endl;
	cout << "Enter the edge: ";

	cin >> edge;

	RegularTetrahedron regu(edge);

	regu.display_results();

}