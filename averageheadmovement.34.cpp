#include<stdio.h>
#include<stdlib.h>
void sortTracks(int *Tracks,int numTracks){
	int i,j,temp;
	for(i=0;i<numTracks-1;j++){
		for(j=0;j<numTracks;j++){
			if(Tracks[j]>Tracks[j+1]){
				temp=Tracks[j];
				Tracks[j]=Tracks[j+1];
				Tracks[j+1]=temp;
			}
		}
	}
}
int findClosestTrack(int *tracks,int numTracks,int headPos,int direction){
	int ClosestTrack=-1;
	if(direction==1){
		for(int i=0;i<numTracks;i++){
			if(tracks[i]>=headPos){
				ClosestTrack=i;
				break;
				
			}
	}
}
}
int main();
   int numTracks=9;
   int Tracks=(55,58,60,70,18,19,150,160,184);
   int headPos=50;
   int direction=1;
   int totalheadmovement=0;
   int numRequest=num Tracks;
   sortTrack(tracks,numTracks);
   int ClosestTrack=findClosestTrack(tracks,num Tracks,headPos,direction);
   while (num Request>0){
   	     headPos=tracks[ClosestTrack];
   	     printf("head moved to track%d\n",headPos);
   	     totalheadmovement+=abs(headPos-tracks[Closest Track]);
   	     for(int i=closest track,i<numTracks-1;i++){
   	     	tracks[i]=tracks[i+1];
   	     	    return ClosestTrack;

			}
			numTracks--;
			numRequest--;
			if (num tracks==0){
				break;
				
			}
			if(headPos==racks[0]){
				direction=1;
			}else if(headPos==trecka[numtracks-1]){
				direction=0;
				
			}
			ClosestTrack=findClosestTrack(tracks,num tracks,headPos,direction);
			
}
 float averageheadmovement=(float)totalheadmovement/numRequest;
 printf("averageheadmovement:%2f\n",averageheadmovement);
 return 0;
}
