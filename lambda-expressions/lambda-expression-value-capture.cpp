#include <cstdio>
#include <chrono>
#include <thread>
#include <future>

// Simulate a long computation
int long_computation(int x, int duration_seconds,
                     const char identifier)
{
  // Print a character to mark the progress of the computation.
  for (auto i = 0; i < duration_seconds * 10; ++i)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds{100});
    printf("%c", identifier);
  }
  return 42 + x;
}
int main()
{
  auto x = 5, y = 6;
  printf("main thread   : x = %d, y = %d\n", x, y);
  printf("main thread   : launching lambda thread\n");

  // Execute the lambda function in a separate thread.
  // The function returns a future.
  auto result_future = std::async(std::launch::async, [=]() {
		printf("lambda thread : x = %d\n", x);
		auto answer = long_computation(x, 6, 'l');
		printf("\nlambda thread : long computation completed\n");
		printf("lambda thread : x = %d\n", x);
		return answer; });

  // At this point main thread and lambda thread
  // are executing in parallel.
  x = 0;
  printf("main thread   : x = %d, y = %d\n", x, y);
  auto main_thread_result = long_computation(x, 3, 'm');
  printf("\nmain thread   : long computation completed\n");
  // Wait for the result from the lambda thread
  auto lambda_thread_result = result_future.get();
  printf("main thread   : result = %d\n", main_thread_result);
  printf("lambda thread : result = %d\n", lambda_thread_result);
}