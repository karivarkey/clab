#include<stdio.h>
#include<math.h>
struct euc
{
    int x;
    int y;
};

struct euc dist1;
struct euc dist2;
struct euc dist3;
struct euc dist4;

float dist(int x1, int x2 , int y1 , int y2);


void main(){
    int sum;
    float distance1,distance2;
    printf("Enter the X co-ordinate of 1st point : ");
    scanf("%d",&dist1.x);
    printf("Enter the Y co-ordinate of 1st point : ");
    scanf("%d",&dist1.y);
    printf("Enter the X co-ordinate of 2st point : ");
    scanf("%d",&dist2.x);
    printf("Enter the Y co-ordinate of 2st point : ");
    scanf("%d",&dist2.y);
    printf("Enter the X co-ordinate of 3rd point : ");
    scanf("%d",&dist3.x);
    printf("Enter the Y co-ordinate of 3rd point : ");
    scanf("%d",&dist3.y);
    printf("Enter the X co-ordinate of 4th point : ");
    scanf("%d",&dist4.x);
    printf("Enter the Y co-ordinate of 4th point : ");
    scanf("%d",&dist4.y);
    printf("The distance between points one and two is : ");
    distance1 = dist(dist1.x,dist2.x,dist1.y,dist2.y);
    printf("%f\n",distance1);
    printf("The distance between points three and four is : ");
    distance2 = dist(dist3.x,dist4.x,dist3.y,dist4.y);
    printf("%f\n",distance2);
    
    printf("The sum of distances is :");
    printf("%f\n",distance1+distance2);
    
}



float dist(int x1 , int  x2,int y1,int y2)
{
        int xord , yord;
        float dist;
        xord = x2-x1;
        yord = y2-y1;
        xord = xord*xord;
        yord = yord*yord;
        dist = sqrt(xord+yord);
        return dist;
        
        
}
