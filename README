Open source implementation of the ML3 classifier.

If you find this software useful, please cite:

"Multiclass Latent Locally Linear Support Vector Machines"
Marco Fornoni, Barbara Caputo and Francesco Orabona
JMLR Workshop and Conference Proceedings Volume 29 (ACML 2013 Proceedings)

Copyright (c) 2013 Idiap Research Institute, http://www.idiap.ch/
Written by Marco Fornoni <marco.fornoni@idiap.ch>

Idiap Research Institute,
Centre du Parc, P.O. Box 592,
Rue Marconi 19,
1920 Martigny, Switzerland
Telephone: +41 27 721 77 57
Fax: +41 27 721 77 12

This file is part of the ML3 Software.

ML3 is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License version 3 as
published by the Free Software Foundation.

ML3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ML3. If not, see <http://www.gnu.org/licenses/>.

---------------------------------------------------------------

This is a mixed C++ and MATLAB (c) implementation of the ML3 
algorithm, with the main algorithm being implemented in a mex file. 
It is develped under Ubuntu 12.10, Matlab R2013a and it makes use
of the Eigen 3.1 library ( http://http://eigen.tuxfamily.org ).
Configurations differing from the above are not supported.

In order to use the Software you need to:

0) install the Eigen 3.1 library, using:
	sudo apt-get install libeigen3-dev
1) compile ML3 for your architecture, using: 
	make 
2) from MATLAB, instantiate the ML3 algorithm using: 
	algo=ML3();
3) train the algorithm using: 
	model=algo.train(features,labels);
4) test the algorithm using: 
	[dec_values,predict_labels,accuracy,confusion]=algo.test(features,labels,model);
