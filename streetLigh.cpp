#include <iostream>
#include <vector>

double calculateStreetLightCoverage(int L, std::vector<std::vector<int>>& lightRanges) {
    double totalLength = 0.0;
    double plep=0;
    double sp =0;
    double ep=0;
    double sum=0;
for(int i=0;i<L;i++)
{
    if(lightRanges[i][0]<plep)
    sp=plep;
    else
    {
    sp=lightRanges[i][0];
    }
    ep=lightRanges[i][1];
    sum+=ep-sp;
    plep=lightRanges[i][1];
}

    return sum;
}

int main() {
    int L; // Number of street lights
    std::cin >> L;

    std::vector<std::vector<int>> lightRanges(L, std::vector<int>(2)); // 2D vector to store the range for each street light

    for (int i = 0; i < L; i++) {
        std::cin >> lightRanges[i][0] >> lightRanges[i][1]; // Input the range of coverage for each street light
    }

    double result = calculateStreetLightCoverage(L, lightRanges);

    std::cout << "Total length of street covered by the street lights: " << result << std::endl;

    return 0;
}
