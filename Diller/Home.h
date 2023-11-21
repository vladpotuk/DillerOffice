#include "PackageDTO.h"
#include "Staff.h"
#include "DillerOffice.h"
#include "EndPoint.h"



struct Home
{
	static inline void show()
	{
		User* userFrom = new User();
		User* userTo = new User("Anonim", "Anonim", "Great Britain, London, st. Beiker apt. 45", "+14342334254234");
		User* users = new User[2]{
			*userFrom,
			*userTo
		};
		Staff* staff = new Staff(2, users);
		DillerOffice* DillerOffice_1 = new DillerOffice(1, "Great Britain, London, anonim", staff);
		DillerOffice* DillerOffice_2 = new DillerOffice(2, ", London, st. Traffalgar, anonim", staff);

		EndPoint* endPointFrom = new EndPoint("Great Britain, London, anonim", "25.11.2023", "-");
		EndPoint* endPointTo = new EndPoint("Great Britain, London, st. Traffalgar apt. 488", "26.11.2023", "15:00");

		Package<string>* package = new Package<string>("MESSAGE DATA", "London, Taffalgar app.488", 200, 10000);

		PackageDTO<string>* packageDTO = new PackageDTO<string>(userFrom, userTo, package, endPointFrom, endPointTo);

		PackageDTO<string>* packageDTORecive = new PackageDTO<string>();
		packageDTORecive->receive(nullptr);
		cout << "Data: " << packageDTORecive->getPackage()->getData() << endl;

	}
};
