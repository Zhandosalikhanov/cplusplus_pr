from colorama import Fore, Back

SIZE = 3
UNREACHABLE_VALUE = 100

def checkWinner(counters):
    for counter in counters:
        if counter == 0:
            print(Back.YELLOW)
            print(name_2, "won! 👍")
            return False
        elif counter == 3:
            print(Back.YELLOW)
            print(name_1, "won! 👍")
            return False
    return True


# matrix initialization
name_1 = input('First player: ')
name_2 = input('Second player: ')
matrix = []
for i in range(0, SIZE):
    matrix.append([None]*SIZE) 

turn = True  # True is for the first player, False is for the second player
step = 0
ok = True
print(Fore.BLACK)
while ok:
    # Handle user input with validation
    if turn:
        print(Back.GREEN)
        print("Your turn,", name_1, ":")
    else:
        print(Back.GREEN)
        print("Your turn,", name_2, ":")

    coordinates = input().split()

    if len(coordinates) != 2:
        print(Back.RED)
        print("you should input 2 coordinates")
        continue

    valid_integers = True
    for coordinate in coordinates:
        if not coordinate.isnumeric():
            valid_integers = False
            break
    if not valid_integers:
        print(Back.RED)
        print("you should input integer")
        continue

    valid_coordinates = True
    for coordinate in coordinates:
        coordinate = int(coordinate)
        if coordinate < 1 or coordinate > SIZE:
            valid_coordinates = False
            break
    if not valid_coordinates:
        print(Back.RED)
        print("coordinate is out of range")
        continue

    x, y = int(coordinates[0])-1, int(coordinates[1])-1
    if matrix[x][y] is not None:
        print(Back.RED)
        print("this position has been already occupied")
        continue

    matrix[x][y] = turn
    turn = not turn
    print(Back.BLUE)
    for i in range(SIZE):
        for j in range(SIZE):
            if matrix[i][j] == True:
                print('⭕️',end = " ") 
            elif matrix[i][j] == False:
                print('❌',end = " ") 
            else:
                print('🔲',end = " ")
        print()

    for i in range(SIZE):
        counters = [0, 0]
        for j in range(SIZE):
            # Check by row
            if matrix[i][j] is None:
                counters[0] = UNREACHABLE_VALUE
            elif matrix[i][j]:
                counters[0] += 1

            # Check by column
            if matrix[j][i] is None:
                counters[1] = UNREACHABLE_VALUE
            elif matrix[j][i]:
                counters[1] += 1

        ok = checkWinner(counters)
        if(ok == False):
            break
    
    else:
        counters = [0, 0]
        for i in range(SIZE):
            # Check by main diagonal
            if matrix[i][i] is None:
                counters[0] = UNREACHABLE_VALUE
            elif matrix[i][i]:
                counters[0] += 1

            # Check by conter diagonal
            if matrix[i][SIZE - i - 1] is None:
                counters[1] = UNREACHABLE_VALUE
            elif matrix[i][SIZE - i - 1]:
                counters[1] += 1

        ok = checkWinner(counters)
        if(ok == False):
            break


        step += 1
        if step == SIZE * SIZE:
            print(Back.YELLOW)
            print("withdraw")
            ok = False