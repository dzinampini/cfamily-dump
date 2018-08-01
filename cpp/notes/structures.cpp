/*Objectives
------------------------------
creating(); 
array_object();

------------------------------------------------------------------------------
def
------------------------------------------------------------------------------
	data type that can hold different values;
	collection of elements(variables and methods) tha describe an object; 


---------------------------------------------------------------------------------
syntax
---------------------------------------------------------------------------------
struct struct_name{
	//variables
	data_type element1; 
	data_type element2;

	//methods 
	data_type element3(){
	}
	data_type element4(){
	}
}

int main(){
	struct_name obj1; 
	obj1.element4(); 
}

----------------------------------------------------------------------------------
how are they different from classes
-----------------------------------------------------------------------------------
do not support inheritance;
members are public by default;
no permission labels; 
declared by struct keyword;
information in a struct is easily accessible; 
good for small projects;


-------------------------------------------------------------------------------
example
--------------------------------------------------------------------------------
a certain college wants to enrol students based on the #(points) scored at A Level
there are 4 categories given below

Points 
x>15
13<=x<14
10<x<12
12<=x<9

using structures write a program that displays the name, age, points and the selected category field. 
using an array objedct output the results for 3 students in a table  


