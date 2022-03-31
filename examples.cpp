#include <iostream>     // This includes all code/functions for input/output of data streams
#include <string>       // This allows us to work with string types (Lots of characters joined together such as words)
#include <limits.h>     // This allows us to get vairable size limitations
#include <float.h>      // This allows us to get vairable size limitations also


// 'int' is the return type, 'main' is the function name
// in this case int main denotes where the program flow should start
int main(){

    // VAIRABLE TYPES:
    int i_NormalNumber;         // Creates a int variable called i_NormalNumber (Whole number from -2,147,483,648 to 2,147,483,647)
	float f_NumberWithAPoint;   // Creates a float variable called f_NumberWithAPoint (Number with floating point value eg 1.5)
    double d_FloatThatsBigger;  // Creates a float that is able to hold a number twice and big in bytes
    char c_SingleLetter;        // Creates a vairable that can hold a single character (A, !, #, W etc..)
	std::string s_Word;         // Creates a string variable called s_Word (holds a string as shown above) - Note: Requires the include of string
    bool b_State;               // Creates a vairable with a true and false state, can only be either or.    

    enum monthnames{January, Febuary, March, April, May, June, July, August, September, October, November, December};
	//This will make January = 0 Febuary = 1 etc

	enum monthnames2{Jan=1, Feb, Mar, Apr, May2, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
	//This will make Jan = 1 Feb = 2 etc

	enum monthnames3{J=11, F, M, A, M2, J2, J3, A2, S, O, N, D};
	//This will make J = 11 F = 12 etc

    


    // Assigning to basic vairables
    i_NormalNumber = 1;
	f_NumberWithAPoint = 1.1f;
    d_FloatThatsBigger = 1111111.111111;
    c_SingleLetter = 'A';
	s_Word = "String Text"; 
    b_State = true;





    // TYPE CASTING
    // in some cases you can cast one type into another type
    // for example to change a int into a float you can do the following
    float casted_int = (float) i_NormalNumber;
    // Using (float) denotes that we want this int to be read as a float
    // This can be handy if a function is expecting a specific type






    // Displaying Vairables
    std::cout << s_Word << std::endl;
    // std = 'Standard' and is used to say what namespace we are using.
    // cout = 'Console out' and is used to state that we want to output to the console.
    // endl = 'End Line'
    // std::cout means we are using the "standard console out" function
    // this allows us to use other 'cout' functions from other namespaces
    // for example if we hade a namespace called 'Examples' with its own cout we could do
    // Example::cout
    // << is for showing what direction we are putting INTO


    
    // Getting input into Vairables
    std::cout << "Enter a single digit number and press enter: "; 
    std::cin >> i_NormalNumber;
    // Remember std = Standard
    // cin = 'Console input'
    // So here we are saying standard console input INTO i_NormalNumber
    // >> is for showing what direction we are putting INTO

    // Remember vairables want correct types.. so trying to put in a character or string here would be problimatic



    
    // Vairable Sizes    
    std::cout<<std::fixed << "Size of char: "   << sizeof(char)     << " bytes - Range of " << CHAR_MIN << " to " << CHAR_MAX << std::endl;
    std::cout<<std::fixed << "Size of int: "    << sizeof(int)      << " bytes - Range of " << INT_MIN  << " to " << INT_MAX  << std::endl;
    std::cout<<std::fixed << "Size of float: "  << sizeof(float)    << " bytes - Range of " << FLT_MIN  << " to " << FLT_MAX  << std::endl;
    std::cout<<std::fixed << "Size of double: " << sizeof(double)   << " bytes - Range of " << DBL_MIN  << " to " << DBL_MAX  << std::endl;





    












    //ARRAYS    
    int first_array[2];         // Makes an array called first_array. This array has 2 int variables
    int second_group[3];        // Makes an array called second_group. This array has 3 int variables
	int matrix_array[2][2];     // Makes an array of arrays,this array has a 2 by 2 list of variables
    
    //ADDING TO INT ARRAYS
	//To add a value to a variable array you do this
    first_array[0] = 1; // this sets the 1st variable in the array to 1
    first_array[1] = 2; // this sets the 2nd variable in the array to 2
    second_group[0] = 21; // this sets the 1st variable in the array to 21
    second_group[1] = 22; // this sets the 2nd variable in the array to 22
    second_group[2] = 23; // this sets the 3rd variable in the array to 23


    //ACCESSING A VARIABLE FROM AN ARRAY
    int accessed_array1 = first_array[0]; //Sets the variable to one of the arrays
    int accessed_array2 = second_group[1]; //Sets the variable to one of the arrays

	std::cout << "first_array[0] = " << accessed_array1 << std::endl; //Display array linked to this int
	std::cout << "second_group[1] = " << accessed_array2 << std::endl; //Display array linked to this int


    //ADDING TO CHAR ARRAYS
	//To add a value to a variable array you do this
    char third_array[] ="hello";                // (not limated) This creates a string (character) array using the word hello. The [] means it will auto count the characters and the terminator.
    char third_arraylimated[6] ="hello";        // (limated)     This creates a string (character) array using the word hello. The [6] means there are 5 characters and one terminator.


    //ACCESSING A VARIABLE FROM AN ARRAY
    char accessed_array3 = third_array[1];          // Will set the 2nd character from the array (e)
    char accessed_array4 = third_array[2];          // Will set the 3rd character from the array (l)
    char accessed_array5 = third_arraylimated[4];   // Will set the 4th character from the array (o)

	std::cout << "third_array[] = " << third_array << std::endl; //Display array linked to this int
	std::cout << "third_arraylimated[6] = " << third_arraylimated << std::endl;             // Display array linked to this int
	std::cout << "third_array[] part [1] = " << accessed_array3 << std::endl;               // Display array linked to this int
	std::cout << "third_array[] part [2] = " << accessed_array4 << std::endl;               // Display array linked to this int
	std::cout << "third_arraylimated[6] part [4] = " << accessed_array5 << std::endl;       // Display array linked to this int









    // MATRIX ARRAYS
    //ADDING TO MATRIX ARRAYS
	matrix_array[0][0] = 1;     // this sets [0][0] to 1
	matrix_array[0][1] = 11;    // this sets [0][1] to 11
	matrix_array[1][0] = 2;     // this sets [1][0] to 2
	matrix_array[1][1] = 22;    // this sets [1][1] to 22

    //ACCESSING THE MATRIX ARRAYS
	//Same as you would if you were looking at a graph... along so many down so many.
	int accessed_matrix1 = matrix_array[0][1]; //Sets the variable to one of the arrays
	int accessed_matrix2 = matrix_array[1][1]; //Sets the variable to one of the arrays

	std::cout << "matrix_array[0][1] = " << accessed_matrix1 << std::endl; //Display array linked to this int
	std::cout << "matrix_array[1][1] = " << accessed_matrix2 << std::endl; //Display array linked to this int
















    // DISPLAYING ENUM VARIABLES ON SCREEN
	monthnames CurrentMonth = January;
	monthnames NextMonth = Febuary;
	//This uses the enum called monthmanes to create a variable callec CurrentMonth this will look for the enum name and find its value.
	std::cout << "Enum1 January = " << CurrentMonth << std::endl;
	std::cout << "Enum1 Febuary = " << NextMonth << std::endl;

	monthnames2 CurrentMonth2 = Jan;
	//This uses the enum called monthmanes2 to create a variable callec CurrentMonth2 this will look for the enum name and find its value.
	std::cout << "Enum2 Jan = " << CurrentMonth2 << std::endl;

	monthnames3 CurrentMonth3 = J;
	//This uses the enum called monthmanes3 to create a variable callec CurrentMonth3 this will look for the enum name and find its value.
	std::cout << "Enum3 J = " << CurrentMonth3 << std::endl;


    










    // LOOPS
    int loopvalue = 0;                          
    //This is used for the conditional loop although when the while loop starts again it will reset to 0


    // WHILE LOOP
    // Example below: 
    // While the value of the variable is less than 10 the loop will run.         "while (loopvalue<10)"
    // When it hits 10 it will exit and continue the rest of the code
    while (loopvalue < 10)                          
    {
        loopvalue = loopvalue +1;               //Add one to the loop value... when this hits 10 the loop will exit.
        std::cout << loopvalue << std::endl;    //This will display the loop variable so that you know where you are in the process
    }

    // WHILE (PRINT BACKWARDS) LOOP
    int value = 1993;
    while (value>0){
        std::cout << value % 10;
        value = value/10;
    }


    //FOR LOOPS
    // A for loop is like a while loop however you declare the statement for the loop in brackets.
        // In the start of this for loop I have created a variable called forloop_vairable
        // I then say that the loop variable forloop_vairable must be less than 3 to run
        // and finally I tell it to add 1 to forloop_vairable when it is run.
    for (int forloop_vairable = 0; forloop_vairable < 3; forloop_vairable = forloop_vairable + 1)
    {
        std::cout << "forloop_vairable = " << forloop_vairable << std::endl;
    }


    // FOR EACH LOOP
    for (int item : second_group){
        std::cout << item << std::endl;
    }

    // FOR EACH LOOP
    for (int itemIndex = 0; itemIndex < (sizeof(second_group) / sizeof(*second_group)); itemIndex++)
    {
        std::cout << second_group[itemIndex] << std::endl;
    }










    // IF/ELSE 
    // (Try to avoid using too many)
    // For example, can you use a bool for true/false? Can you use a switch statement.. etc
    if (b_State){
        // it's true so do something
    }
    else{
        // do something else
    }


    int number = 3;
    if (number>0){
        // do thing 1 as the first statement passed
    }
    else if (number<0){
        // do something else because 1st statement failed
    }
    else{
        // both failed so do this
    }



    // SWITCH STATEMENTS
    // Much like a if/else statement but you can check many possibilities and jump to the exact one that matches
    switch (i_NormalNumber) //This switch statement tests the i_NormalNumber variable
    {//Code starts here

        case 0: //If lootime is equal to 0 then this case statement will be run
            std::cout << "The i_NormalNumber variable now = 0" << std::endl;
            break;

        case 1://If lootime is equal to 1 then this case statement will be run
            std::cout << "The i_NormalNumber variable now = 1" << std::endl;
            break;

        case 2://If lootime is equal to 2 then this case statement will be run
            std::cout << "The i_NormalNumber variable now = 2" << std::endl;
            break;

        case 3://If lootime is equal to 3 then this case statement will be run
            std::cout << "The i_NormalNumber variable now = 3" << std::endl;
            break;

        default://If lootime is equal to anythin other than the case statements then this defult statement will be run
            std::cout << "The i_NormalNumber is something other than 0,1,2,3" << "\n\n(" << i_NormalNumber << ")"<< std::endl;
            break;
    }












    // REFERENCE OPERATORS
    // Used as a
	int &NormalNumber = i_NormalNumber;             // Creates a int Reference Operators called &NormalNumber this is just another name that can be used for i_NormalNumber
	float &NumberWithAPoint = f_NumberWithAPoint;   // Creates a float Reference Operators called &NumberWithAPoint this is just another name that can be used for f_NumberWithAPoint
	std::string &Word = s_Word;                     // Creates a string Reference Operators called &Word this is just another name that can be used for s_Word


    // ADDING VALUES TO THE VARIABLES
	// We will now initialise these variables (Give them a value)
	NormalNumber = 10;                                  // Initialise to 10 (sets the value of i_NormalNumber to 10)
	NumberWithAPoint = 10.10f;                          // Initialise to 10.10 (sets the value of f_NumberWithAPoint to 10.10)
	Word = "I made some text here";                     // Initialise to text (sets the value of s_Word to I made some text here)


    // DISPLAYING NORMAL VARIABLES ON SCREEN
	// To show the variables on the screen...
	std::cout << "i_NormalNumber contains: " << i_NormalNumber << std::endl;            // Display the int variable i_NormalNumber to the screen (10).... anything inside "" means show this as text.
	std::cout << "f_NumberWithAPoint contains: " << f_NumberWithAPoint << std::endl;    // Display the float variable f_NumberWithAPoint to the screen (10.10)
	std::cout << "s_Word contains: " << s_Word << std::endl;                            // Display the string variable s_Word the the screen (I made some text here)













    //    bool ? True Output : False output;

    //    Define functions at top, Functions built at bottom


    //    & = Pass Memory Address of variable 
    //    * = Should be a address (when in function args)
    //    * = Dereference from an address to a value (when in function commands)

}