using namespace std;
#include"Hand.h"
int main()
{


		Hand hand;
		HeroCard t1(Hero,"Monster", 123, 99, 100, 120);

		HeroCard t3(Hero, "Monster2", 1234, 98, 190, 90);
		MagicCards t2(Magic, "Magic1", 152,185,"Maha vsichki karti na protivnika ot igralnoto pole");
		
		hand.addCard(&t1);
		hand.addCard(&t2);
		hand.addCard(&t3);
		hand.print();
	


	
	return 0;
}