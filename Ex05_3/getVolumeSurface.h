#pragma once
//構造体の定義
struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize;//送れる宅急便サイズ
};

//関数のプロトタイプ
void getVolumeSurface(BOX* box);
bool isSendable(BOX* box);
