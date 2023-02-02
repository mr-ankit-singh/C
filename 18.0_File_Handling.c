/*
#__ File Handling __#

   -A file is a container in computer storage devices used for storing data.
   
   Why files are needed?
       -When a program is terminated, the entire data is lost. 
       -Storing in a file will preserve your data even if the program terminates.
       -If you have to enter a large number of data, it will take a lot of time to enter them all.

   Types of Files
       -Text files : Text files are the normal .txt files.
       -Binary files : Binary files are mostly the .bin files in your computer.

   File Operations
       -Creation of a new file.
       -Opening an existing file.
       -Reading data from a file.
       -Writing data in a file.
       -Closing a file.

   Function For File Handling
   	    Function	 Description
	    fopen()	     opens new or existing file
        fclose()	 closes the file
	    fprintf()	 write data into the file
	    fscanf()	 reads data from the file

	    fputc()	     writes a character into the file
	    fgetc()	     reads a character from file
	    
	    fputw()	     writes an integer to file
	    fgetw()	     reads an integer from file

        fseek()      sets the file pointer to given position
	    ftell()	     returns current position
	    rewind()	 sets the file pointer to the beginning of the file

   Working with files
       -When working with files, you need to declare a pointer of type file. 
       -This declaration is needed for communication between the file and the program.
       -Syntax:
            FILE *fptr;

*/