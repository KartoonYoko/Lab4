#include <iostream>





using namespace std;




int main()
{
	// goto:добавить класс шахматная доска
	///asdadasdasd

	Pawn peshka; // 1,1
	Queen koroleva; // 1,1
	Bishop slon; // 1,1
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

