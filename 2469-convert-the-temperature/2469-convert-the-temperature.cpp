class Solution {
public:
    vector<double> convertTemperature(double celsius) {

        double kelvin;
        double fahren;
        vector<double>ans;

        
        kelvin = celsius + 273.15;

        ans.push_back(kelvin);

        fahren = celsius * 1.80 + 32.00;
        
        ans.push_back(fahren);

        return ans;

    }
};