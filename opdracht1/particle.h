#pragma once
class particle
{
public:
	particle();
	~particle();
	void Move(); 
	void Resize();
	void Draw();

private:
	int x;
	int y;
	int moveDir;
	float speed;
	float size;
	int color;

};

