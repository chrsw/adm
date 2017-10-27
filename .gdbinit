# GDB initialization file for Algorithm Design Manual projects

# Open the file we want to debug
file sel_sort

# Put breakpoints around the selection sort function to observe the results
break sel_sort.c:27
break sel_sort.c:28

# Run the program
r

# Show the sorted data and unsorted data
p s
c
p s
c

quit
