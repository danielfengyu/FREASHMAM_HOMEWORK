	#include <iostream.h>
	class Animal;
	void SetValue(Animal&, int);
	void SetValue(Animal&, int, int);
	
	class Animal
	{
	public:
		Animal():itsWeight(0),itsAge(0){}
		void show(){cout<<itsWeight<<endl<<itsAge<<endl;}
	protected:
		int itsWeight;
		int itsAge;
	};
	void SetValue(Animal& ta, int tw)
	{

		// ����itsWeightֵ
	}
	void SetValue(Animal& ta, int tw, int tn)
	{
		// ����itsWeight��itsAgeֵ
	}
	
	int  main()
	{
		Animal peppy;
		SetValue(peppy, 5);
		peppy.show();
		SetValue(peppy, 7, 9);
		peppy.show();
		return 0;
	}