/* function hiding vs data hiding 
-------------------------------------
fh - if we have a member function in both base and sub class with the same name, the one in base class will be hidden 
dh - oop technique to hide internal objects and we use abstratction or enca to use the data 

---------------------------------
OOP Application
OO databse 
AI and expert systems 
simulation and modelling 
CAD and CAM (3d printing)
real time systems 
interface designing 
dss 

-----------------------------------------------
class/static variable VS instance variable 
static - only one copy of this value shared across all instances of the class
declared with static keyword

instance 
variables that belong to the instance of a class and every object has its own value (as it depends on the instance )

-----------------------------------------------------
pure virtual function vs virtual function

vf 
virtual return_type function_name(args){}; 
makes its class a polymorphic class; 

pvf 
virtual return_type function_name(args) = 0;
makes its class an abstract class; 

------------------------------------
const and volatile variables 
const - value cant be changed during execution
const int mark = 9;


vol - value may be changed in ways not explicitly specified by the functions 
volatile int current_users; 


----------------------------------------------
local variable 
-declared within a function and only accessible inside a function 

global variable 
-declared outside a function/class and are accessible from anywhere within the code


---------------------------------------------

array (max, min value finding)


int highNum = 0;
int m;
int list[4] = {10, 4, 7, 8};
    for (m = 0 ; m < size ; m++);
    {
        if (list[m] > highNum)
            highNum = list[m];
            cout << list[m];
    }
cout << highNum;

---------------------------------------------


----------------------------------------
tenary operator

(expression)?expression1:expression2; 