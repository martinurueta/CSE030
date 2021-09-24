import csv
with open('Restaurants.csv', newline='') as csvfile:
    vote = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in vote:
        print(', '.join(row))


