#include <iostream>
#include "mysparsematrix.h"


#pragma region SPARSE MATRIX FUNCTIONS
       /**
		* @name initSparseMatrix
		*
		* @brief Init Sparse Matrix
		*
		* Init Sparse Matrix
		*
		* @param [in] row [\b int]
		* 
		* @param [in] column [\b int]
		* 
		* @retval [\b MySparseMatrix*]
		*In numerical analysis and scientific computing, 
		*a sparse matrix or sparse array is a matrix in which most of the elements are zero.
		**/
MySparseMatrix* initSparseMatrix(int row, int column) {
	MySparseMatrix* sparse = new MySparseMatrix();
	sparse->row = row;
	sparse->col = column;

	std::vector<std::vector<Data*>> vect(row, std::vector<Data*>(column, 0));
	sparse->arr = vect;

	Data* data = new Data(); data->key = 0; data->value = new char[2]{ '0' };
	for (int i = 0; i < sparse->row; i++)
		for (int j = 0; j < sparse->col; j++)
			sparse->arr[i][j] = data;

	return sparse;
}
/**
	   * @name getSparseMatrix
	   *
	   * @brief Get Sparse Matrix
	   *
	   * Get Sparse Matrix
	   *
	   * @param [in] row [\b int]
	   *
	   * @param [in] column [\b int]
	   * @retval [\b Data*]
	   * Conceptually, sparsity corresponds to systems with few pairwise interactions.
	   **/
Data* getSparseMatrix(MySparseMatrix* matrix, int row, int column) {
	return matrix->arr[row][column];
}
/**
	   * @name insertSparseMatrix
	   *
	   * @brief Insert Sparse Matrix
	   *
	   * Insert Sparse Matrix
	   *
	   * @param [in] row [\b int]
	   *
	   * @param [in] column [\b int]
	   * @retval [\b int]
	   * In the case of a sparse matrix, substantial memory requirement reductions can be realized by storing only the non-zero entries.
	   **/
int insertSparseMatrix(MySparseMatrix* matrix, int row, int column, Data* data) {
	matrix->arr[row][column] = data;
	return 0;
}
/**
	   * @name deleteSparseMatrix
	   *
	   * @brief Delete Sparse Matrix
	   *
	   * Delete Sparse Matrix
	   *
	   * @param [in] row [\b int]
	   *
	   * @param [in] column [\b int]
	   * @retval [\b int]
	   * A matrix is typically stored as a two-dimensional array.
	   **/
int deleteSparseMatrix(MySparseMatrix* matrix, int row, int column) {
	Data* data = new Data(); data->key = 0; data->value = new char[2]{ '0' };
	matrix->arr[row][column] = data;
	return 0;
}
/**
	   * @name copySparseMatrix
	   *
	   * @brief Copy Sparse Matrix
	   *
	   * Copy Sparse Matrix
	   *
	   * @param [in] row [\b int]
	   *
	   * @param [in] column [\b int]
	   * @retval [\b int]
	   * This chapter describes functions for the construction and manipulation of sparse matrices.
	   **/
int copySparseMatrix(MySparseMatrix* source, MySparseMatrix* destination) {
	for (int i = 0; i < source->row; i++)
		for (int j = 0; j < source->col; j++)
			if (source->arr[i][j] != 0)
				destination->arr[i][j] = source->arr[i][j];
	return 0;
}
/**
	   * @name deleteSparseMatrix
	   *
	   * @brief Delete Sparse Matrix
	   *
	   * Delete Sparse Matrix
	   *
	   * @param [in] row [\b int]
	   *
	   * @param [in] column [\b int]
	   * @retval [\b int]
	   * A sparse matrix is a matrix that is comprised of mostly zero values.
	   **/
int deleteSparseMatrix(MySparseMatrix* matrix) {
	Data* data = new Data(); data->key = 0; data->value = new char[2]{ '0' };
	for (int i = 0; i < matrix->row; i++)
		for (int j = 0; j < matrix->col; j++)
			matrix->arr[i][j] = data;
	return 0;
}

/**
 * @name printMatrixToConsole
 *
 * @brief Print Matrix To Console
 *
 * Print Matrix To Console
 *
 * @param [in] row [\b int]
 *
 * @param [in] column [\b int]
 * 
 * @retval [\b void]
 * Sparse matrices are distinct from matrices with mostly non-zero values.
 **/
void printMatrixToConsole(MySparseMatrix* matrix) {
	for (int i = 0; i < matrix->row; i++) {
		if (i != 0) std::cout << std::endl;
		for (int j = 0; j < matrix->col; j++) {
			if (matrix->arr[i][j] != 0)
				std::cout << matrix->arr[i][j] << " ";
			else std::cout << 0 << " ";
		}
	}
}
#pragma endregion