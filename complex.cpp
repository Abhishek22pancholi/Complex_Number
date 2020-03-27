#include<iostream>
using namespace std;
class complex
{
	int real1,real2;
	int img1,img2;
	int sum1,sum2;
	public:
		
	    void inputvalues( )
	    {
	    	cout<<"enter the two real and img part";
	    	cin>>real1>>img1>>real2>>img2;
		}
		void getsum()
		{
			sum1=real1+real2;
			sum2=img1+img2;
		}
		void showsum()
		{
			cout<<"new formed complex number is"<<sum1<<"+"<<sum2<<"i"<<endl;
		}
};
int main()
{
	complex a1,a2;
	a1.inputvalues();
	a1.getsum();
	a1.showsum();
	a2.inputvalues();
	a2.getsum();
	a2.showsum();
	return 0;
}

