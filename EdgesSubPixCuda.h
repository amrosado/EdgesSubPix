#ifndef __EDGES_SUBPIX_H__
#define __EDGES_SUBPIX_H__
#include <opencv2/core/cuda.hpp>
#include <vector>

using namespace cv::cuda;

struct Contour
{
	std::vector<cv::Point2f> points;
	std::vector<float> direction;
	std::vector<float> response;
};
// only 8-bit
CV_EXPORTS void EdgesSubPix(GpuMat &gray, double alpha, int low, int high,
	std::vector<Contour> &contours, cv::OutputArray hierarchy,
	int mode);

CV_EXPORTS void EdgesSubPix(GpuMat &gray, double alpha, int low, int high,
	std::vector<Contour> &contours);

#endif // __EDGES_SUBPIX_H__
#pragma once