Goal: 
	-create a program that can take data from another file, use it, then export it to another file

Input:
	-the main file will input the data from the input.txt file
	-the converting stringstream variable will take in the string of the number

Output: 
	-the main file will output the results to a file named output.txt
	-the converting stringstream variable will output the int value of the string number

Steps:
	input.txt
		-create five sets of num,num,num and then a word
	
	main()
		-create all essential variables
		-open both the input and output files
		-create a while loop to run through each line of the input file
		-if the line is a number line add them to the sum
		-if its a word line use the previous sum to print the word x times to output.txt
		-repeat until end of input file
		-close both input.txt and output.txt

	output.txt
		-recives the words as many times ast the numbers before them specified 
