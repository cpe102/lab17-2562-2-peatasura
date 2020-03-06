//Write your code here
#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
#include<vector>

using namespace std;

string lower(string x){

  for(int i=0;i<x.size();i++)        
         {
             
             x[i]=tolower(x[i]);
         
         }

         return x;
}
/*void grade(int x){
    char grade;
    if(x>80)
    {
        grade='A';
        v_grade.push_back(grade);
    }
    else if(x>69 && x<80)
    {
        grade = 'B';
         v_grade.push_back(grade);
    }
    else if(x>59 && 6<80)
    {
        grade = 'C';
         v_grade.push_back(grade);
    }
    else if(x>49 && x<60)
    {
        grade = 'D';
         v_grade.push_back(grade);
    }
    else{
        grade ='F';
         v_grade.push_back(grade);
    }
}*/

int main()
{
    ifstream fin("name_score.txt");
    vector<string> v_name,v_grade;
    string s;
    int score,a,b,c;
        char name[100];
        while(getline(fin,s))
    {
   
        
        
       
        //score = &a+&b;
        sscanf(s.c_str(),"%[^:]:%d %d %d",name,&a,&b,&c);
        score=a+b+c;
       // grade(score);
       // cout << name << score  << endl;
        
        v_name.push_back(name);
        string grade = (score >= 80 ? "A": score >= 70 ? "B" : score >= 60? "C" : score >= 50 ? "D":"F");
       v_grade.push_back(grade);
       // vector<string> g[i] = grade(score);
     //   s.push_back(name);
        

        /*while(s[i]){
            s[i] = toupper(s[i]);
            i++;
        }*/
       
    }
    string nn;
    while(true)
    {
        bool ch=0;
        int j=0;
        
        cout << "Please input your command : ";
         getline(cin,s);
         
        int  idx = s.find_first_of(" ");
        // search = nm.substr(0,5);
         string s1 = lower(s.substr(0,idx));
         string s2 = lower(s.substr(idx+1,s1.size()));
        // upper(s1);
        // cout << s1;
        if(s1=="exit")
        {
            break;
        }

         else if(s1=="name"){
             
               for(int i=0;i<v_name.size();i++)
               {
                   //upper(s2);
                   
                  // upper(v_name[i]);
                   if(s2==lower(v_name[i]))
                   {
                       cout << v_name[i] << "'s = " << v_grade[i] << "\n";
                       ch=1;
                   }
                   else if (ch!=1 && i+1>v_name.size())
                   {
                       cout << "Cannot found\n";
                   }
               } 

                
                 

            /* if(s2==v_name){
                 
             cout << s2 << "=" ;
             }
            */

         } 
          else if(s1=="grade")
        {
            
            for(int i=0;i<v_name.size();i++)
               {
                   //in==upper(s2);
                   int j;
                  // upper(v_name[i]);
                   if(s2==lower(v_grade[i]))
                   {
                       cout << v_name[i] <<"\n";
                       ch=1;
                   }
                   
                else if(ch!=1 && i+1==v_name.size())
                   {
                       cout << "Cannot found\n";
                   }
               } 
       
        }    
         else{
             cout << "Invalid Command\n";
         }
       

    
    }
   
    





}