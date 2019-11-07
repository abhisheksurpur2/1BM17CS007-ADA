import sys  
  

def minCoins(coins, m, V): 
      
   
    table = [0 for i in range(V + 1)] 
  
     
    table[0] = 0
  
    
    for i in range(1, V + 1): 
        table[i] = sys.maxsize 
  
    
    for i in range(1, V + 1): 
          
      
        for j in range(m): 
            if (coins[j] <= i): 
                sub_res = table[i - coins[j]] 
                if (sub_res != sys.maxsize and 
                    sub_res + 1 < table[i]): 
                    table[i] = sub_res + 1

    #print(sys.maxsize)

    return table[V] 
  
if __name__ == "__main__": 
  
    coins = [int (x) for x in input(" Enter available coins  ").split()] 
    m = len(coins) 
    V = int(input("enter amount to convert into change"))
    print("Minimum coins required is ",  
                 minCoins(coins, m, V)) 
