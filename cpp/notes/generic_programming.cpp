/*Objectives
------------------------------
the_concept();
class_templates();
function_templates();


-------------------------------------
concept 
-------------------------------------
also known as meta prohgramming 
the idea is to eliminate duplication of code;
polymorphism is the OOP principle linked to generic programming (function templates to be specific); 

-------------------------------------
generic function_templates
-------------------------------------
consider having to repeat the same function statements for different data types as below
*/

int square(int a){
	return a*a; 
} 

double square(double a){
	return a*a; 
} 

float square(float a){
	return a*a; 
} 


//we could eliminate this by the use of generic templates as below 
template <class X> //we ccan have many template classes i.e template<class x, class, W, class Z>

X square(X a){ //note that the data type for both the function and the variable become is no the template class
	return a*a;
}

int main(){
	square(2); //for ints 
	square(2.34); //for doubles 
	square(2.34f); //for floats 
}

/* 
--------------------------------------
generic class templates 
-------------------------------------- 
meant for class statements that keep on duplicating data again

consider the eg below
*/ 

class One{
	string x; 

public:
	string ourfunction(){
		//function code; 
	}
}; 


class Two{
	int x; 

public:
	int ourfunction(){ //note the data type is different from one
		//function code; 
	}
}; 

//using generic function templates we can eliminate this 



template <class Z>
class One{
	Z x; //note the new return type we are using 

public:
	void ourfunction(Z x){
		//function code; 
	}
}; 

int main(){
	One <int>obj1(5);
	One <double>obj1(3.466); 
}