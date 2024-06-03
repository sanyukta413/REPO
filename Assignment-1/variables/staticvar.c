//static variable 
//initialized only once

void stat(void);

main()
{
int i;
for(i=1; i<=3; i++)
stat();
}

void stat(void)
{
    static int x=0;
 
    x=x+1;                  //x incremented t0 1
    printf("x=%d\n",x);      //value of x perists and next call adds another 1 making it 2 and so on
}
