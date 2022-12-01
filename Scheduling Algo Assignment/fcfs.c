#include<stdio.h>
int main()
{
      int i,j,n,bt[50],wt[50],tat[50];
      float awt=0,atat=0;
      printf("Enter the number of processes: ");
      scanf("%d",&n);
      printf("Enter the burst time of processes: ");
      for(i=0;i<n;i++)
      {
          scanf("%d",&bt[i]);
      }
      printf("process\t burst time\t waiting time\t turnaround time\n");
      for(i=0;i<n;i++)
      {
         wt[i]=0;
         tat[i]=0;
         for(j=0;j<i;j++)
        {
           wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
      }
      awt=awt/n;
      atat=atat/n;
      printf("Average Waiting Time = %f\n",awt);
      printf("Average Turn Around Time = %f\n",atat);
      return 0;
}
