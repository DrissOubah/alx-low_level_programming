Task 0 - Simple Makefile (0-Makefile):

Creates a basic Makefile.
The executable is named "school."
The all rule builds the executable.
No variables are used.
The make command compiles the source files (main.c and school.c) and generates the "school" executable.
The executable prints a pattern when executed.
Task 1 - Makefile with Compiler and Source Files (1-Makefile):

Similar to Task 0 but introduces variables for the compiler (CC) and source files (SRC).
The all rule builds the executable.
The make command compiles the source files and generates the "school" executable.
Task 2 - Makefile with Object Files (2-Makefile):

Introduces variables for object files (OBJ) and the executable name (NAME).
The all rule recompiles only updated source files.
The make command compiles source files into object files and links them to create the "school" executable.
Task 3 - Makefile with Cleaning Rules (3-Makefile):

Adds cleaning rules: clean, oclean, fclean, re.
The clean rule deletes temporary files.
The oclean rule deletes object files.
The fclean rule combines clean and oclean.
The re rule forces recompilation of all source files.
The make command demonstrates the use of these rules.
Task 4 - Comprehensive Makefile (4-Makefile):

Includes additional variables like CFLAGS for compiler flags.
The all rule recompiles only updated source files.
Cleaning rules (clean, oclean, fclean, re) are included.
The make command compiles with specified flags and creates the "school" executable.
Task 5 - Island Perimeter (5-island_perimeter.py):

Python function island_perimeter that calculates the perimeter of an island in a grid.
Grid is represented by a list of lists with 0 for water and 1 for land.
The function counts the perimeter of the land area in the grid according to specified rules.
No module imports are allowed, and the function must be documented.
