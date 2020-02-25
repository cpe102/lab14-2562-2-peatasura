void shuffle(int &a,int &b,int &c,int &d)
{
	
	int x[4]={a,b,c,d};

	for(int i=0;i<38;i++)
	{
			int o =rand() %4;
			int p = rand() %4;
	
			swap(x[o],x[p]);
	}
	
	a=x[0];
	b=x[1];
	c=x[2];
	d=x[3];
}