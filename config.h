//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "sb-salawat",  60, 1}, 
  {"",  "sb-clock",  60, 1}, 
  {"",  "echo \";\"",  0, 0},   
  {"",  "sb-cpu", 5,  10},
  {"",  "sb-cpubars", 2,  10},
  {"",  "sb-memory", 2,  10},
  {"",  "sb-internet", 5,  4},
  {"",  "sb-volume ", 0,  10},
  {"",  "sb-battery", 10,  4},
  
  
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

