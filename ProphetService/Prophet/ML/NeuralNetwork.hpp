#include "FlensDefs.hpp"

#ifndef _NEURALNETWORK_HPP_
#define _NEURALNETWORK_HPP_

#define log(str) if (m_verbose) logStr(str)
#define logSize(str, mtx) if (m_verbose) printSizeMtx(str, mtx)

using namespace std;

struct Parameter {
	std::string Name;
	Mtx Params;
};

class NeuralNetwork {
	
public:
	enum ErrorType { LogisticError, MeanSquaredError, RootMeanSquaredError };
	NeuralNetwork(int hiddenNodes, double lambda);
	NeuralNetwork();
	void TrainDigits2(Mtx* X, Mtx* y, Mtx* Theta1, Mtx* Theta2, Mtx* RandomTheta1, Mtx* RandomTheta2);
	void TrainDigits(Mtx* X, Mtx* y);

	std::vector<Parameter> Train(ErrorType errorType, Mtx* X, Mtx* y);

	Mtx Predict(Mtx dataSet, Mtx Theta1, Mtx Theta2);


private:

	bool m_verbose = false;
	int hiddenNodes = 0;
	double lambda = 0.1;
	ErrorType errorType;

	void logStr(std::string str);

	template<typename M>
	void printSizeMtx(std::string str, M & x);
	Mtx activation(Mtx m);
	Mtx activationDerivative(Mtx m);
	Mtx randInitializeWeights(int lIn, int lOut);
	Mtx unroll(Mtx x, Mtx y);
	Mtx unroll(Mtx x);
	Mtx reshape(Mtx x, int rows, int cols);
	Cost costFunction(Mtx nnParams,
		int inputLayerSize,
		int hiddenLayerSize,
		int numLabels,
		Mtx dataSet,
		Mtx labels,
		double lambda);

	template<typename M>
	Mtx prependRow(M x, double val);

	template<typename M>
	Mtx prependColumn(M x, double val);

	Mtx mapLabels(Mtx labels);
	double sumAll(Mtx x);

	Mtx predictDigits(Mtx dataSet, Mtx Theta1,
		Mtx Theta2);
	
	

};
#endif