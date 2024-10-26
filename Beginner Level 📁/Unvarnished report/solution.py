S=input()
T=input()

if S==T:
    print(0)
else:
    if len(S)==len(T):
        for i in range(len(S)):
            if S[i]!=T[i]:
                print(i+1)  
                break  
    elif len(S)>len(T):
        for i in range(len(T)):
            if S[i]!=T[i]:
                print(i+1)  
                break  
        else:        
            a=len(S)-len(T)
            print(len(S)-a+1)
    else:
        for i in range(len(S)):
            if S[i]!=T[i]:
                print(i+1)  
                break  
        else:        
            a=len(T)-len(S)
            print(len(T)-a+1)
