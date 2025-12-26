//we will use min heap for this problem
//sorting and then returning kth element will take O(nlogn) time
//using max heap of size k will take O(nlogk) time and O(k) space
//priority queue in C++ is implemented as max heap by default
//priority_queue<int> pq; //max heap
//stack,queue and priority queues are adapters which can be implemented using different underlying containers like vector,deque,list
//priority_queue<int,vector<int>,greater<int>> pq; //min heap
//push(),pop(),top(),empty(),size() are the functions of priority queue