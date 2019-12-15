class Solution {
public:    void replaceSpace(char *str, int length) {  
          int space_num = 0;      
		  for(int i = 0; i < length; ++i)    
		  {   if(str[i] == ' ')    
		  space_num++;  }           
		      for(int i = length-1; i >= 0; --i)    
			  {   if(str[i] == ' ')    {     
				  space_num--;      
				  str[i+space_num*2] = '%';    
				  str[i+space_num*2+1] = '2';  
				  str[i+space_num*2+2] = '0';   
			  }            
			  else   
			  {         
				  str[i + space_num*2] = str[i];  
			  }        
			  }   
}
}; 