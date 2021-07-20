#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main()
{
	// multi-threading
   //{
   // int result; // 몇개가 생기고 어떤 일을 할지 지정
   // thread t([&] {result = 1 + 2; });
   // t.join();
   // cout << result << endl;
   //}







   // task-based parallelism
   //{	   
   // //future<int> fut = ...   // 어떤 일을 할 것인가 
   // auto fut = async([] {return 1 + 2; }); // thread보다 더 선호
   // cout << fut.get() << endl; // join까지 수행
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