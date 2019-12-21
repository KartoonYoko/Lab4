#include <iostream>
#include "Classes/ChessBoard/ChessBoard.h"


#include <vector>



using namespace std;




int main()
{
	Pawn peshka; // 1,1
	Queen koroleva; // 1,1
	Bishop slon; // 1,1
	ChessBoard desk;

	cout << desk._pawn[2]->nameToString() << endl;
	cout << desk._pawn[2]->getFirstCoordinate() << endl;
	cout << desk._pawn[2]->getSecondCoordinate() << endl;
	desk.move(desk._pawn[2], 2, 1);
	cout << desk._pawn[2]->getFirstCoordinate() << endl;
	cout << desk._pawn[2]->getSecondCoordinate() << endl;

	cout << desk._bishop[2]->nameToString() << endl;
	cout << desk._bishop[2]->getFirstCoordinate() << endl;
	cout << desk._bishop[2]->getSecondCoordinate() << endl;
	desk.move(desk._bishop[2], 3, 5);
	cout << desk._bishop[2]->getFirstCoordinate() << endl;
	cout << desk._bishop[2]->getSecondCoordinate() << endl;

	peshka.setFirstCoordinate(3);
	peshka.setSecondCoordinate(3);
	cout << peshka.nameToString() << " First coordinate: " << peshka.getFirstCoordinate() << "; Second coordinate: " << peshka.getSecondCoordinate() << endl;
	slon.move(4, 4);
	cout << slon.nameToString() << " First coordinate: " << slon.getFirstCoordinate() << "; Second coordinate: " << slon.getSecondCoordinate() << endl;
	try
	{
		koroleva.move(9, 1);
	}
	catch (ChessExсeption e){
		cout << endl << "Exception was catched with code: " << e << endl;
	}
	cout << koroleva.nameToString() << " First coordinate: " << koroleva.getFirstCoordinate() << "; Second coordinate: " << koroleva.getSecondCoordinate() << endl;
}

