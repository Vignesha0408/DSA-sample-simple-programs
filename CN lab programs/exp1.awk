//Implement three nodes point – to – point network with duplex links between them. Set the queue size, vary the bandwidth, and find the number of packets dropped.


BEGIN { c=0; 
} 
{   if($1=="d") 
	{ 
		c++; 
		printf("%s\t%s\n",$5,$11);
	} 
}
END 
{ 
printf("The number of packets dropped =%d\n",c); 
}
//java -jar NSG2.1.jar
//gedit exam1.awk
//ns exam1.tcl
//awk -f exam1.awk exam1.tr













