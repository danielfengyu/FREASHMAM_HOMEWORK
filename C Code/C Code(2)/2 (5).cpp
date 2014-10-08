#include<iostream>
#include"utility"
using namespace std;
class GameOf21Point
{
private:
	Card deck[52];
	int dealPos;
	Card hands[8][21];
	int numOfCard[8];
	char name[8][LEN_OF_MAX_NAME];
	int numOfPlayer;
	void shuffle();
	int GetTotalScore(Card hand[21],int n);
	void ShowStatus(int num,bool hideFirstCardAndTotalScore = false);
	Card DealOneCard();
public:
	GameOf21Point();
	virtual~GameOf21Point(){};
	void Game();

};
GameOf21Point::GameOf21Point()
{
	int curPos=0;
	for(int suitPos=0;suitPos<4;suitPos++)
	{
		for(int rankPos=1;rankPos<13;rankPos++)
		{
			deck[curPos].suit=(SuitType)suitPos;
			deck[curPos].rank=(RankType)rankPos;
			curPos++;
		}
	}
	cout<<"how many people join game?（1~7）:";
	cin>>numOfPlayer;
	dealPos=0;
	int i;
	for(i=0;i<numOfPlayer;i++)
		numOfCard[i]=0;
	strcpy(name[0],"庄家");
	for(i=1;i<=numOfPlayer;i++)
	{
		cout<<"输入第"<<i<<"位玩家的姓名:";
		cin>>name[i];
	}
	cout<<"start game"<<endl;
}
void GameOf21Point::shuffle ()
{
	for(int curPos=51;curPos>0;curPos--)
	{
		int pos = GetRand(curPos+1);
		Swap(deck[pos],deck[curPos]);
	}
}
int GameOf21Point::GetTotalScore (Card hand[21],int n)
{
	int pos;
	int totalScore=0;
	for(pos=0;pos<n;pos++)
	{
		if(hand[pos].rank == ACE)
			totalScore+=11;
		else if(hand[pos]. >TEN)
			totalScore+=10;
		else
			totalScore+=(int)hand[pos].rank;
	}
	for(pos=0;totalScore>21&&pos<n;pos++)
	{
		if(hand[pos].rank ==ACE)
			totalScore-=10;
	}
	return totalScore;
}
void GameOf21Point::ShowStatus (int num,bool hideFirstCardAndTotalScore)
{
	cout<<name[num]<<":";
	if(hideFirstCardAndTotalScore)
		cout<<"<隐藏>";
	else
		cout<<hands[num][0];
	for(int i=1;i<numOfCard[num];i++)
		cout<<hands[num][i];
	if(!hideFirstCardAndTotalScore)
		cout<<"总分值"<<GetTotalScore(hands[num],numOfCard[num]);
	cout<<endl;
	if(GetTotalScore(hands[num],numOfCard[nu])>21)
		cout<<name[num]<<"引爆！"<<endl;
}
Card GameOf21Point::DealOneCard ()
{
	return deck[dealPos++];
}
void GameOf21Point::Game ()
{
	SetRandSeed();
	shuffle();
	int i,j;
	for(i=0;i<2;i++)
	{
		hands[0][numOfCard[0]++]=DealOneCard();
	}
	ShowStatus(0,true);
	for(i=1;i<=numOfPlayer;i++)
	{
		for(j=0;j<2;j++)
			hands[i][numOfCard[i]++]=DealOneCard();
		ShowStatus(i);
	}
	cout<<endl;
	for(i=1;i<=numOfPlayer;i++)
	{
		cout<<name[i]<<",你想再要一张牌吗！";
		if(UserSayYes())
		{
			hands[i][numOfCard[i]++]=DealOneCard();
			ShowStatus(i);
		}
	}
	ShowStatus(0);
		while(GetTotalScore(hands[0],numOfCard[0])<=16)
		{
			hands[0][numOfCard[0]++]=DealOneCard();
			ShowStatus(0);
		}
		cout<<endl;
		if(GetTotalScore(hands[0],numOfCard[0])>21)
		{
			for(i=1;i<=numOfPlayer;i++)
			{
				if(GetTotalScore(hands[i],numOfCard[i])<=21)
				{
					cout<<naem[i]<<",恭喜你，你赢了！"<<endl;
				}
				else
				
				{
					cout<<name[i]<<",对不起，你输了！"<<endl;

				}
			}
		}
		else
		{
			for(i=1;i<=numOfPlayer;i++)
			{
				if(GetTotalScore(hands[i],nnumOfCard[i])<=21&&GetTotalScore(hands[i],numOfCard[i])>GetTotalScore(hands[0],numOfCard[0]))
				{
					cout<<name[i]<<",恭喜你，你赢了！"<<endl;
				}
				else if(GetTotalScore(hands[i],numOfCard[i])==GetTotalScore(hands[0],numOfCard[0]))
				{
					cout<<name[i]<<",唉，你打平局了！"<<endl;
				}
				else
				{
					cout<<name[i]<<",对不起，你输了！"<<endl;

				}
			}
		}

}
typedef enum
{
	ACE=1,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING
}RankType;
typedef enum
	{
		CLUBS,DIAMONDS,HEARTS,SPADES
	}SuitType;
	struct Card
		{
			RankType rank;
			SuitType suit;
		};
		ostream & operator<<(ostream& outStream,const Card& card)
		{
			if(card.suit == CLUBS)
				cout<<"梅花";
			else if(card.suit == DIAMONDS)
				cout<<"方块";
			else if (card.suit == HEARTS)
				cout<<"红桃";
			else if(card.suit == SPADES)
				cout<<"黑桃";
			if(card.rank == ACE)
				cout<<"A";
			else if (card.rank == JACK)
				cout<<"J";
			else if (card.rank == QUEEN)
				cout<<"Q";
			else if(card.rank == KING)
				cout<<"K":
			return outStream;
		}
int main()
{
	bool bYes;
	do
	{
		GameOf21Point objGame;
		objGame.Game ();
		cout<<"你想在玩一次吗";
		bYes=UserSayYes();
	}while(bYes);
	system(PAUSE);
	return 0;
}