#ifndef STACK_HPP
#define STACK_HPP


class Stack
{
public:
	Stack();
	~Stack();
	void	init(); // создание пустого стека
	void	push(int value); // добавление элемента в стек
	void	pop(); // получение элемента из стека с его последующим удалением из стека
	void	peek(); // получение элемента из стека без его удаления из стека
private:
};


#endif //STACK_HPP
