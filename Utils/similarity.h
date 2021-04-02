/*
 * Filename: similarity.h
 *
 * Copyright 2020 Tecnalia
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MANIPULABILITY_METRICS_SIMILARITY_H
#define MANIPULABILITY_METRICS_SIMILARITY_H

#include <ellipsoid.h>

namespace manipulability_metrics
{
double volumeIntersection(const Ellipsoid& desired_ellipsoid, const Eigen::Matrix<double, 6, Eigen::Dynamic>& jacobian);
double inverseShapeDiscrepancy(const Ellipsoid& desired_ellipsoid,
                               const Eigen::Matrix<double, 6, Eigen::Dynamic>& jacobian);
double dualVolumeIntersection(const Ellipsoid& desired_ellipsoid,
                              const Eigen::Matrix<double, 6, Eigen::Dynamic>& left_jacobian,
                              const Eigen::Matrix<double, 6, Eigen::Dynamic>& right_jacobian);
double dualInverseShapeDiscrepancy(const Ellipsoid& desired_ellipsoid,
                                   const Eigen::Matrix<double, 6, Eigen::Dynamic>& left_jacobian,
                                   const Eigen::Matrix<double, 6, Eigen::Dynamic>& right_jacobian);
}  // namespace manipulability_metrics

#endif
