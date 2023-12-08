def compute(S, X): 
    A = (S - X)//2
    a = 0
    b = 0
    for i in range(64): 
        Xi = (X & (1 << i)) 
        Ai = (A & (1 << i)) 
        if (Xi == 0 and Ai == 0): 
            pass
              
        elif (Xi == 0 and Ai > 0): 
            a = ((1 << i) | a)  
            b = ((1 << i) | b)  
          
        elif (Xi > 0 and Ai == 0): 
            a = ((1 << i) | a)   
        else: 
            print(-1) 
            return
  
    print("a = ",a) 
    print("b =", b) 
  
S = 1
X = 4
compute(S, X)