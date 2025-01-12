
//#define UNIX
#define WINDOWS

float process_data(int data)
{
#ifdef UNIX
	std::cout << "THIS IS UNIX BABY!!!";
#endif // UNIX

#ifdef WINDOWS
	std::cout << "THIS IS WINDOWS BABY!!!";
#endif // WINDOWS



	return 0;
}