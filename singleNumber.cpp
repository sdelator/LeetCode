/*Given an array of integers, every element appears twice except for one. Find that single one.*/
//Author: Sandra Delatorre

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
    vector<int> nums;
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	
       //sort done
       bool flag = 0;
       int count = 0, k = 0, j=0;
       if(nums.size()==1)
       {
         return nums[0];
       }//if one element
       else
      {
        for(int i =0; i < nums.size();i++)
        {
          j = i+1;   
          while(nums[i] != nums[j] && j != nums.size())
          {  
              
              if(nums[i] == nums[j])
              { 
                //  i++;
				  flag =1;
                  break;  
              } //found a pair so dont return anything
			  j++;
          }//keep looking through end of vector
		 // cout << j<< "  here!!";
		  if(j == nums.size() && flag == 0) //once we reached the end then start searching from beginning again
		  {   
		      
			  while(k != i) //k!= i means that it has already met in the middle
			  {
				  if(nums[i] == nums[k])
				  {
					  flag =1;
					  break;
				  }
				  k++;
			  }
			  
			  if(flag == 0)
			  {
				  cout << nums[i];//return nums[i];
			  }
			  k=0;
		  }
          j=0;
		  flag =0;
        }

      }//more than one element 

    } 
