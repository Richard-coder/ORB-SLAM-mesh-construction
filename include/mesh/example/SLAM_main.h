#ifndef HEADER_SLAM_MAIN_H

#define HEADER_SLAM_MAIN_H

#include <string>

using namespace std;

#include <set>
#include <map>
#include <string>

#include <glm.hpp>
#include "types_reconstructor.hpp"

//extern vector<NewCameraType> cameras;
extern vector<CameraType> cameras;
extern vector<vector<int> > meshPointsVisibleFromCamN; //ÿһ֡�����ĵ�ID
extern vector<vector<int>> meshCamViewingPointN; //ÿ���㿴����֡����

extern vector<cv::Point3f> center;//�����������
extern vector<vector<cv::Point3f>> framePoints; //�ؼ���ĵ�������
extern vector<vector<cv::Point2f>> frameImgPoints;//�ؼ������������

extern vector<map<int, int>> matchPoints;
extern vector<vector<cv::Point2f>> imgPoints;

extern vector<vector<glm::vec2>> meshPoint2DoncamViewingPoint;//ÿ��ID���ڳ���֡�����ؼ���

int showCloud(string path);

int slam_main(bool singleCamera);


#endif