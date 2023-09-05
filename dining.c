	int tph,philname[20],status[20],howhung,hu[20],cho;
	main()
	{
  		int i;,clrscr();
  		printf("\n Dining philospher problerm");
  		printf("\n Enter total no of philosphers: ");
  		scanf("%d",&tbh);
  	for(i=0;i<n;i++)
  	{
     		philname[i]=(i+1);
     		status[i]=1;
     }
      	printf("How many are hungey ;");
      	scanf("%d",&howhung);
      	if(howhung==tph)
      	{      	  
		printf(“\n All are hungry..\nDead lock stage will occur”);
		printf(\n”Exiting\n”);
	else{
	for(i=0;i<howhung;i++){
	printf(“Enter philosopher%dposition:” ,(i+1));
	scanf(“%d”,&hu[i]);
	status[hu[i]]=2;
	}
 	do
	{
	printf("1.One can eat at a time \t2.Two can eat at a time \t3.Exit \nEnter your choice:");
	scanf("%d", &cho);
	switch(cho)
	{
	case 1: one();
	break;
	case 2: two();
	break;
	case 3: exit(0);
	default:printf("\n Invalid option:");
	}
     }
   }
 }
one()	
{
  	int pos=0,x,i;
  	printf("\n Allow one philosopher to eat at anytime\n:");
  	for(i=0;i<howhung;pos++)
	{
	 	printf("\n p %d is granted to eat",philname[hu[pos]]);
	 	for(x=pos;x<howhung;x++)
	 	printf("\n p %d is waiting",philname[hu[x]]);
	 	}
	}
	two()
	{
	   int i,j,s=0,t,r,x;
	   printf("\n Allow two philosophers to eat at some time \n");
	   for(i=o;i<howhung;i++)
	   {
	    for(j=i+!;j<howhung;j++)
	    {
	      if labs(hu[i]-hu[j])>=1&&abs(hu[i]-hu[j]!=4)
	      {
	        printf("\n\nCombination%d\n",(s+1));
	        t=hu[i];
	        r=hu[j];
	        s++;
	        printf("\n p %d and p %d are generated to eat",philname[hu[i]],philname[hu[j]]);
	        for(x=0;x<howhung;x++)
	        {
	          if(hu[x]!=t)&&(hu[x]!=r)
	          printf("\n p %d is waiting",philname[hu[x]])
	          }
	    }
	}
    }
 }
