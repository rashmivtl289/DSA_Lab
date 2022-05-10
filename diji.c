#include<stdio.h>
#include<stdlib.h>
int n,d[10], p[10],cost[6][6]; 

void dijk(int src)    
 {         
  int i,j,u,v,min;     
  int s[10];     
  for(i=0;i<n;i++)      
   {       
    d[i]=cost[src][i];       
    s[i]=0;       
    p[i]=src;      
   }     
  s[src]=1; 
 for(i=1;i<n;i++)      
  {        
   min=99;        
   u=-1;        
    for(j=0;j<n;j++)         
     {  
       if(s[j]==0)   
        {   
         if(d[j]<min)   
          {       
           min=d[j];       
           u=j;   
          } 
        }      
     }      
  if(u==-1)      
  return;      
   s[u]=1;      
  for(v=0;v<n;v++)         
   { 
    if(s[v]==0)   
     {
      if(d[u]+cost[u][v]<d[v])    
        {       
          d[v]=d[u]+cost[u][v];       
          p[v]=u;    
        }  
    }       
  }    
 }  
}      


void main() 
{      
  int j,src,i;      
  printf("Number of vertices");      
  scanf("%d",&n);      
  printf ("Enter the cost adjacency matrix\n");                  
  for(i=0;i<n;i++)    // reading      
   {              
    for(j=0;j<n;j++)                
     {                  
      scanf("%d",&cost[i][j]);                                
     }                    
   }              

                
   for(i=0;i<n;i++)   //print          
    {              
      for(j=0;j<n;j++)                
       {                 
         printf("%d\t",cost[i][j]);                
       }                        
     printf("\n");             
   }           


  printf ("Enter the source:\n");     
  scanf("%d",&src);                 
  dijk(src);     
  printf("\nThe shortest path and distance:\n");    
  for(j=0;j<n;j++)             
  {                    
    if(d[j]==99)                    
    printf(" no path from%d to %d",src,j);                    
     else                    
       i=j;           
        while(i!=src)           
          {    
           printf("%d<<",i);    
           i=p[i];           
           }           
  printf("%d = %d",i,d[j]);                  
  printf("\n");             
 }    
}
