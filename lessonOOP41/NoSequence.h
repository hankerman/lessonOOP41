#pragma once
class NoSequence
{
	bool init;
	int prevEl;
public:
	NoSequence() : init{ false }, prevEl{ 0 } {}
	bool operator()(int el);

};

