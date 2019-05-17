class DaThuc
{
	private:
		int b;
		int hs[1000];
	public:
		DaThuc(int n = 0, int a = 0)
		{
			b = n;
			for (int i=0;i<=n;i++)
			{
				hs[i]=a;
			}
		};
		void setHS(int v, int vt)
		{
			hs[vt]=v;
		};
		void Print()
		{
			for (int i=b;i>=0;i--)
			{
				if (hs[i]==0)
					continue;
				else if(hs[i]==1 && i==0)
					cout<<1;
				else if(hs[i]==1 && i==1)
					cout<<"x+";
				else if(i==1 && hs[i]!=0)
					cout<<hs[i]<<"x+";
				else if(hs[i]==1)
					cout<<"x^"<<i<<"+";
				else if(i==0 && hs[i]!=1)
					cout<<hs[i];
				else
					cout<<hs[i]<<"x^"<<i<<"+";
			}
		};
		friend DaThuc operator +(DaThuc &b) const //
		{
			for (int i
		}; 
	
	

};
