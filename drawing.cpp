#include <stdio.h>
#include <Math.h>
main()
{
    int x1,y1,x2,y2;
    char ch;
    printf("Give the coordinates of the first point:\n");
    scanf("%d %d",&x1,&y1 );
    printf("Give the coordinates of the second point:\n");
    scanf("%d %d",&x2,&y2);
    int a[]={x1,y1};
    int c[]={x2,y2};
    int b[]={x1,y2};
    int d[]={x2,y1};
    int len=d[0]-a[0];
    int br=b[1]-d[1];
    printf("Enter your option:\n");
    scanf("%c",ch);
    switch(ch){
        case 'a': {
                    int x,y;
                    printf("How much translation for x and y axis?\n");
                    scanf("%d %d",&x,&y);
                    a[0]=a[0]+x;
                    b[0]=b[0]+x;
                    c[0]=c[0]+x;
                    d[0]=d[0]+x;
                    a[1]=a[1]+y;
                    b[1]=b[1]+y;
                    c[1]=c[1]+y;
                    d[1]=d[1]+y;
                    printf("The coordinates after translation by (%d,%d) is: (%d,%d),(%d,%d),(%d,%d),(%d,%d)",x,y,a[0],a[1],b[0],b[1],c[0],c[1],d[0],d[1]);
        }
        break;
        case 'b':{
                    int x,y,s;
                    printf("Give the coordinates of the arbitrary point:");
                    scanf("%d %d",&x,&y);
                    printf("Give the scaling factor:");
                    scanf("%d",&s);
                    a[0]=x-s*len/2;
                    b[0]=x-s*len/2;
                    c[0]=x+s*len/2;
                    d[0]=x+s*len/2;
                    a[1]=y+s*br/2;
                    b[1]=y-s*br/2;
                    c[1]=y-s*br/2;
                    d[1]=y+s*br/2;
                    printf("The coordinates after scaling about (%d,%d) by%d is: (%d,%d),(%d,%d),(%d,%d),(%d,%d)",x,y,s,a[0],a[1],b[0],b[1],c[0],c[1],d[0],d[1]);
        }
        break;
        case 'c':{
            
        }
        break;
        case 'd':
        {
                    char internal;
                    printf("Give the option you want to perform or X if you want to stop:");
                    scanf("%c",&internal);
                    while(internal!='X')
                    {
                        if(internal=='a')
                        {
                        int x,y;
                    printf("How much translation for x and y axis?\n");
                    scanf("%d %d",&x,&y);
                    a[0]=a[0]+x;
                    b[0]=b[0]+x;
                    c[0]=c[0]+x;
                    d[0]=d[0]+x;
                    a[1]=a[1]+y;
                    b[1]=b[1]+y;
                    c[1]=c[1]+y;
                    d[1]=d[1]+y;
                    printf("The coordinates after translation by (%d,%d) is: (%d,%d),(%d,%d),(%d,%d),(%d,%d)",x,y,a[0],a[1],b[0],b[1],c[0],c[1],d[0],d[1]);    
                        }
                        if(internal=='b')
                        {
                            int x,y,s;
                    printf("Give the coordinates of the arbitrary point:");
                    scanf("%d %d",&x,&y);
                    printf("Give the scaling factor:");
                    scanf("%d",&s);
                    a[0]=x-s*len/2;
                    b[0]=x-s*len/2;
                    c[0]=x+s*len/2;
                    d[0]=x+s*len/2;
                    a[1]=y+s*br/2;
                    b[1]=y-s*br/2;
                    c[1]=y-s*br/2;
                    d[1]=y+s*br/2;
                    printf("The coordinates after scaling about (%d,%d) by%d is: (%d,%d),(%d,%d),(%d,%d),(%d,%d)",x,y,s,a[0],a[1],b[0],b[1],c[0],c[1],d[0],d[1]);
                        }
                        if(internal=='c')
                        {

                        }
                        printf("Enter choice:");
                        scanf("%c",internal);
                    }
        break;
        default:printf("None of the required criterias met");
    }



}
}
