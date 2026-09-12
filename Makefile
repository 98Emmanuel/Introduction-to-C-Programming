# add entries for all the additional programs
all: sum_numbers hello manipulate_two_numbers lab01_bonus

# linking of sum_numbers.o with functions.o
sum_numbers: sum_numbers.o functions.o
	gcc sum_numbers.o functions.o -o sum_numbers

# linking of sum_numbers.o with functions.o
manipulate_two_numbers: manipulate_two_numbers.o functions.o
	gcc manipulate_two_numbers.o functions.o -o manipulate_two_numbers

# linking of lab01_bonus.0
lab01_bonus:lab01_bonus.o functions.o
	gcc lab01_bonus.o functions.o -o lab01_bonus

hello: 
	gcc -o hello_world hello_world.c

# compile sum_numbers.c	
sum_numbers.o: sum_numbers.c
	gcc -c sum_numbers.c

# compile manipulate_two_numbers.c	
manipulate_two_numbers.o: manipulate_two_numbers.c
	gcc -c manipulate_two_numbers.c
	
# Compile lab01_bonus.c
lab01_bonus.o: lab01_bonus.c
	gcc -c lab01_bonus.c

# compile functions.c
functions.o: functions.h functions.c
	gcc -c functions.c

# remove generated files and programs
clean:
	rm functions.o sum_numbers.o sum_numbers
