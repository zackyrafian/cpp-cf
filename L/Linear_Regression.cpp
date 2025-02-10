#include <bits/stdc++.h>

using namespace std;

double computeError(const vector<double>& x, const vector<double>& y, double m, double b) {
    double totalError = 0;
    int N = x.size();
    for (int i = 0; i < N; i++) {
        double y_pred = m * x[i] + b;
        totalError += pow(y[i] - y_pred, 2);
    }
    return totalError / N; 
}

void gradientDescent(vector<double>& x, vector<double>& y, double& m, double& b, double learningRate, int epochs) {
    int N = x.size();
    
    for (int i = 0; i < epochs; i++) {
        double m_gradient = 0;
        double b_gradient = 0;

        for (int j = 0; j < N; j++) {
            double y_pred = m * x[j] + b;
            double error = y[j] - y_pred;

            m_gradient += -2 * x[j] * error / N;
            b_gradient += -2 * error / N;
        }

        m -= learningRate * m_gradient;
        b -= learningRate * b_gradient;

        if (i % 10 == 0) {
            cout << "Epoch " << i << " - Error: " << computeError(x, y, m, b) << endl;
        }
    }
}

int main() {
    vector<double> x = {1, 2, 3, 4, 5};
    vector<double> y = {2, 4, 6, 8, 10}; 

    double m = 0;
    double b = 0;
    
    double learningRate = 0.01;  
    int epochs = 100;  

    gradientDescent(x, y, m, b, learningRate, epochs);

    cout << "\nModel training: Y = " << m << "X + " << b << endl;

    return 0;
}
