#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main()
{
	// multi-threading
   //{
   // int result; // ��� ����� � ���� ���� ����
   // thread t([&] {result = 1 + 2; });
   // t.join();
   // cout << result << endl;
   //}







   // task-based parallelism
   //{	   
   // //future<int> fut = ...   // � ���� �� ���ΰ� 
   // auto fut = async([] {return 1 + 2; }); // thread���� �� ��ȣ
   // cout << fut.get() << endl; // join���� ����
   //}







   // future and promise
   //{
   // promise<int> prom;
   // auto fut = prom.get_future();
   // auto t = thread([](promise<int>&& prom)
   // {
   // prom.set_value(1 + 2);
   // }, move(prom));



   // cout << fut.get() << endl;
   // t.join();
   //}





	{
		async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async1 end" << endl;
			});

		async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async2 end" << endl;
			});

		cout << "Main function" << endl;
	}



	cout << "Main function" << endl;


	return 0;

}