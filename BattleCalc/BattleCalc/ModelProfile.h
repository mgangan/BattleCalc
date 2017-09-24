#pragma once

class Profile
{
public:
	Profile() {}
	Profile( unsigned int health )
		: m_health( health )
	{}

	void SetValues(unsigned int move, unsigned int ws, unsigned int bs, unsigned int s,
		unsigned int t, unsigned int w, unsigned int a, unsigned int ld, unsigned int sv)
	{
		m_move = move;
		m_ws = ws;
		m_bs = bs;
		m_s = s;
		m_t = t;
		m_w = w;
		m_a = a;
		m_ld = ld;
		m_sv = sv;
	}

	unsigned int GetHealth() const { return m_health; }

	unsigned int GetMove() const { return m_move; }
	unsigned int GetWs() const { return m_ws; }
	unsigned int GetBs() const { return m_bs; }
	unsigned int GetS() const { return m_s; }
	unsigned int GetT() const { return m_t; }
	unsigned int GetW() const { return m_w; }
	unsigned int GetA() const { return m_a; }
	unsigned int GetLd() const { return m_ld; }
	unsigned int GetSv() const { return m_sv; }

private:
	unsigned int m_health; // profile low boundary

	unsigned int m_move;
	unsigned int m_ws;
	unsigned int m_bs;
	unsigned int m_s;
	unsigned int m_t;
	unsigned int m_w;
	unsigned int m_a;
	unsigned int m_ld;
	unsigned int m_sv;
};
