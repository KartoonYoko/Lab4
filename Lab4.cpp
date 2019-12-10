#include <iostream>
#include <C:\Users\E400\Desktop\sadf\Lab4\chess.h>




using namespace std;




int main()
{
	Pawn peshka; // 0,0
	Queen koroleva; // 0,0
	Bishop slon; // 0,0
	peshka.setFirstCoordinate(3);
	peshka.setSecondCoordinate(3);
	cout << peshka.nameToString() << "First coordinate: " << peshka.getFirstCoordinate() << "; Second coordinate: " << peshka.getSecondCoordinate() << endl;
	slon.move(4, 4);
	cout << slon.nameToString() << "First coordinate: " << slon.getFirstCoordinate() << "; Second coordinate: " << slon.getSecondCoordinate() << endl;
	try
	{
		koroleva.move(9, 1);
	}
	catch (ChessExсeption e){
		cout << endl << "Exception was catched with code: " << e << endl;
	}
	cout << koroleva.nameToString() << " First coordinate: " << koroleva.getFirstCoordinate() << "; Second coordinate: " << koroleva.getSecondCoordinate() << endl;
}

