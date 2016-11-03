#include "Stack.h"
#include <gtest.h>

TEST(StackOnList, can_fill_correctly)
{
	Stack<int> stk;
	for(int i = 0; i < 10; i++)
		stk.push(i);
	for(int i = 9; !stk.isEmpty(); i--)
	{
		EXPECT_EQ(i, stk.top());
		stk.pop();
	}
}

TEST(StackOnList, is_empty_when_just_born)
{
	Stack<int> stk;
	EXPECT_FALSE(stk.isEmpty());
}

TEST(StackOnList, can_fully_pop)
{
	Stack<int> stk;
	for(int i = 0; i < 10; i++)
		stk.push(i);
	while(!stk.isEmpty())
		stk.pop();
	EXPECT_FALSE(stk.isEmpty());
}





