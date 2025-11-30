//Implement transmission of ping messages/trace route over a network topology consisting of 6 nodes and find the number of packets dropped due to congestion.


BEGIN { c=0; 
} 
{ 
	if($1=="d") 
	{ 
		c++; 
	}	 
} 

END { 
printf("Total n of %s pkts dropped due to congestion =%d\n",$5,c); 
}


//java -jar NSG2.1.jar
//gedit exam1.awk
//ns exam1.tcl
//awk -f exam1.awk exam1.tr

