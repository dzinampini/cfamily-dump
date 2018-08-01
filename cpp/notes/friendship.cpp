/*Objectives
------------------------------
the_concept();
friend_classes();
friend_objects();

--------------------------------------------------------------
properties
--------------------------------------------------------------
it is used when you want to access data from another prrivate function/class in another private class or function. 

declared with friend keyword eg friend double area();
one of its parameters is an object of the class to be used (compute x); m


in the function body we use the dot operator to access the class members 
int compute(x a, x b){ //putting actual data into friend function.. note this is outside the class 
	return x.a+x.b; 
}



--------------------------------------------------------------
friend functions 
--------------------------------------------------------------
*/

class X{
	private: //the data we want to access
	int a,b; 

	int numbers(){
		a=100;
		b=200;
	}

	friend compute(); //declaration of friend function
};

int compute(x a, x b){ //putting actual data into friend function.. note this is outside the class 
	return x.a+x.b; 
}

int main(){
	X obj;
	obj.numbers();
	compute(obj); 
	return 0; 

}

/*
-------------------------------------------------------------------
friend classes
-------------------------------------------------------------------
*/

class secret{
	string x; 

	friend class expose_secret; //apa ifriend yako
};


class expose_secret{
	secret t; //note the data type is now class we are friending to get data from 

	public:
	no_secret(string x1){
		t.x=x1;
	}

	void zvifumure(){
		cout<<"Her secret is: "<<t.x<<endl; 
	}
};

int main(){
	expose_secret obj("xxxxxxxxxxxxxxxxxxxxxxxxxx");
	obj.zvifumure();
	return 0; 
}