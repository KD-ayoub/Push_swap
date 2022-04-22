# Push Swap

![ezgif com-crop](https://user-images.githubusercontent.com/38796098/57738594-6b6ae500-76b0-11e9-9d29-0f59ee825e8e.gif)

42 Algorithm Project - Sort problem

Given a set of integers, sort it using a predefined set of instructions using
two stacks. The instruction set is defined below. This program outputs a program
in push_swap instructions that sorts the input integers.

## Instruction set

 You have 2 stacks named a and b.

• At the beginning:

◦ The stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.

◦ The stack b is empty.

• The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:

----sa (swap a): Swap the first 2 elements at the top of stack a.
        Do nothing if there is only one or no elements.

----sb (swap b): Swap the first 2 elements at the top of stack b.
        Do nothing if there is only one or no elements.
        
----ss : sa and sb at the same time.

----pa (push a): Take the first element at the top of b and put it at the top of a.
        Do nothing if b is empty.
        
----pb (push b): Take the first element at the top of a and put it at the top of b.
        Do nothing if a is empty.
        
----ra (rotate a): Shift up all elements of stack a by 1.
        The first element becomes the last one.
        
----rb (rotate b): Shift up all elements of stack b by 1.
        The first element becomes the last one.
        
----rr : ra and rb at the same time.

----rra (reverse rotate a): Shift down all elements of stack a by 1.
        The last element becomes the first one.
        
----rrb (reverse rotate b): Shift down all elements of stack b by 1.
        The last element becomes the first one.
        
----rrr : rra and rrb at the same time.


## Compiling
Run `make`.

## Running
```
./push_swap 1 2 3 4
```

## Visualizer

To use a visualizer like the top gif, refer directly here : https://github.com/o-reo/push_swap_visualizer
