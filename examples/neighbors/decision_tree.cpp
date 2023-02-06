// #include "../../src/slowmokit/methods/neighbors/decision_tree.hpp"
// #include "../../src/slowmokit/core.hpp"

// signed main(){
//     std::vector<std::vector<double>> xData{
//         {0,23.76,3,76.56,1},
//         {1,12.76,2,87.45,0},
//         {1,21.86,1,79.98,1},
//         {0,32.64,1,76.87,1},
//         {0,22.76,3,89.90,0},
//         {1,28.64,0,73.87,1},
//         {0,12.87,3,82.86,0},
//         {0,33.87,2,80.97,1},
//         {1,39.64,1,70.87,1},
//         {0,28.90,2,89.86,1},
//         {0,13.76,3,72.56,0},
//         {1,19.76,2,88.45,1},
//         {0,16.86,1,78.98,0},
//         {0,32.44,1,73.87,1},
//         {1,22.76,3,80.93,1},
//         {0,28.64,0,78.87,0},
//         {1,8.87,2,81.96,0},
//         {0,31.87,2,75.97,0},
//         {1,27.64,1,71.89,1},
//         {0,20.90,2,80.86,0},
//         {0,23.76,3,76.56,1},
//         {1,12.76,2,87.45,1},
//         {1,21.86,1,79.98,1},
//         {0,32.64,1,76.87,1},
//         {0,22.76,3,89.90,0},
//         {1,28.64,0,73.87,1},
//         {0,12.87,3,82.86,0},
//         {0,33.87,2,80.97,1},
//         {1,39.64,1,70.87,1},
//         {0,28.90,2,89.86,0},
//         {0,13.76,3,72.56,0},
//         {1,19.76,2,88.45,1},
//         {0,16.86,1,78.98,0},
//         {0,32.44,1,73.87,1},
//         {1,22.76,3,80.93,1},
//         {0,28.64,0,78.87,0},
//         {1,8.87,2,81.96,1},
//         {0,31.87,2,75.97,0},
//         {1,27.64,1,71.89,0},
//         {0,20.90,2,80.86,1},
//         {0,32.64,1,76.87,1},
//         {0,22.76,3,89.90,0},
//         {1,28.64,0,73.87,1},
//         {0,12.87,3,82.86,0},
//         {0,33.87,2,80.97,1},
//         {1,39.64,1,70.87,1},
//         {0,28.90,2,89.86,1},
//         {0,13.76,3,72.56,0},
//         {1,19.76,2,88.45,1},
//         {0,16.86,1,78.98,0},
//         {0,32.44,1,73.87,1},
//         {1,22.76,3,80.93,1},
//         {0,28.64,0,78.87,0},
//         {1,8.87,2,81.96,0},
//         {0,31.87,2,75.97,0},
//         {1,27.64,1,71.89,1},
//         {0,20.90,2,80.86,1},
//         {0,23.76,3,76.56,1},
//         {1,12.76,2,87.45,0},
//         {1,21.86,1,79.98,1},
//         {0,32.64,1,76.87,1},
//         {0,22.76,3,89.90,0},
//         {1,28.64,0,73.87,1},
//         {0,12.87,3,82.86,0},
//         {0,33.87,2,80.97,0},
//         {1,39.64,1,70.87,0},
//         {0,28.90,2,89.86,1},
//         {0,13.76,3,72.56,1},
//         {1,19.76,2,88.45,0},
//         {0,16.86,1,78.98,1},
//         {0,32.44,1,73.87,1},
//         {1,22.76,3,80.93,0},
//         {0,28.64,0,78.87,0},
//         {1,8.87,2,81.96,1},
//         {0,31.87,2,75.97,0},
//         {1,27.64,1,71.89,1},
//         {0,20.90,2,80.86,0},
//     };
//     DecisionTree* dt = new DecisionTree(9,0,4);
//     dt->train(xData);
//     std::vector<double> test{1,38.19,2,81.65};
//     std::cout<<dt->predict(test);
//     return 0;
// }