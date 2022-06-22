#pragma once
class NoSequence
{
	bool init;
	int prevEl;
	int N;
	int cont;
public:
	NoSequence() : init{ false }, prevEl{ 0 }, N{ 5 }, cont{1} {}
	NoSequence(int N);
	bool operator()(int el);

};

