#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

void lines(float x1, float y1, float x2, float y2, float &a1, float &b1, float &c1){
    float midx = (x1 + x2) / 2;
    float midy = (y1 + y2) / 2;
    if (y2 == y1) {
        a1 = 1;
        b1 = 0;
        c1 = midx;
        return;
    }

    /*
     * Creating a equation ax + by = c
     * y - y1 = m(x - x1)
     * y - y1 = mx - mx1
     * mx - y = mx1 - y1
     * where x1 and y1 are midx and midy
     * midx and midy taken so that perpedicular passes through midpoint
    */
    float slopePerpendicular = -1 * (x2 - x1) / (y2 - y1);
    a1 = slopePerpendicular;
    b1 = -1;
    c1 = a1 * midx + b1 * midy;
}

void findCircumcenter(float a1, float b1, float c1, float a2, float b2, float c2, float &centerX, float &centerY){
    // Multiplying here iwth -1 because the equation needs line euqation to be ax1 + by1 + c1 = 0
    c1 *= (-1);
    c2 *= (-1);
    centerX = ((b1 * c2) - (b2 * c1)) / ((a1 * b2) - (a2 * b1));
    centerY = ((c1 * a2) - (c2 * a1)) / ((a1 * b2) - (a2 * b1));
}

float angle(float x1, float y1, float x2, float y2, float centerX, float centerY, float centerLength){
    float Ox1 = x1 - centerX;
    float Oy1 = y1 - centerY;

    float Ox2 = x2 - centerX;
    float Oy2 = y2 - centerY;

    float dotProduct = (Ox1 * Ox2) + (Oy1 * Oy2);

    float angle = (float)acos(dotProduct / pow(centerLength, 2));
    return angle;
}

float gcd(float a, float b){
    while(b > 1e-8){
        float temp = fmod(a, b);
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Finding the equation of first perpedicular line ax1 + by1 = c
    float a1, b1, c1;
    float a2, b2, c2;
    lines(x1, y1, x2, y2, a1, b1, c1);
    lines(x2, y2, x3, y3, a2, b2, c2);

    float centerX, centerY;
    findCircumcenter(a1, b1, c1, a2, b2, c2, centerX, centerY);

    float centerLength = (float)sqrt(pow(centerX - x1, 2) + pow(centerY - y1, 2));
    if(centerLength == 0){
        return 0;
    }

    /*float angle1 = angle(x1, y1, x2, y2, centerX, centerY, centerLength);*/
    /*float angle2 = angle(x1, y1, x3, y3, centerX, centerY, centerLength);*/
    /*float angle3 = angle(x3, y3, x2, y2, centerX, centerY, centerLength);*/

    const double PI = 3.141592653589793;

    // Calculate angles from center to each point
    float theta1 = atan2(y1 - centerY, x1 - centerX);
    float theta2 = atan2(y2 - centerY, x2 - centerX);
    float theta3 = atan2(y3 - centerY, x3 - centerX);

    // Normalize to [0, 2π]
    if(theta1 < 0) theta1 += 2 * PI;
    if(theta2 < 0) theta2 += 2 * PI;
    if(theta3 < 0) theta3 += 2 * PI;

    // Sort the angles
    float angles[3] = {theta1, theta2, theta3};
    sort(angles, angles + 3);

    // Calculate the three arc angles between consecutive points
    float angle1 = angles[1] - angles[0];
    float angle2 = angles[2] - angles[1];
    float angle3 = 2 * PI - (angles[2] - angles[0]);

    float minArea = 1e9;
    for(int n=3; n <= 100; n++){
        float centralAngle = (float)(2 * PI) / n;
        
        // Check if all three angles are close to multiples of centralAngle
        bool valid = true;
        for(float ang : {angle1, angle2, angle3}) {
            float ratio = ang / centralAngle;
            if(abs(ratio - round(ratio)) > 1e-6) {
                valid = false;
                break;
            }
        }
        
        if(valid) {
            float apothem = centerLength * cos(centralAngle / 2);
            float sideLength = 2 * centerLength * sin(centralAngle / 2);
            float perimeter = n * sideLength;
            float area = (perimeter * apothem) / 2;
            minArea = min(minArea, area);
        }
    }
    cout << fixed << setprecision(6) << minArea << "\n";

    return 0;
}
