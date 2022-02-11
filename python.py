star =  '*'
string = ''

max = input('How big?')

for x in range(0, int(max)):
    string = star + string
    print(string)

for y in range(0, int(max)):
    if string != '':
        string = string[:-1]
        print(string)