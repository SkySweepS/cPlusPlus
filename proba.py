

price = float(input())
payed = float(input())

change = (payed - price) * 100

coin1 = 0
coin50 = 0
coin20 = 0
coin10 = 0
coin5 = 0
coin_2 = 0
coin_1 = 0

while change > 0:
    if change == 0:
        break

    if change - 100 >= 0:
        change -= 100
        coin1 += 1
    elif change - 50 >= 0:
        change -= 50
        coin50 += 1
    elif change - 20 >= 0:
        change -= 20
        coin20 += 1
    elif change - 10 >= 0:
        change -= 10
        coin10 += 1
    elif change - 5 >= 0:
        change -= 5
        coin5 += 1
    elif change - 2 >= 0:
        change -= 2
        coin_2 += 1
                    
    elif change - 1 >= 0:
        change -= 1
        coin_1 += 1
            
           
            
        
if coin1 > 0:
    print(f"{coin1} x 1 lev")
if coin50 > 0:
    print(f"{coin50} x 50 stotinki")
if coin20 > 0:
    print(f"{coin20} x 20 stotinki")
if coin10 > 0:
    print(f"{coin10} x 10 stotinki")
if coin5 > 0:
    print(f"{coin5} x 5 stotinki")
if coin_2 > 0:
    print(f"{coin_2} x 2 stotinki")
if coin_1 > 0:
    print(f"{coin_1} x 1 stotinka")
            
        
        
        
        
        
        
        
                
                
                
                
                
        






