#include<stdio.h>
#include<stdlib.h>

 void get () 
{
  
int t, id[t], bt[t], wt[t], tat[t], p[t], i, j, a;
printf("\n*****************WELCOME****************\n");  
 
printf ("Enter the total no. of processes: ");
  
scanf ("%d", &t);
  
 
for (i = 0; i < t; i++)
    
    {
      
printf ("Enter id of process %d: ", i + 1);
      
scanf ("%d", &id[i]);
      
printf ("Enter burst time of process %d: ", i + 1);
      
scanf ("%d", &bt[i]);
      
printf ("Enter priority of process %d: ", i + 1);
      
scanf ("%d", &p[i]);
    
}
  
for (i = 0; i < t; i++)
    
    {
      
for (j = i + 1; j < t; j++)
	
	{
	  
if (p[i] > p[j])
	    
	    {
	      
a = p[i];
	      
p[i] = p[j];
	      
p[j] = a;
	      
a = bt[i];
	      
bt[i] = bt[j];
	      
bt[j] = a;
	      
a = id[i];
	      
id[i] = id[j];
	      
id[j] = a;
	    
}
	
}
      
wt[i] = 0;
    
}
  
for (i = 0; i < t; i++)
    
    {
      
for (j = 0; j < i; j++)
	
	{
	  
wt[i] = wt[i] + bt[j];
	
}
      
tat[i] = wt[i] + bt[i];
    
}
  
float avwt = 0, avtat = 0;
  
printf ("Process\tP\tBT\tWT\tTAT\n");
  
for (i = 0; i < t; i++)
    
    {
      
printf ("%d\t%d\t%d\t%d\t%d\n", id[i], p[i], bt[i], wt[i], tat[i]);
      
avwt = avwt + wt[i];
      
avtat = avtat + tat[i];
    
}
  
avwt = avwt / t;
  
avtat = avtat / t;
  
printf ("\nAverage Turnaround Time is: %f", avtat);
  
printf ("Average Waiting Time is: %f\n", avwt);

 
}


main () 
{
get();

}

