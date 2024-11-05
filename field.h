#include<iostream>
#include<cmath>

#ifndef _FIELD_H_
#define _FIELD_H_

class Electric_field
{
	private:
		double *E;
	public:
//constructor
	
	Electric_field()
	{
		E = new double[3];					//allocaiting memory for 3 coordinates
		std::cout<<"default constructor called" <<std::endl;
	}
	Electric_field(double x, double y, double z)
	{
		E = new double[3];					//allocating memory for 3 coordinates
		*(E+0) = x;
		*(E+1) = y;
		*(E+2) = z;
		std::cout<<"Other constructor called" <<std::endl;
	}
//setters
	void setx(double x){
		*(E+0) = x;
	} 
	void sety(double y){
		*(E+1) = y;
	}
	void setz(double z){
		*(E+2) = z;
	}
//getters
	double getx()
	{
		return *(E+0);
	}
	double gety()
	{
		return *(E+1);
	}
	double getz()
	{
		return *(E+2);
	}
//functions
	double calculateMagnitude(){
		double x2 = (*(E+0))*(*(E+0));
		double y2 = (*(E+1))*(*(E+1));
		double z2 = (*(E+2))*(*(E+2));
		return sqrt(x2+y2+z2); 
	}
	double inner_product(){
		return calculateMagnitude()*calculateMagnitude();	
	}
//destructor
	~Electric_field(){
		delete[] E;
		std::cout<<"Destructor Call complete" <<std::endl;
	}
};

class Magnetic_field
{
	private: 
		double *M;
	public:
//constructors 
	Magnetic_field()
	{
		M = new double[3];	
	}
	
	Magnetic_field(double x, double y, double z)
	{
		M = new double[3];
		*(M+0) = x;
		*(M+1) = y;		
		*(M+2) = z;
		std::cout<<"Parameter constructor called" <<std::endl;
	}
//setters
	void setx(double x)
	{
		*(M+0) = x;
	}
	void sety(double y)
	{
		*(M+1) = y;
	}
	void setz(double z)
	{
		*(M+2) = z;
	}
//getters
	double getx()
	{
		return *(M+0);
	}
	double gety()
	{
		return *(M+1);
	}
	double getz()
	{
		return *(M+2);
	}
//functions
	double calculateMagnitude()
	{
		int sum =0;
		for(int i=0; i<2; i++)
		{
			sum += (*(M+i))*(*(M+i));
		}
		return sqrt(sum);
	}
	double unit_vx()
	{
		return (*(M+0))/calculateMagnitude();		
	}
	double unit_vy()
	{
		return (*(M+1))/calculateMagnitude();
	}
	double unit_vz()
	{
		return (*(M+2))/calculateMagnitude();
	}

//destructor
	~Magnetic_field()
	{
	delete[] M;
	std::cout<<"Default destructor called" <<std::endl;	
	}
};

#endif
