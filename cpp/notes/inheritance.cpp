/*Objectives
------------------------------
concept();
how_to();
types();
ambiguity_problem(); 


programming mechanism that allows objects of one class to inherit methods of another class 


syntax
.......................
class base_class{
	
};

class sub_class visibility_mode base_class{
	
};


derived class inherits everything expect(){ //also known as the rules of inheritance 
	constructors and destructors; 
	overloaded operators;
	friend functions;
	private members;
}

visibility_modes(){
			public			protected		private 		
private  	not inherited	not inherited	not inherited
protected	bcms protected	bcms protected	bcms private	
public		bcms public		bcms protected	bcms private	
}


----------------------------
types of inheritance 
----------------------------
single (one sub, one base)
multiple (one sub - many bases)
hierarchical (many subs - one base)
multilevel (base -> base_sub -> sub)
hybrid (combine 2/more forms of the above) and this creates a problem known as the ambiguity problem or diamond problem whic is solved b:

1. scope resolution operator 
obj.classB::a = 10; //.setting vcavriable a value


2. using virtual classes 

public classA{ //the base base
	
}

class classB : virtual public class A{ //virtual sub base B
	
}

class classC : virtual pblic class A{ //virtual subbase B
	
}

class classD: public class B, public classC{ //sub class with create ambiguity problem 
	
}

