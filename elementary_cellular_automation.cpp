/*An elementary cellular automaton is a one-dimensional cellular automaton where there are two possible states (labeled 0 and 1) and the rule to determine the state of a cell in the next generation depends only on the current state of the cell and its two immediate neighbors. Those three values can be encoded with three bits.
The rules of evolution are then encoded with eight bits indicating the outcome of each of the eight possibilities 111, 110, 101, 100, 011, 010, 001 and 000 in this order. Thus for instance the rule 13 means that a state is updated to 1 only in the cases 011, 010 and 000, since 13 in binary is 0b00001101.
The purpose of this task is to create a subroutine, program or function that allows to create and visualize the evolution of any of the 256 possible elementary cellular automaton of arbitrary space length and for any given initial state. You can demonstrate your solution with any automaton of your choice.
The space state should wrap: this means that the left-most cell should be considered as the right neighbor of the right-most cell, and reciprocally.
This task is basically a generalization of one-dimensional cellular automaton.*/

#include <bitset>
#include <stdio.h>

#define SIZE	           80
#define RULE               30
#define RULE_TEST(x)       (RULE & 1 << (7 & (x)))

void evolve(std::bitset<SIZE> &s) 
{
	int i;
	std::bitset<SIZE> t(0);
	t[SIZE-1] = RULE_TEST( s[0] << 2 | s[SIZE-1] << 1 | s[SIZE-2] );
	t[     0] = RULE_TEST( s[1] << 2 | s[     0] << 1 | s[SIZE-1] );
	
	for (i = 1; i < SIZE-1; i++)
		t[i] = RULE_TEST( s[i+1] << 2 | s[i] << 1 | s[i-1] );
	
	for (i = 0; i < SIZE; i++) 
		s[i] = t[i];
}

void show(std::bitset<SIZE> s) 
{
	int i;
	
	for (i = SIZE; --i; ) 
		printf("%c", s[i] ? '#' : ' ');
	
	printf("\n");
}

int main() 
{
	int i;
	std::bitset<SIZE> state(1);
	state <<= SIZE / 2;
	
	for (i = 0; i < 10; i++) 
	{
		show(state);
		evolve(state);
	}
	return 0;
}
