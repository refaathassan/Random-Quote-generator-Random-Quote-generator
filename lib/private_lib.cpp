#include"private_lib.h"
static int index=0;
std::string choice_random_q(std::string str)
{
        std::vector<std::string> vec;
        int curr_ind=0;
        int hold_last=str.find(",");
        vec.push_back(str.substr(curr_ind,hold_last));
        while(hold_last!=(str.size()-1))
        {
          curr_ind=hold_last+1;
          hold_last=str.find(",",curr_ind);
          vec.push_back(str.substr(curr_ind,hold_last-curr_ind));
        }
        index=std::rand()%vec.size();
        if(index>(vec.size()-1))
        {
            index=vec.size()-1;
            return vec[index];
        }
        else
          return vec[index];    
}
std::string Answer_choice_random_q(std::string str)
{
        std::vector<std::string> vec;
        int curr_ind=0;
        int hold_last=str.find(",");
        vec.push_back(str.substr(curr_ind,hold_last));
        while(hold_last!=(str.size()-1))
        {
          curr_ind=hold_last+1;
          hold_last=str.find(",",curr_ind);
          vec.push_back(str.substr(curr_ind,hold_last-curr_ind));
        }
        return vec[index];    
}