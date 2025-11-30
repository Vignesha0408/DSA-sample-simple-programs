//Implement an Ethernet LAN using n nodes and set multiple traffic nodes and plot congestion   window for different source / destination. 

BEGIN{ 
} 
{ 
	if($6=="cwnd_") 
		{printf("%f\t%f\t\n",$1,$7);
		} 
} 
END{ 
} 
//java -jar NSG2.1.jar
//gedit exam1.awk
//ns exam1.tcl
//awk -f exam1.awk exam1.tr

//awk -f exam1.awk file1.tr >a1

//awk -f exam1.awk file2.tr >a2
//xgraph a1 a2

