  int least=INT_MAX ;
      int profit = 0;
      int cur_val = 0;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if( prices[i] < least )
           {
                least = prices[i];
            }
            
            cur_val = prices[i]  -  least;
            
            if(profit < cur_val)
            {
                profit = cur_val;
            }
            }
        
     return profit;
    }