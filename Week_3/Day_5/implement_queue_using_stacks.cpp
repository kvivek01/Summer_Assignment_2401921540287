class MyQueue {
public:
    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {
        
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        moveElements();
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    int peek() {
        moveElements();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }

private:
    void moveElements() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }
};