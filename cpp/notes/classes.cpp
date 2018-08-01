/*Objectives
------------------------------
create();
constructors();
destructors(); 
setters and getters(); 

-------------------------------
concept and syntax
-------------------------------
class- blueprint taht defines the form of an object
object - instance of a class

class class_name{
	private:
		//private data and functions

	protected:
		//protected data and functions 

	public:
		//public data and functions
	
};

class_name::method1(){ //functions declared outside the class name using the scope resolution operator
	
}

int main(){ //main is not part of the class, therefore it can only access public functions 
	class_name object_name;
	object_name.method1(); 
}




--------------------------------------
constructors
--------------------------------------
member function of a class with the same name as the class name 
there are different types 

1. Default Constructor  (constructor declared and called with no parameters/arguments )

declaration (within class)
--------------------------
class_name(){
	//constructor code; 
}

calling (in main method)
-------------------------
class_name obj(); 


2. Parameterised (constructor with arguments)


class_name(int x, int y){
	//constructor code;
	xxx = x; //where xxx is declared in the class (usually as a private member)
	yyy = y; //where yyy is declared in the class (usually as a private member)
}


or 
class_name(double a, double b){
	this->a=a;
	this->b=b;
}

calling (in main method)
-------------------------
class_name obj(5, 6); 


3. Overloaded Constructors 


4. Copy Constructors (constructor which initialises an object using another object of the same class)

class fun{
float x, y; 

public:
fun (float a , float b){
	x = a;
	y = b;
}	

fun (fun &f){
	x =	f.x;
	y = f.y;
}

void display(){
	cout<<"Value is: "<<y<<endl; 
}

};

-----------------------------------------------------
destructors 
-----------------------------------------------------
complement of the constructor;
used when a program wants to deallocate memory that it had previousy allocated or to close an open file;

destructors have no return type;
desctructors cannot be inherited; 
static destrductors are not allowed;

~class_name(){
	//destructor code 
}




------------------------------------------------------
setters
-----------------------------------------------------
method used to initialise privae members members within a class

void setvariable_name(return_type variable_name){
	this->variable_name = variable_name;
}


------------------------------------------------------
getters // accessor function 
--------------------------------------------------------
method used to retrieve private members within a class

return_type getvariable_name(){
	return variable_name;
}

