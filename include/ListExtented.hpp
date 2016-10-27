#include "List.hpp"
#ifndef LISTS_EXTENTED_HPP
#define LISTS_EXTENTED_HPP

template<typename ListDataType>
void removeDuplicates(List<ListDataType> &source)
{
	for(int i = 0; i < source.getSize(); i++)
	      for(int j = i+1; j < source.getSize();)
	      {
	           if(source[i] == source[j])
	           {
	                source.removeElem(j);
	                continue;
	           }
	           j++;
	      }
}

template <typename ListDataType>
bool isListPalindrome(List<ListDataType> &source)
{
	unsigned int halfOfListSize = source.getSize();
	for(int i = 0; i < halfOfListSize >> 1; i++)
		if(source[i] != source[halfOfListSize-1-i])
			return false;
	return true;
}

#endif // LISTS_EXTENTION_HPP
