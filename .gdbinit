# GDB initialization file for Algorithm Design Manual projects

# Open the file we want to debug
file sel_sort

# Put breakpoints around the selection sort function to observe the results
break sel_sort.c:31
break sel_sort.c:32

# Run the program
r

# Show the critical data
p s
c
p s
c

quit
