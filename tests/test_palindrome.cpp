#include "ListExtented.h"
#include <gtest.h>

TEST(ListPalindrome, correct_answer_on_empty_list__is_palindrome)
{
	List<int> list;
	EXPECT_TRUE(isListPalindrome(list) == true);
}

TEST(ListPalindrome, correct_answer_sorted_list__not_palindrome)
{
	List<int> list;
	for(int i = 0; i < 5;i++)
		list.push(i);
	EXPECT_TRUE(isListPalindrome(list) == false);
}

TEST(ListPalindrome, correct_answer_when__not_palindrome)
{
	List<int> list;
	for(int i = 0; i < 5; i++)
	list.push(i);
	list.push(7);
	list.push(127);
	for(int i = 0; i < 5; i++)
	list.push(4-i);
	EXPECT_TRUE(isListPalindrome(list) == false);
}

TEST(ListPalindrome, correct_answer_when__is_palindrome)
{
	List<int> list;
	for(int i = 0; i < 5; i++)
	list.push(i);
	for(int i = 0; i < 5; i++)
	list.push(4-i);
	EXPECT_TRUE(isListPalindrome(list) == true);
}





