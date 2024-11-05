#include "field.h"
#include <iostream>


int main()
{
//Default Constructer
Electric_field E1;

//Parameter Constructer
Electric_field E2(3,4,6);
//Example from readme file
Electric_field E_components(1e5,10.9,1.7e2);


//Using the getter functions of Electric Field Constructer
std::cout<<"Printing values of E2" <<std::endl;
std::cout<<E2.getx() <<"\t" <<E2.gety() <<"\t" <<E2.getz() <<std::endl;
//Calculating and printing the Magnitude of the vector
std::cout<<"The magnitude of E2 is: " <<E2.calculateMagnitude() <<std::endl;


//using set functions of Electric field
E1.setx(3);
E1.sety(4);
E1.setz(0);
//using the functions with the object created by the Default Constructor
std::cout<<"Printing the values of E1" <<std::endl;
std::cout<<E1.getx() <<"\t" <<E1.gety() <<"\t" <<E1.getz() <<std::endl;
std::cout<<"The magnitude of E1 is: " <<E1.calculateMagnitude() <<std::endl;
//calculating the inner product and printing the value
std::cout<<"Inner prodcut of E1 is: " <<E1.inner_product() <<std::endl;


//Parameter Constructor
Magnetic_field M1(3,4,6);
//Calcuating the unit vector components and printing them
std::cout<<"Unit Vector is: (" <<M1.unit_vx() <<"," <<M1.unit_vy() <<"," <<M1.unit_vz() <<")" <<std::endl;
	
return 0;
}
