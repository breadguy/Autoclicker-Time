# Autoclicker-Time

Autoclicker that uses the time.h library and the clock functions to show time between certain actions and provide an example that allows for more efficient clicking without using Sleep.

## The Autoclicker

The Autoclicker itself is just a basic no delay autoclicker using mouse_event to simulate the clicks.

*Will inline gifs soon!
https://gyazo.com/d50280a142d2040d1e6cac9ef313a782

## Efficiency

By using functions in the time.h library to track the time elapsed instead of the Sleep function to wait x amount of time, we can execute code while waiting for y condition to occur.

In my [previous autoclicker](https://github.com/breadguy/Autoclicker) I used Sleep to pause the program before clicking again in order to get the cps i wanted. The problem with this is that while the program is paused, no code can be executed until the amount of time defined in the Sleep Function had elapsed.

While in small increments Sleep can be a useful and simpler alternative; say you wanted to wait, for example 15 seconds, before doing something. The program would have to stay suspended for 15 seconds, so if the user wanted to quit the program with a hotkey like insert or F12 they couldn't until that 15 seconds had passed.

## Live Stats

Displays the time it takes to execute certain actions.

*Will inline gifs soon!
https://i.gyazo.com/5977b498f20862e75a2cfa15e19862f7.mp4