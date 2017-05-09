/*********************************************************
 * Helper functions created to complete the Intro to C++ 
 * assignment.
 *
 * @author David Whitters
 * @Date 5/9/2017
 *********************************************************/
#include "my_functions.h"

#include <vector>
#include <string>

/**************************************************
 * Creates a string, "Hello world!", and returns it.
 *
 * @return std::string The created string, "Hello world!"
 *************************************************/
std::string createString(void){

	// Declaration and initialization of the string.
	std::string j("Hello world!");

	// Return the Hello world string.
	return j;
}

/**************************************************
 * Creates an empty vector for std::strings and returns it.
 *
 * @return std::vector<std::string> The empty vector of strings
 *************************************************/
std::vector<std::string> createVector(){

	/*
 	  Declare and initialize the vector of std::strings to
	  an empty vector.
	*/
	std::vector<std::string> v = {};
	return v;
}

/***************************************************
 * Adds the number of "Hello world!" strings that is passed in
 * as a parameter to a vector of std::strings.
 *
 * @param num The number of strings to add to a vector.
 * @return int The number of strings added to a vector.
 *
 **************************************************/
int putStringsInVector(int num){
	
	/*
	  Declare a vector and initialize it to the returned vector
	  from the createVector helper function.
	*/
	std::vector<std::string> myVec = createVector();

	/*
	  Push a string returned by the createString helper function
	  into the vector as many times as specified by the num parameter.
	*/
	for(int i = 0; i < num; i++)
	{
		myVec.push_back(createString());
	}	

	// Return the number of strings added to the vector.
	return num;
}

/*******************************************************
 * Changes every fifth element in the vector that's referenced by 
 * the parameter to the value 42.
 *
 * @param vector A reference to the vector that will be modified.
 ******************************************************/
void modifyVector(std::vector<int> & vector){

	// Loops through every fifth element in the vector and sets them to 42.
	for(uint i = 0; i < vector.size(); i += 5)
	{
		vector.at(i) = 42;
	}
}
