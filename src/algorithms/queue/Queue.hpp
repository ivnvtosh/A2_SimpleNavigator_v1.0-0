#ifndef QUEUE_HPP
#define QUEUE_HPP


class Queue
{
public:
	Queue();
	~Queue();
	void	init(); // создание пустой очереди
	void	push(int value); // добавление элемента в очередь
	void	pop(); // получение элемента из очереди с его последующим удалением из очереди
	void	peek(); // получение элемента из очереди без его удаления из очереди
private:
};


#endif //QUEUE_HPP
