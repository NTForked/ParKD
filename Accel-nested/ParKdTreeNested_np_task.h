/*
   Copyright (c) 2010 University of Illinois
   All rights reserved.

   Developed by:           DeNovo group, Graphis@Illinois
                           University of Illinois
                           http://denovo.cs.illinois.edu
                           http://graphics.cs.illinois.edu

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the
   "Software"), to deal with the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimers.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following disclaimers
      in the documentation and/or other materials provided with the
      distribution.

    * Neither the names of DeNovo group, Graphics@Illinois, 
      University of Illinois, nor the names of its contributors may be used to 
      endorse or promote products derived from this Software without specific 
      prior written permission.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
   OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR
   ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS WITH THE SOFTWARE.
*/

#ifndef PARKDTREENESTED_NP_TASK_H_
#define PARKDTREENESTED_NP_TASK_H_

#include "ParKdTreeNested_task.h"
#include "KdTreeAccel.h"
#include "TriangleMesh.h"
#include "BoundingBox.h"

// node-level parallelism only
class ParKdTreeNested_np_task : public ParKdTreeNested_task {

public:
  ParKdTreeNested_np_task(const TriangleMesh *mesh, BoundingBox& nodeExtent,
                          vv_BoxEdge& boxEdgeList,
                          int maxDepth, KdTreeNode* newNode, 
                          KdTreeAccel* accel, unsigned int numThreads, 
                          unsigned int level) :
    ParKdTreeNested_task(mesh, nodeExtent, boxEdgeList, maxDepth, 
                         newNode, accel, numThreads, level) {}

  task *execute();
};

#endif /* PARKDTREENESTD_NP_TASK_H_ */