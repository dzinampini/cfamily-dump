/*Objectives
------------------------------\
concept(); 


combining attributes and methods in a class and restricting access to them 

to achieve encapsulation we set the dta to be private only to be accessible by public methods 
using a method of setters and getters 

syntax
-------


class myClass{
	private:
		string name; 

		//use private access specifier to hide this data and then we go on to use setters and getters to unhide the data; 
		
	public:

		//set
		void setName(string x){
			name = x
		}


		or 

		void setName(string name){
			this->name=name; 
		}


		//get
		string getName(){
			return name; 
		}
};

int main(){
	myClass obj; 
	obj.setName("Faith");
	cout<<obj.getName();
	return 0; 
}