/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-24
 */
#include<iostream>
using namespace std;

int n,t;
string s;

int main()
{
	cin>>t; 
	
	while(t--)
	{
		cin>>n>>s;
		bool flag = true;
		for(int i = 0;i < s.size();i++)
		{
			if(s[i] != 'W') 
			{
				int j = i;
				while(s[j] == s[i] && j < s.size()) j++;
				if((j == s.size() || s[j] == 'W') && (i == 0 || s[i-1] == 'W'))
				{
					flag = false;
					break;	
				}	
				i = max(i,j-1);		
			}
		}
		if(flag)puts("YES");
		else puts("NO");
	}
} 
