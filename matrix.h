// Filename: 	matrix.h
// Author: 		Christopher Goes
// Course: 		CS 404 Machine Learning and Data Mining
// Semester: 	Spring 2016
// Description:	Matrix class declarations

#include <vector>
using namespace std;

class Matrix {
	public:
		Matrix( int rows, int cols );
		Matrix( int rows, int cols, double range );
		Matrix( Matrix * initMat );
		~Matrix();
		
		void initByRow( double * x, int row );
		void initByCol( double * y, int col );
		
		void multiply( double scalar );
		Matrix * multiply( Matrix * mat );
		void add( double scalar );
		void add( Matrix * mat );
		Matrix * transpose();
		Matrix * inverse();
		void normalize(); 		// normalizes data in the matrix
		
				
		double * getRow( int row );
		double * getCol( int col );
		double getValue( int row, int col );
		void setValue( int row, int col, double value );
		void setRowToVec( double * x, int row );
		void setColToVec( double * y, int col );
		int getNumRows();
		int getNumCols();
		
		void printAll();
		void printRow( int row );
		void printCol( int col );
		
	private:
		//vector< vector< double > > data;
		double ** data;
		int numRows;
		int numCols;
		
};