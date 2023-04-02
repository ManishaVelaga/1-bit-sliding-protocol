#include<stdio.h>
int main()
{
   int w,i,f,frames[50];
   printf("Enter window size: "); //input window size
   scanf("%d",&w);
   printf("\nEnter number of frames to transmit: "); //input no of frames
   scanf("%d",&f);
   printf("\nEnter %d frames: ",f);
   for(i=1;i<=f;i++) //input frames
   scanf("%d",&frames[i]);
   printf("\nWith sliding window protocol the frames will be sent in the following manner (assuming no corruption of frames)\n\n");
   printf("Here window size is %d so, at each stage only %d frame is send and wait until Acknowledgement is sent by the receiver. \n\n",w,w);
   for(i=1;i<=f;i++)
   {
      if(i%w==0)
      {
        printf("Frame no. %d\n",frames[i]);
        printf("Acknowledgement is received\n\n"); //acknowledgement received
      }
      else
        printf("%d ",frames[i]);
    }
    if(f%w!=0)
    printf("\nAcknowledgement of above frames sent is received by sender\n");
    return 0;
}