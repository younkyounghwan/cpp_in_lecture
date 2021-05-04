#pragma once
#include <string>
#include <iostream>

class Position2D
{
private:
	int pos_x;
	int pos_y;

public:
	Position2D(const int& p_x, const int& p_y)
		: pos_x(p_x), pos_y(p_y) // copy initialize를 쓰면 안되는 이유?
	{}
	void set(const Position2D& pos_target)
	{
		set(pos_target.pos_x, pos_target.pos_y);
	}

	void set(const int& p_x, const int& p_y)
	{
		pos_x = p_x;
		pos_y = p_y;
	}
	

	friend std::ostream& operator << (std::ostream& out, const Position2D& pos)
	{
		out << pos.pos_x << " " << pos.pos_y;
		return out;
	}


};