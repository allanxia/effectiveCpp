#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#define ARRAYSIZE 10
const int arraySize=10;

class GamePlayer
{
	public:
	enum {NumTurns=5 };
	private:
	static const int intNum=5;//��������ʽ
	int scores[NumTurns];//ʹ�øó���	
};
int main()
{
//	int arr[ARRAYSIZE]={1,2,3,4,5};
//	int a=GamePlayer::NumTurns;
std::cout<<&(GamePlayer::NumTurns)<<std::endl;
	return 0;
}
