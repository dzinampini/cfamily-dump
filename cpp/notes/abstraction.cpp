/*Objectives
------------------------------
concept();



hiding implementation details from the user (method hiding)

guidelines
1. there must be a base class and a sub class 
2. base class must be an abstract class (i.e containing abstract methods (method declaresd but with no implementation))

pure virtual functon - function with no definition, start with virtual keyword and ends with 0; 

class Base{
	public:
		virtual void abstract_method()=0; 
};


class Derived: public Base{
	public:
	void abstract_method(){
		//abstract method will have its details here now in the derived class
	}	
};

int main(){
	Base *b;
	Derived d; 

	b =&d;
	cout<<b->Show();

	return 0;
}





?? but how else is abstraction different from runtime polmorphism
-im guessing the abstart methods issue 
-but is it the only one?????????????????


/////////////////
the bank example 
