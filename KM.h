/*
 * Open source implementation of the ML3 classifier.
 *
 * If you find this software useful, please cite:
 *
 * "Multiclass Latent Locally Linear Support Vector Machines"
 * Marco Fornoni, Barbara Caputo and Francesco Orabona
 * JMLR Workshop and Conference Proceedings Volume 29 (ACML 2013 Proceedings)
 *
 * Copyright (c) 2013 Idiap Research Institute, http://www.idiap.ch/
 * Written by Marco Fornoni <marco.fornoni@idiap.ch>
 *
 * This file is part of the ML3 Software.
 *
 * ML3 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * ML3 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ML3. If not, see <http://www.gnu.org/licenses/>.
 *
 * KM.h
 *
 *  Created on: Feb 24, 2014
 *      Author: Marco Fornoni
 */

#ifndef KM_H_
#define KM_H_

//#include "ML3.h"

using namespace Eigen;

template<typename T>
class KM {
public:
	// The internal representation of W
	typedef Matrix< T, Dynamic, Dynamic >  MatrixXT;
	typedef Matrix< T, Dynamic, 1>  VectorXT;
	typedef Array< T, Dynamic, 1>  ArrayXT;

	// Trains a k-means model using X, m cluster centers, for a maximum of maxIter epochs, storing the cluster centers in M and the sample assignments in assign
	static void trainKM(const MatrixXT &X, const uint m, const uint maxIter, MatrixXT& M, ArrayXi& assign, const uint verbose);

	//Empty constructor
	KM(){}

	//Empty distructor
	~KM(){}
};

#include "KM.tc"

#endif /* KM_H_ */


