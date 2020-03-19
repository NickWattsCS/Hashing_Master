Nicholas Watts
Last Updated: March 19, 2020

Purpose: 

	This project hashes 1,000,000 numbers between 2^-31 and 2^31 into a
	vector of doubles using the following hash schemes: linear, quadratic,
	and double hashing probing, as well as a custom, personal form of
	probing that I have made

Components: 

	There is a class file for each type of probe, which also contains
	a main function, which allows the make file to create an executable
	using just that class. These files are:

		linear.h and linear.cpp
		quadratic.h and quadratic.cpp
		double.h and double.cpp
		part1.h and part1.cpp

	In addition to these class files there is a virtual class file called 
	virtual_hash.h that serves as a parent class to all of the 
	aforementioned probes. Virtual_hash contains methods to access and 
	mutate the hash_table data member, as well as the hash_table data
	member itself. Also contained is an int data member called round,
	which is used to calculate the next viable hashed element in the event
	of a collision.

	Of course, a makefile is also included to allow easy compilation and
	clean-up of all specified files.

Compilation:

	Unlike my first project, sorting_master, each class file contains its 
	own main function so that each component can be compiled separately and
	to cut down on unneccessary wait time when part2 is being executed. Each
	class file has its own compilation line, which is as follows:

		linear.x: make linear
		quadratic.x: make quadratic
		double.x: make double
		part1.x: make part1

Execution:

	To run any of the hash executables individually, just type the name of
	the executable proceded by "./" like so:

		./linear.x

	As of now, the only size that the hashing_master projects hashes to is
	1,000,000, but this may be changed for testing purposes.
