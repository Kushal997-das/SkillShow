//ROUND ROBIN
#include<stdio.h>
 
int main()
{
 
  int i,j,n,t,remain,flag=0,tq;
  int wt=0,tat=0,at[10],bt[10],rt[10];
  printf("Enter Total Process:\t ");
  scanf("%d",&n);
  remain=n;

  for(i=0;i<n;i++)
  {
    printf("Enter Arrival Time & Burst Time for Process id %d:",i+1);
    scanf("%d",&at[i]);
    scanf("%d",&bt[i]);
    rt[i]=bt[i];
  }
  
  printf("Enter Time Quantum:\t");
  scanf("%d",&tq);
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
  for(t=0,i=0;remain!=0;)
  {
    if(rt[i]<=tq && rt[i]>0)
    {
      t+=rt[i];
      rt[i]=0;
      flag=1;
    }
    else if(rt[i]>0)
    {
      rt[i]-=tq;
      t+=tq;
    }
    if(rt[i]==0 && flag==1)
    {
      remain--;
      printf("P[%d]\t|\t%d\t|\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
      wt+=t-at[i]-bt[i];
      tat+=t-at[i];
      flag=0;
    }
    if(i==n-1)
      i=0;
    else if(at[i+1]<=t)
      i++;
    else
      i=0;
  }
  printf("Avg Turnaround Time = %f",tat*1.0/n);
  printf("\nAverage Waiting Time= %f\n",wt*1.0/n);

  return 0;
}
