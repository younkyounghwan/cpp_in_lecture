#pragma once

#include "Position.h"

class Monster
{
private:
	std::string m_name;
	Position2D m_loc;

public:
	Monster(const std::string& name_in, const Position2D& pos_in)
		:m_name(name_in), m_loc(pos_in)
	{}

	void moveTo(const Position2D& pos_targert)
	{
		m_loc.set(pos_targert);
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& mon)
	{
		out << mon.m_name << " " << mon.m_loc;
		return out;
	}
};