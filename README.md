kernal image to load in kernal .this program prints a hello when inserting the module to the kernal and prints goodbye while removing the module from the kernal.

steps:
1.initially ldd.c and the makefile will be there after typing make in the terminal all other files inculding ldd.ko will be obtained.
2.to insert the module use the comment "sudo insmod ldd.ko"
3.to see the message printed in the buffer use"sudo dmesg"
2.to remove the module use the comment "sudo rmmod ldd.ko"
5.to clean the log in the buffer  use"sudo dmesg- c"
6.to see the information about the module use"modinfo ldd.ko"
