/*Objectives
------------------------------
concept();


ability of an object to take many forms 

in here comes the idea of 
1. message passing (sharing of information(that is functions) between objects )
2. dynamic binding (linking of a procedure call to the code to be executed || code associated with a given procedure call (function call) is not known until runtime (in namin method when we call object))

there are 2 ways to achieve polymorphism 
1. method overloading / compile time polymorphism
2. method overriding / run time polymorphism 


makkes use of virtual class 
that is 
virtual return_type function_name(args); 


----------------------
method overloading 
----------------------
we declare more than one method with the same name but different signature 

this is thru the following methods:
1. changing #(arguments)
2. changing datatypes of arguments 
3. interchanging the order of arguments 

*changing the return type of arguments is not overloading 


Eg>>>
class Calculator{
	public:
		double add(double a, double b){
			return a + b; 
		}


		//method 1
		double add(double a, double b, double c){
	
		}

		//method 2
		double add(int a, int b){
	
		}

		//method 3
		double add(double b, double){
	
		}

} 


--------------------------
method overriding 
--------------------------

conditions 
1. there must be inheritance 
2. both base class and sub class methods must have the same signature  (eg>> void speak())

so what happens is subclass methods provide independent implementation of the base class methods

there are 2 methods of calling the class 
1. creating subclass objects and calling the methods of each
2. using the pointer reference of the base class // the one we will use 

Practise Question. 
Creat a class called Shape with attributes a and b 
Include a parameterised constructor to initialise the elements 
have a method named are which returns a value 1.
cleate 3 subclasses circle, rectazngle, triangle, which override the base class methods 

create  your instance within the main class to display area o each subclass 
the assumptoion is that a and b will the corresponding elements of each class (eg for radius etc)


*/

class Shape{
private:
	double a, b;
	Shape(double a, double b){
		this->a=a;
		this->b=b;
	}

	double area(){
		return 1;
	}

};

class circle : public Shape{
	public:
	circle (double a, double b) : Shape(a, b){

	}	

	double area{
		return b*a*a; 
	}	
};

//same for the different shapes, but difference is on the area calculation 
int main(){
	Shape *s;
	circle c(20,30);
	s=&c; 
	cout<<s->area()<<endl;  

}