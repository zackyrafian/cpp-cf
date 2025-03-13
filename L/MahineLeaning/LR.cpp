#include <bits/stdc++.h>
using namespace std;

double predict (double x, double m, double b) { 
    return m * x + b;
}

double computeError(const vector<double>& x, const vector<double>& y, double m, double b) { 
   double error = 0.0;
    int n = x.size();

    for (int i = 0; i < n; i++) { 
        double prediction = predict(x[i], m, b);
        error += pow((prediction - y[i]), 2);
    }
    return error / n;
}

void gradientDescent(vector<double>& x, vector<double>& y, double& m, double& b, double leaningRate, int epochs) { 
    int n = x.size();

    for (int epoch = 0; epoch < epochs; epoch++) { 
        double dm = 0, db = 0;

        for (int i = 0; i < n; i++) { 
            double prediction = predict(x[i], m, b);
            dm += -2 * x[i] * (y[i] - prediction);
            db += -2 * (y[i] - prediction);
        }


        m -= (dm / n) * leaningRate;
        b -= (db / n) * leaningRate;

        if (epoch % (epochs / 10) == 0) {
             cout << "Epoch " << epoch << " | Error: " << computeError(x, y, m, b) << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<double> x = {1,2,3,4,5};
    vector<double> y = {2,4,6,8,10};

    double m = 0, b = 0;
    double learningRate = 0.01;
    int epochs = 1000;
    
    gradientDescent(x, y, m ,b, learningRate, epochs);
    
    cout << "Final model: y = " << m << "x+ " << b << endl; 

    return 0;
}