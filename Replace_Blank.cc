class Solution {
  public:
    void replaceSpace(char *str,int length) {
          int new_len = length;
          for(int i=0;i<length;i++)
          {
              if(str[i]==' ')
              {
                    new_len+=2;
                                                   
              }
          }
          for(int i=length;i>=0;i--)
          {
              if(str[i]==' ')
              {
                   str[new_len--] = '0'; 
                   str[new_len--] = '2'; 
                   str[new_len--] = '%'; 
              }
              else 
              {
                  str[new_len--]=str[i];
              }
          }
    }
};
