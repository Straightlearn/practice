 main()
 {
     int x,r;
     printf("Enter a number-");
     scanf("%d",&x);
     for(r=2;r<=x-1;r++)
         if(x%r==0)
            break;
     if(r==x)
        printf("%d is a Prime Number,x");
     else
        printf("%d is not a Prime Number,x\n");
 }
