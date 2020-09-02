
class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(), A.begin()+4);
        string res = "";
        if (A[0] < 2 && A[1] < 6) {
              if (A[1] < 3) {
                  if (A[3] < 3) {
                      res = to_string(A[3])+to_string(A[2])+":"+to_string(A[1])+to_string(A[0]);
                      return res;
                  }
                  else if (A[2] < 4) {
                      if (A[2] == 3) {
                          if (A[1] != 2) {
                                 res = to_string(A[1])+to_string(A[3])+":"+to_string(A[2])+to_string(A[0]);
                                 return res;                    
                          }
                          else {
                             if (A[3] < 6) {
                                 res = to_string(A[1])+to_string(A[2])+":"+to_string(A[3])+to_string(A[0]);
                                 return res; 
                             }
                             else {
                                 res = to_string(A[1])+to_string(A[2])+":"+to_string(A[0])+to_string(A[3]);
                                 return res;  
                              }  
                          }
                      }
                      else if (A[2] == 2) {
                          if (A[3] == 3) {
                             res = to_string(A[2])+to_string(A[3])+":"+to_string(A[1])+to_string(A[0]);
                             return res; 
                          }
                          else if (A[3] < 6) {
                             res = to_string(A[2])+to_string(A[1])+":"+to_string(A[3])+to_string(A[0]);
                             return res;  
                          }
                          else {
                             res = to_string(A[2])+to_string(A[1])+":"+to_string(A[0])+to_string(A[3]);
                             return res;  
                          }       
                      }
                      else {
                         res = to_string(A[2])+to_string(A[3])+":"+to_string(A[1])+to_string(A[0]);
                         return res;  
                      }
                  }    
                  else {
                      if (A[1] != 2) {
                          if (A[2] < 6) {
                              res= 
                            to_string(A[1])+to_string(max(A[2],A[3]))+":"+
                                  to_string(min(A[2], A[3]))+to_string(A[0]);
                               return res;
                          }
                          else {
                              res = to_string(A[1])+to_string(A[3])+":"+to_string(A[0])+to_string(A[2]);
                               return res;
                          }
                      }
                      else {
                         if (A[2] == 3) {
                             if (A[3] < 6) {
                              res = to_string(A[1])+to_string(A[2])+":"+to_string(A[0])+to_string(A[3]);
                               return res;
                             }
                             else {
                               res=  to_string(A[1])+to_string(A[2])+":"+to_string(A[3])+to_string(A[0]);
                               return res;  
                             }
                          }
                          else if (A[3] == 3) {
                              res = to_string(A[1])+to_string(A[3])+":"+to_string(A[2])+to_string(A[0]);
                               return res;
                          }
                          else if (A[2] < 6) {
                              if (A[3] < 6) {
                                  res = to_string(A[1])+to_string(A[0])+":"+to_string(A[3])+to_string(A[2]);
                                   return res;
                              }
                              else {
                                  res = to_string(A[1])+to_string(A[0])+":"+to_string(A[2])+to_string(A[3]);
                                   return res;
                              }
                          }
                          else {
                             res = to_string(A[0])+to_string(A[3])+":"+to_string(A[1])+to_string(A[2]);
                               return res; 
                          }    
                      }                       
                  }
              }
              else {
                  if (A[2] < 6) {
                      res = to_string(A[0])+to_string(A[3])+":"+to_string(A[2])+to_string(A[1]);
                      return res;
                  }
                  else {
                     res = to_string(A[0])+to_string(A[3])+":"+to_string(A[1])+to_string(A[2]);
                     return res; 
                  }       
              }  
        }
        else if (A[0] == 2 && A[1] < 4 && A[2] < 6) {
            if (A[1] == 2) {
                if (A[3] == 3 && A[2] == 3) {
                   res = to_string(A[0])+to_string(A[2])+":"+to_string(A[3])+to_string(A[0]);
                   return res;
                }
               else if (A[3] == 3) {
                   res = to_string(A[0])+to_string(A[3])+":"+to_string(A[0])+to_string(A[0]);
                   return res;
                }
                else if (A[2] == 3 && A[3] < 6) {
                    res = to_string(A[0])+to_string(A[2])+":"+to_string(A[3])+to_string(A[0]);
                          return res;
                }
                else if (A[3] < 6) {
                    res = to_string(A[0])+to_string(A[1])+":"+to_string(A[3])+to_string(A[2]);
                          return res;
                }
                else {
                   res = to_string(A[0])+to_string(A[1])+":"+to_string(A[2])+to_string(A[3]);
                          return res; 
                }
            }
            else {
               if (A[3] == 3) {
                   res = to_string(A[0])+to_string(A[3])+":"+to_string(A[3])+to_string(A[3]);
                   return res;
                }
                else if (A[3] < 6) {
                    res = to_string(A[0])+to_string(A[1])+":"+to_string(A[3])+to_string(A[2]);
                          return res;
                }
                else {
                   res = to_string(A[0])+to_string(A[1])+":"+to_string(A[2])+to_string(A[3]);
                          return res; 
                }
            }
        }
        else {return "";}     
    }
};
