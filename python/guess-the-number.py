import random

guessTaken = 0

name = raw_input('Hello, what is your name ? ')
number = random.randint(1,20)
print 'Well %s, I am thinking a number between 1 and 20.' % (name)
while guessTaken < 6:
    guess = int(raw_input('Take a guess : '))
    guessTaken = guessTaken + 1

    if guess < number:
        print 'Your guess was too low.'

    if guess > number:
        print 'Your guess was too high.'

    if guess == number:
        break

if guess == number:
    guessTaken = str(guessTaken)
    print 'Good job, %s ! You have guessed my number in %s guesses.' % (name, guessTaken)

if guess != number:
    print 'Nope. The number I was thinking was', number

