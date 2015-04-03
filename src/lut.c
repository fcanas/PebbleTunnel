int screenWidth = 72;
int screenHeight = 84;
char distance[6048] = {23,22,21,21,20,19,18,18,17,16,16,15,14,14,13,13,12,11,11,10,10,9,9,8,8,7,7,7,6,6,5,5,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,6,6,7,7,7,8,8,9,9,10,10,11,11,12,13,13,14,14,15,16,16,17,18,18,19,20,21,21,22,22,21,21,20,19,18,18,17,16,16,15,14,14,13,12,12,11,11,10,9,9,8,8,7,7,6,6,6,5,5,5,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,5,5,5,6,6,6,7,7,8,8,9,9,10,11,11,12,12,13,14,14,15,16,16,17,18,18,19,20,21,21,22,21,20,19,18,18,17,16,16,15,14,14,13,12,12,11,10,10,9,9,8,7,7,6,6,6,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,4,4,4,5,5,6,6,6,7,7,8,9,9,10,10,11,12,12,13,14,14,15,16,16,17,18,18,19,20,21,21,20,19,19,18,17,16,16,15,14,13,13,12,11,11,10,10,9,8,8,7,7,6,6,5,5,4,4,3,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,3,3,3,4,4,5,5,6,6,7,7,8,8,9,10,10,11,11,12,13,13,14,15,16,16,17,18,19,19,20,20,20,19,18,17,16,16,15,14,13,13,12,11,11,10,9,9,8,8,7,6,6,5,5,4,4,3,3,2,2,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,2,3,3,4,4,5,5,6,6,7,8,8,9,9,10,11,11,12,13,13,14,15,16,16,17,18,19,20,20,19,18,17,17,16,15,14,14,13,12,11,11,10,9,9,8,7,7,6,6,5,4,4,3,3,2,2,2,1,1,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,0,0,0,0,1,1,2,2,2,3,3,4,4,5,6,6,7,7,8,9,9,10,11,11,12,13,14,14,15,16,17,17,18,19,19,18,18,17,16,15,14,14,13,12,11,11,10,9,9,8,7,7,6,5,5,4,4,3,2,2,2,1,1,0,0,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,31,31,31,31,0,0,1,1,2,2,2,3,4,4,5,5,6,7,7,8,9,9,10,11,11,12,13,14,14,15,16,17,18,18,19,18,17,16,15,15,14,13,12,11,11,10,9,9,8,7,6,6,5,5,4,3,3,2,2,1,1,0,0,31,31,31,30,30,30,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,30,30,30,31,31,31,0,0,1,1,2,2,3,3,4,5,5,6,6,7,8,9,9,10,11,11,12,13,14,15,15,16,17,18,18,17,16,16,15,14,13,12,12,11,10,9,9,8,7,6,6,5,4,4,3,3,2,1,1,0,0,31,31,30,30,30,29,29,29,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,29,29,29,30,30,30,31,31,0,0,1,1,2,3,3,4,4,5,6,6,7,8,9,9,10,11,12,12,13,14,15,16,16,17,17,17,16,15,14,13,13,12,11,10,9,9,8,7,6,6,5,4,4,3,2,2,1,1,0,31,31,30,30,29,29,29,28,28,28,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,28,28,28,29,29,29,30,30,31,31,0,1,1,2,2,3,4,4,5,6,6,7,8,9,9,10,11,12,13,13,14,15,16,17,17,16,15,14,14,13,12,11,10,10,9,8,7,6,6,5,4,4,3,2,2,1,0,0,31,31,30,30,29,29,28,28,27,27,27,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,27,27,27,28,28,29,29,30,30,31,31,0,0,1,2,2,3,4,4,5,6,6,7,8,9,10,10,11,12,13,14,14,15,16,16,16,15,14,13,12,11,11,10,9,8,7,7,6,5,4,4,3,2,1,1,0,0,31,30,30,29,29,28,28,27,27,26,26,26,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,26,26,26,27,27,28,28,29,29,30,30,31,0,0,1,1,2,3,4,4,5,6,7,7,8,9,10,11,11,12,13,14,15,16,16,15,14,13,12,12,11,10,9,8,8,7,6,5,4,4,3,2,1,1,0,31,31,30,30,29,28,28,27,27,26,26,26,25,25,25,24,24,24,24,24,24,24,24,24,24,24,24,24,25,25,25,26,26,26,27,27,28,28,29,30,30,31,31,0,1,1,2,3,4,4,5,6,7,8,8,9,10,11,12,12,13,14,15,15,15,14,13,12,11,10,9,9,8,7,6,5,5,4,3,2,1,1,0,31,31,30,29,29,28,28,27,26,26,25,25,25,24,24,24,23,23,23,23,23,23,23,23,23,23,23,23,23,24,24,24,25,25,25,26,26,27,28,28,29,29,30,31,31,0,1,1,2,3,4,5,5,6,7,8,9,9,10,11,12,13,14,15,15,14,13,12,11,11,10,9,8,7,6,6,5,4,3,2,2,1,0,31,31,30,29,29,28,27,27,26,26,25,25,24,24,23,23,23,22,22,22,22,22,22,22,22,22,22,22,22,22,23,23,23,24,24,25,25,26,26,27,27,28,29,29,30,31,31,0,1,2,2,3,4,5,6,6,7,8,9,10,11,11,12,13,14,14,14,13,12,11,10,9,8,7,7,6,5,4,3,3,2,1,0,31,31,30,29,29,28,27,27,26,25,25,24,24,23,23,22,22,22,21,21,21,21,21,21,21,21,21,21,21,21,21,22,22,22,23,23,24,24,25,25,26,27,27,28,29,29,30,31,31,0,1,2,3,3,4,5,6,7,7,8,9,10,11,12,13,14,14,13,12,11,10,10,9,8,7,6,5,4,4,3,2,1,0,0,31,30,29,29,28,27,26,26,25,25,24,23,23,22,22,21,21,21,20,20,20,20,20,20,20,20,20,20,20,20,20,21,21,21,22,22,23,23,24,25,25,26,26,27,28,29,29,30,31,0,0,1,2,3,4,4,5,6,7,8,9,10,10,11,12,13,14,13,12,11,10,9,8,7,6,6,5,4,3,2,1,1,0,31,30,29,29,28,27,26,26,25,24,24,23,23,22,21,21,21,20,20,19,19,19,19,19,19,19,19,19,19,19,19,19,20,20,21,21,21,22,23,23,24,24,25,26,26,27,28,29,29,30,31,0,1,1,2,3,4,5,6,6,7,8,9,10,11,12,13,13,12,11,10,10,9,8,7,6,5,4,3,2,2,1,0,31,30,30,29,28,27,26,26,25,24,24,23,22,22,21,21,20,20,19,19,18,18,18,18,18,18,18,18,18,18,18,18,18,19,19,20,20,21,21,22,22,23,24,24,25,26,26,27,28,29,30,30,31,0,1,2,2,3,4,5,6,7,8,9,10,10,11,12,13,12,11,10,9,8,7,6,6,5,4,3,2,1,0,31,31,30,29,28,27,27,26,25,24,24,23,22,22,21,20,20,19,19,18,18,18,17,17,17,17,17,17,17,17,17,17,17,18,18,18,19,19,20,20,21,22,22,23,24,24,25,26,27,27,28,29,30,31,31,0,1,2,3,4,5,6,6,7,8,9,10,11,12,12,12,11,10,9,8,7,6,5,4,3,2,2,1,0,31,30,29,28,28,27,26,25,24,24,23,22,21,21,20,20,19,18,18,17,17,17,16,16,16,16,16,16,16,16,16,16,16,17,17,17,18,18,19,20,20,21,21,22,23,24,24,25,26,27,28,28,29,30,31,0,1,2,2,3,4,5,6,7,8,9,10,11,12,12,11,10,9,8,7,7,6,5,4,3,2,1,0,31,30,30,29,28,27,26,25,25,24,23,22,21,21,20,19,19,18,18,17,17,16,16,15,15,15,15,15,15,15,15,15,15,15,16,16,17,17,18,18,19,19,20,21,21,22,23,24,25,25,26,27,28,29,30,30,31,0,1,2,3,4,5,6,7,7,8,9,10,11,12,11,10,9,8,7,6,5,4,3,2,2,1,0,31,30,29,28,27,26,26,25,24,23,22,22,21,20,19,19,18,17,17,16,16,15,15,14,14,14,14,14,14,14,14,14,14,14,15,15,16,16,17,17,18,19,19,20,21,22,22,23,24,25,26,26,27,28,29,30,31,0,1,2,2,3,4,5,6,7,8,9,10,11,11,11,10,9,8,7,6,5,4,3,2,1,0,31,30,29,29,28,27,26,25,24,23,23,22,21,20,19,19,18,17,17,16,15,15,14,14,13,13,13,13,13,13,13,13,13,13,13,14,14,15,15,16,17,17,18,19,19,20,21,22,23,23,24,25,26,27,28,29,29,30,31,0,1,2,3,4,5,6,7,8,9,10,11,11,10,9,8,7,6,5,5,4,3,2,1,0,31,30,29,28,27,26,25,25,24,23,22,21,20,20,19,18,17,16,16,15,15,14,13,13,13,12,12,12,12,12,12,12,12,12,13,13,13,14,15,15,16,16,17,18,19,20,20,21,22,23,24,25,25,26,27,28,29,30,31,0,1,2,3,4,5,5,6,7,8,9,10,11,10,9,8,7,6,5,4,3,2,1,0,31,31,30,29,28,27,26,25,24,23,22,21,21,20,19,18,17,17,16,15,14,14,13,13,12,12,11,11,11,11,11,11,11,11,11,12,12,13,13,14,14,15,16,17,17,18,19,20,21,21,22,23,24,25,26,27,28,29,30,31,31,0,1,2,3,4,5,6,7,8,9,10,11,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,26,25,24,23,22,21,20,19,18,18,17,16,15,14,14,13,12,12,11,11,10,10,10,10,10,10,10,10,10,11,11,12,12,13,14,14,15,16,17,18,18,19,20,21,22,23,24,25,26,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,10,9,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,21,20,19,18,17,16,15,15,14,13,12,12,11,10,10,9,9,9,9,9,9,9,9,9,10,10,11,12,12,13,14,15,15,16,17,18,19,20,21,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,9,10,9,8,7,6,5,4,3,2,1,0,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,17,16,15,14,13,12,12,11,10,10,9,8,8,8,8,8,8,8,8,8,9,10,10,11,12,12,13,14,15,16,17,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,25,24,23,22,21,20,19,18,17,16,15,14,13,13,12,11,10,9,9,8,8,7,7,7,7,7,7,7,8,8,9,9,10,11,12,13,13,14,15,16,17,18,19,20,21,22,23,24,25,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,18,17,16,15,14,13,12,11,10,10,9,8,7,7,6,6,6,6,6,6,6,7,7,8,9,10,10,11,12,13,14,15,16,17,18,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,13,12,11,10,9,8,7,7,6,5,5,5,5,5,5,5,6,7,7,8,9,10,11,12,13,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,8,7,6,5,5,4,4,4,4,4,5,5,6,7,8,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,5,4,3,3,3,3,3,4,5,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,5,4,3,3,3,3,3,4,5,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,8,7,6,5,5,4,4,4,4,4,5,5,6,7,8,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,13,12,11,10,9,8,7,7,6,5,5,5,5,5,5,5,6,7,7,8,9,10,11,12,13,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,18,17,16,15,14,13,12,11,10,10,9,8,7,7,6,6,6,6,6,6,6,7,7,8,9,10,10,11,12,13,14,15,16,17,18,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,25,24,23,22,21,20,19,18,17,16,15,14,13,13,12,11,10,9,9,8,8,7,7,7,7,7,7,7,8,8,9,9,10,11,12,13,13,14,15,16,17,18,19,20,21,22,23,24,25,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,17,16,15,14,13,12,12,11,10,10,9,8,8,8,8,8,8,8,8,8,9,10,10,11,12,12,13,14,15,16,17,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,0,0,1,2,3,4,5,6,7,8,9,10,9,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,25,24,23,22,21,21,20,19,18,17,16,15,15,14,13,12,12,11,10,10,9,9,9,9,9,9,9,9,9,10,10,11,12,12,13,14,15,15,16,17,18,19,20,21,21,22,23,24,25,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,9,11,10,9,8,7,6,5,4,3,2,1,0,31,30,29,28,27,26,26,25,24,23,22,21,20,19,18,18,17,16,15,14,14,13,12,12,11,11,10,10,10,10,10,10,10,10,10,11,11,12,12,13,14,14,15,16,17,18,18,19,20,21,22,23,24,25,26,26,27,28,29,30,31,0,1,2,3,4,5,6,7,8,9,10,11,10,9,8,7,6,5,4,3,2,1,0,31,31,30,29,28,27,26,25,24,23,22,21,21,20,19,18,17,17,16,15,14,14,13,13,12,12,11,11,11,11,11,11,11,11,11,12,12,13,13,14,14,15,16,17,17,18,19,20,21,21,22,23,24,25,26,27,28,29,30,31,31,0,1,2,3,4,5,6,7,8,9,10,11,10,9,8,7,6,5,5,4,3,2,1,0,31,30,29,28,27,26,25,25,24,23,22,21,20,20,19,18,17,16,16,15,15,14,13,13,13,12,12,12,12,12,12,12,12,12,13,13,13,14,15,15,16,16,17,18,19,20,20,21,22,23,24,25,25,26,27,28,29,30,31,0,1,2,3,4,5,5,6,7,8,9,10,11,11,10,9,8,7,6,5,4,3,2,1,0,31,30,29,29,28,27,26,25,24,23,23,22,21,20,19,19,18,17,17,16,15,15,14,14,13,13,13,13,13,13,13,13,13,13,13,14,14,15,15,16,17,17,18,19,19,20,21,22,23,23,24,25,26,27,28,29,29,30,31,0,1,2,3,4,5,6,7,8,9,10,11,12,11,10,9,8,7,6,5,4,3,2,2,1,0,31,30,29,28,27,26,26,25,24,23,22,22,21,20,19,19,18,17,17,16,16,15,15,14,14,14,14,14,14,14,14,14,14,14,15,15,16,16,17,17,18,19,19,20,21,22,22,23,24,25,26,26,27,28,29,30,31,0,1,2,2,3,4,5,6,7,8,9,10,11,12,11,10,9,8,7,7,6,5,4,3,2,1,0,31,30,30,29,28,27,26,25,25,24,23,22,21,21,20,19,19,18,18,17,17,16,16,15,15,15,15,15,15,15,15,15,15,15,16,16,17,17,18,18,19,19,20,21,21,22,23,24,25,25,26,27,28,29,30,30,31,0,1,2,3,4,5,6,7,7,8,9,10,11,12,12,11,10,9,8,7,6,5,4,3,2,2,1,0,31,30,29,28,28,27,26,25,24,24,23,22,21,21,20,20,19,18,18,17,17,17,16,16,16,16,16,16,16,16,16,16,16,17,17,17,18,18,19,20,20,21,21,22,23,24,24,25,26,27,28,28,29,30,31,0,1,2,2,3,4,5,6,7,8,9,10,11,12,13,12,11,10,9,8,7,6,6,5,4,3,2,1,0,31,31,30,29,28,27,27,26,25,24,24,23,22,22,21,20,20,19,19,18,18,18,17,17,17,17,17,17,17,17,17,17,17,18,18,18,19,19,20,20,21,22,22,23,24,24,25,26,27,27,28,29,30,31,31,0,1,2,3,4,5,6,6,7,8,9,10,11,12,13,12,11,10,10,9,8,7,6,5,4,3,2,2,1,0,31,30,30,29,28,27,26,26,25,24,24,23,22,22,21,21,20,20,19,19,18,18,18,18,18,18,18,18,18,18,18,18,18,19,19,20,20,21,21,22,22,23,24,24,25,26,26,27,28,29,30,30,31,0,1,2,2,3,4,5,6,7,8,9,10,10,11,12,14,13,12,11,10,9,8,7,6,6,5,4,3,2,1,1,0,31,30,29,29,28,27,26,26,25,24,24,23,23,22,21,21,21,20,20,19,19,19,19,19,19,19,19,19,19,19,19,19,20,20,21,21,21,22,23,23,24,24,25,26,26,27,28,29,29,30,31,0,1,1,2,3,4,5,6,6,7,8,9,10,11,12,13,14,13,12,11,10,10,9,8,7,6,5,4,4,3,2,1,0,0,31,30,29,29,28,27,26,26,25,25,24,23,23,22,22,21,21,21,20,20,20,20,20,20,20,20,20,20,20,20,20,21,21,21,22,22,23,23,24,25,25,26,26,27,28,29,29,30,31,0,0,1,2,3,4,4,5,6,7,8,9,10,10,11,12,13,14,14,13,12,11,10,9,8,7,7,6,5,4,3,3,2,1,0,31,31,30,29,29,28,27,27,26,25,25,24,24,23,23,22,22,22,21,21,21,21,21,21,21,21,21,21,21,21,21,22,22,22,23,23,24,24,25,25,26,27,27,28,29,29,30,31,31,0,1,2,3,3,4,5,6,7,7,8,9,10,11,12,13,14,15,14,13,12,11,11,10,9,8,7,6,6,5,4,3,2,2,1,0,31,31,30,29,29,28,27,27,26,26,25,25,24,24,23,23,23,22,22,22,22,22,22,22,22,22,22,22,22,22,23,23,23,24,24,25,25,26,26,27,27,28,29,29,30,31,31,0,1,2,2,3,4,5,6,6,7,8,9,10,11,11,12,13,14,15,15,14,13,12,11,10,9,9,8,7,6,5,5,4,3,2,1,1,0,31,31,30,29,29,28,28,27,26,26,25,25,25,24,24,24,23,23,23,23,23,23,23,23,23,23,23,23,23,24,24,24,25,25,25,26,26,27,28,28,29,29,30,31,31,0,1,1,2,3,4,5,5,6,7,8,9,9,10,11,12,13,14,15,16,15,14,13,12,12,11,10,9,8,8,7,6,5,4,4,3,2,1,1,0,31,31,30,30,29,28,28,27,27,26,26,26,25,25,25,24,24,24,24,24,24,24,24,24,24,24,24,24,25,25,25,26,26,26,27,27,28,28,29,30,30,31,31,0,1,1,2,3,4,4,5,6,7,8,8,9,10,11,12,12,13,14,15,16,16,15,14,13,12,11,11,10,9,8,7,7,6,5,4,4,3,2,1,1,0,0,31,30,30,29,29,28,28,27,27,26,26,26,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,26,26,26,27,27,28,28,29,29,30,30,31,0,0,1,1,2,3,4,4,5,6,7,7,8,9,10,11,11,12,13,14,15,16,17,16,15,14,14,13,12,11,10,10,9,8,7,6,6,5,4,4,3,2,2,1,0,0,31,31,30,30,29,29,28,28,27,27,27,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,27,27,27,28,28,29,29,30,30,31,31,0,0,1,2,2,3,4,4,5,6,6,7,8,9,10,10,11,12,13,14,14,15,16,17,17,16,15,14,13,13,12,11,10,9,9,8,7,6,6,5,4,4,3,2,2,1,1,0,31,31,30,30,29,29,29,28,28,28,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,28,28,28,29,29,29,30,30,31,31,0,1,1,2,2,3,4,4,5,6,6,7,8,9,9,10,11,12,13,13,14,15,16,17,18,17,16,16,15,14,13,12,12,11,10,9,9,8,7,6,6,5,4,4,3,3,2,1,1,0,0,31,31,30,30,30,29,29,29,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,29,29,29,30,30,30,31,31,0,0,1,1,2,3,3,4,4,5,6,6,7,8,9,9,10,11,12,12,13,14,15,16,16,17,19,18,17,16,15,15,14,13,12,11,11,10,9,9,8,7,6,6,5,5,4,3,3,2,2,1,1,0,0,31,31,31,30,30,30,29,29,29,29,29,29,29,29,29,29,29,29,29,29,29,30,30,30,31,31,31,0,0,1,1,2,2,3,3,4,5,5,6,6,7,8,9,9,10,11,11,12,13,14,15,15,16,17,18,19,18,18,17,16,15,14,14,13,12,11,11,10,9,9,8,7,7,6,5,5,4,4,3,2,2,2,1,1,0,0,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,31,31,31,31,0,0,1,1,2,2,2,3,4,4,5,5,6,7,7,8,9,9,10,11,11,12,13,14,14,15,16,17,18,18,20,19,18,17,17,16,15,14,14,13,12,11,11,10,9,9,8,7,7,6,6,5,4,4,3,3,2,2,2,1,1,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,0,0,0,0,1,1,2,2,2,3,3,4,4,5,6,6,7,7,8,9,9,10,11,11,12,13,14,14,15,16,17,17,18,19,20,20,19,18,17,16,16,15,14,13,13,12,11,11,10,9,9,8,8,7,6,6,5,5,4,4,3,3,2,2,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,2,3,3,4,4,5,5,6,6,7,8,8,9,9,10,11,11,12,13,13,14,15,16,16,17,18,19,20,21,20,19,19,18,17,16,16,15,14,13,13,12,11,11,10,10,9,8,8,7,7,6,6,5,5,4,4,3,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,3,3,3,4,4,5,5,6,6,7,7,8,8,9,10,10,11,11,12,13,13,14,15,16,16,17,18,19,19,20,22,21,20,19,18,18,17,16,16,15,14,14,13,12,12,11,10,10,9,9,8,7,7,6,6,6,5,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,4,4,4,5,5,6,6,6,7,7,8,9,9,10,10,11,12,12,13,14,14,15,16,16,17,18,18,19,20,21,22,21,21,20,19,18,18,17,16,16,15,14,14,13,12,12,11,11,10,9,9,8,8,7,7,6,6,6,5,5,5,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,5,5,5,6,6,6,7,7,8,8,9,9,10,11,11,12,12,13,14,14,15,16,16,17,18,18,19,20,21,21,};

signed char angle[6048] = {-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-21,-20,-20,-20,-20,-20,-19,-19,-19,-19,-18,-18,-18,-17,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-14,-13,-13,-13,-12,-12,-12,-12,-11,-11,-11,-11,-11,-10,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-24,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-19,-18,-18,-18,-18,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-13,-13,-13,-13,-12,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-25,-24,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-19,-18,-18,-18,-18,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-13,-13,-13,-13,-12,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-7,-25,-25,-24,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-18,-18,-18,-18,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-13,-13,-13,-13,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-7,-6,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-19,-18,-18,-18,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-13,-13,-13,-12,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-6,-6,-6,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-18,-18,-18,-17,-17,-17,-16,-16,-16,-16,-15,-15,-15,-14,-14,-14,-13,-13,-13,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-6,-6,-6,-6,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-20,-19,-19,-19,-18,-18,-18,-18,-17,-17,-17,-16,-16,-16,-15,-15,-14,-14,-14,-13,-13,-13,-13,-12,-12,-12,-11,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-25,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-19,-19,-19,-19,-18,-18,-18,-17,-17,-17,-16,-16,-16,-15,-15,-14,-14,-14,-13,-13,-13,-12,-12,-12,-12,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-26,-25,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-19,-19,-19,-18,-18,-18,-17,-17,-17,-16,-16,-16,-15,-15,-14,-14,-14,-13,-13,-13,-12,-12,-12,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-6,-26,-26,-25,-25,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-19,-19,-19,-18,-18,-18,-17,-17,-17,-16,-16,-16,-15,-15,-14,-14,-14,-13,-13,-13,-12,-12,-12,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-6,-6,-5,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-19,-19,-19,-18,-18,-17,-17,-17,-16,-16,-16,-15,-15,-14,-14,-14,-13,-13,-12,-12,-12,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-6,-5,-5,-5,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-20,-20,-20,-19,-19,-19,-18,-18,-18,-17,-17,-16,-16,-16,-15,-15,-14,-14,-13,-13,-13,-12,-12,-12,-11,-11,-11,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-21,-21,-21,-21,-20,-20,-20,-19,-19,-18,-18,-18,-17,-17,-16,-16,-16,-15,-15,-14,-14,-13,-13,-13,-12,-12,-11,-11,-11,-10,-10,-10,-10,-9,-9,-9,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-26,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-24,-23,-23,-23,-23,-22,-22,-22,-21,-21,-21,-20,-20,-20,-19,-19,-19,-18,-18,-17,-17,-16,-16,-16,-15,-15,-14,-14,-13,-13,-12,-12,-12,-11,-11,-11,-10,-10,-10,-9,-9,-9,-8,-8,-8,-8,-8,-7,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-27,-26,-26,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-23,-23,-23,-22,-22,-22,-22,-21,-21,-21,-20,-20,-19,-19,-19,-18,-18,-17,-17,-16,-16,-16,-15,-15,-14,-14,-13,-13,-12,-12,-12,-11,-11,-10,-10,-10,-9,-9,-9,-9,-8,-8,-8,-8,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-5,-5,-27,-27,-27,-26,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-23,-23,-23,-22,-22,-22,-21,-21,-21,-20,-20,-20,-19,-19,-18,-18,-17,-17,-16,-16,-16,-15,-15,-14,-14,-13,-13,-12,-12,-11,-11,-11,-10,-10,-10,-9,-9,-9,-8,-8,-8,-8,-7,-7,-7,-7,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-5,-4,-4,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-23,-23,-23,-22,-22,-22,-21,-21,-21,-20,-20,-19,-19,-18,-18,-18,-17,-17,-16,-16,-15,-14,-14,-13,-13,-13,-12,-12,-11,-11,-10,-10,-10,-9,-9,-9,-8,-8,-8,-8,-7,-7,-7,-7,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-24,-24,-24,-24,-24,-23,-23,-23,-22,-22,-22,-21,-21,-20,-20,-20,-19,-19,-18,-18,-17,-17,-16,-16,-15,-14,-14,-13,-13,-12,-12,-11,-11,-11,-10,-10,-9,-9,-9,-8,-8,-8,-8,-7,-7,-7,-7,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-27,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-24,-24,-24,-24,-23,-23,-23,-22,-22,-21,-21,-21,-20,-20,-19,-19,-18,-18,-17,-17,-16,-16,-15,-14,-14,-13,-13,-12,-12,-11,-11,-10,-10,-10,-9,-9,-8,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-4,-28,-27,-27,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-25,-24,-24,-24,-24,-23,-23,-23,-22,-22,-21,-21,-20,-20,-19,-19,-18,-18,-17,-17,-16,-16,-15,-14,-14,-13,-13,-12,-12,-11,-11,-10,-10,-9,-9,-8,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-4,-4,-4,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-24,-24,-24,-24,-23,-23,-22,-22,-22,-21,-21,-20,-20,-19,-19,-18,-17,-17,-16,-16,-15,-14,-14,-13,-12,-12,-11,-11,-10,-10,-9,-9,-9,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-4,-4,-3,-3,-3,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-25,-25,-25,-25,-24,-24,-24,-24,-23,-23,-22,-22,-21,-21,-20,-20,-19,-19,-18,-18,-17,-16,-16,-15,-14,-13,-13,-12,-12,-11,-11,-10,-10,-9,-9,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-28,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-26,-25,-25,-25,-24,-24,-24,-24,-23,-23,-22,-22,-21,-21,-20,-20,-19,-18,-18,-17,-16,-16,-15,-14,-13,-13,-12,-11,-11,-10,-10,-9,-9,-8,-8,-8,-7,-7,-7,-6,-6,-6,-5,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-28,-28,-28,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-25,-25,-25,-25,-24,-24,-24,-23,-23,-22,-22,-21,-21,-20,-19,-19,-18,-17,-16,-16,-15,-14,-13,-12,-12,-11,-10,-10,-9,-9,-8,-8,-8,-7,-7,-6,-6,-6,-6,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-26,-25,-25,-25,-24,-24,-24,-23,-23,-22,-21,-21,-20,-20,-19,-18,-17,-16,-16,-15,-14,-13,-12,-11,-11,-10,-10,-9,-8,-8,-8,-7,-7,-6,-6,-6,-5,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-2,-2,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-25,-25,-25,-24,-24,-24,-23,-22,-22,-21,-21,-20,-19,-18,-17,-16,-16,-15,-14,-13,-12,-11,-10,-10,-9,-9,-8,-8,-7,-7,-6,-6,-6,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-27,-26,-26,-26,-26,-25,-25,-24,-24,-24,-23,-22,-22,-21,-20,-19,-18,-18,-17,-16,-14,-13,-13,-12,-11,-10,-9,-9,-8,-8,-7,-7,-6,-6,-5,-5,-5,-5,-4,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-26,-26,-26,-25,-25,-25,-24,-24,-23,-22,-21,-21,-20,-19,-18,-17,-16,-14,-13,-12,-11,-10,-10,-9,-8,-8,-7,-6,-6,-6,-5,-5,-5,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-30,-30,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-27,-27,-26,-26,-26,-25,-25,-24,-24,-23,-22,-21,-20,-19,-18,-17,-16,-14,-13,-12,-11,-10,-9,-8,-8,-7,-6,-6,-5,-5,-5,-4,-4,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-28,-28,-27,-27,-27,-26,-26,-26,-25,-25,-24,-24,-23,-22,-21,-20,-18,-17,-16,-14,-13,-11,-10,-9,-8,-8,-7,-6,-6,-5,-5,-5,-4,-4,-4,-3,-3,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-28,-27,-27,-27,-26,-26,-26,-25,-24,-24,-23,-21,-20,-19,-17,-16,-14,-12,-11,-10,-8,-8,-7,-6,-5,-5,-5,-4,-4,-4,-3,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-27,-27,-27,-26,-26,-25,-24,-24,-22,-21,-19,-18,-16,-13,-12,-10,-9,-8,-7,-6,-5,-5,-4,-4,-4,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-31,-31,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-29,-29,-29,-28,-28,-28,-28,-27,-27,-26,-26,-25,-24,-22,-20,-18,-16,-13,-11,-9,-8,-6,-5,-5,-4,-4,-3,-3,-3,-3,-2,-2,-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-29,-29,-28,-28,-27,-27,-26,-25,-24,-21,-19,-16,-12,-10,-8,-6,-5,-4,-4,-3,-3,-2,-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-30,-30,-30,-30,-30,-30,-30,-30,-30,-30,-29,-29,-29,-29,-28,-28,-27,-26,-24,-20,-16,-11,-8,-5,-4,-3,-3,-2,-2,-2,-2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-31,-30,-30,-30,-30,-30,-29,-29,-28,-27,-24,-16,-8,-4,-3,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,29,29,28,27,24,16,8,4,3,2,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,29,29,29,29,28,28,27,26,24,20,16,11,8,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,29,28,28,27,27,26,25,24,21,19,16,12,10,8,6,5,4,4,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,29,29,28,28,28,28,27,27,26,26,25,24,22,20,18,16,13,11,9,8,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,29,29,29,29,28,28,28,28,27,27,27,26,26,25,24,24,22,21,19,18,16,13,12,10,9,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,30,30,30,30,30,30,30,30,30,30,30,30,29,29,29,29,29,29,29,29,29,29,29,28,28,28,28,28,27,27,27,26,26,26,25,24,24,23,21,20,19,17,16,14,12,11,10,8,8,7,6,5,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,30,30,30,30,30,30,30,29,29,29,29,29,29,29,29,29,29,29,29,28,28,28,28,28,28,28,27,27,27,26,26,26,25,25,24,24,23,22,21,20,18,17,16,14,13,11,10,9,8,8,7,6,6,5,5,5,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,30,30,29,29,29,29,29,29,29,29,29,29,29,29,29,29,28,28,28,28,28,28,28,27,27,27,27,27,26,26,26,25,25,24,24,23,22,21,20,19,18,17,16,14,13,12,11,10,9,8,8,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,29,29,29,29,29,29,29,29,29,29,29,29,29,28,28,28,28,28,28,28,28,27,27,27,27,27,26,26,26,25,25,25,24,24,23,22,21,21,20,19,18,17,16,14,13,12,11,10,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,29,29,29,29,29,29,29,29,29,29,28,28,28,28,28,28,28,28,27,27,27,27,27,27,26,26,26,26,25,25,24,24,24,23,22,22,21,20,19,18,18,17,16,14,13,13,12,11,10,9,9,8,8,7,7,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,29,29,29,29,29,29,28,28,28,28,28,28,28,28,28,28,27,27,27,27,27,27,26,26,26,26,25,25,25,24,24,24,23,22,22,21,21,20,19,18,17,16,16,15,14,13,12,11,10,10,9,9,8,8,7,7,6,6,6,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,29,29,29,28,28,28,28,28,28,28,28,28,28,28,27,27,27,27,27,27,26,26,26,26,26,25,25,25,24,24,24,23,23,22,21,21,20,20,19,18,17,16,16,15,14,13,12,11,11,10,10,9,8,8,8,7,7,6,6,6,5,5,5,5,5,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,28,28,28,28,28,28,28,28,28,28,28,27,27,27,27,27,27,27,26,26,26,26,26,25,25,25,25,24,24,24,23,23,22,22,21,21,20,19,19,18,17,16,16,15,14,13,12,12,11,10,10,9,9,8,8,8,7,7,6,6,6,6,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,28,28,28,28,28,28,28,28,28,27,27,27,27,27,27,27,26,26,26,26,26,26,25,25,25,24,24,24,24,23,23,22,22,21,21,20,20,19,18,18,17,16,16,15,14,13,13,12,11,11,10,10,9,9,8,8,8,7,7,7,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,28,28,28,28,28,28,27,27,27,27,27,27,27,27,26,26,26,26,26,26,25,25,25,25,24,24,24,24,23,23,22,22,21,21,20,20,19,19,18,18,17,16,16,15,14,13,13,12,12,11,11,10,10,9,9,8,8,8,7,7,7,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,4,3,3,3,3,3,28,28,28,28,27,27,27,27,27,27,27,27,27,26,26,26,26,26,26,25,25,25,25,24,24,24,24,23,23,22,22,22,21,21,20,20,19,19,18,17,17,16,16,15,14,14,13,12,12,11,11,10,10,9,9,9,8,8,8,7,7,7,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,3,3,3,28,27,27,27,27,27,27,27,27,27,27,26,26,26,26,26,26,25,25,25,25,25,24,24,24,24,23,23,23,22,22,21,21,20,20,19,19,18,18,17,17,16,16,15,14,14,13,13,12,12,11,11,10,10,9,9,8,8,8,8,7,7,7,6,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,4,27,27,27,27,27,27,27,27,27,26,26,26,26,26,26,26,25,25,25,25,25,24,24,24,24,23,23,23,22,22,21,21,21,20,20,19,19,18,18,17,17,16,16,15,14,14,13,13,12,12,11,11,10,10,10,9,9,8,8,8,8,7,7,7,6,6,6,6,6,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,27,27,27,27,27,27,27,26,26,26,26,26,26,26,25,25,25,25,25,24,24,24,24,24,23,23,23,22,22,22,21,21,20,20,20,19,19,18,18,17,17,16,16,15,14,14,13,13,12,12,11,11,11,10,10,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,6,5,5,5,5,5,5,5,4,4,4,4,4,4,27,27,27,27,27,26,26,26,26,26,26,26,26,25,25,25,25,25,24,24,24,24,24,23,23,23,22,22,22,21,21,21,20,20,19,19,18,18,18,17,17,16,16,15,14,14,13,13,13,12,12,11,11,10,10,10,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,6,5,5,5,5,5,5,5,5,4,4,4,4,27,27,27,26,26,26,26,26,26,26,26,25,25,25,25,25,25,24,24,24,24,24,23,23,23,22,22,22,21,21,21,20,20,20,19,19,18,18,17,17,16,16,16,15,15,14,14,13,13,12,12,11,11,11,10,10,10,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,5,4,4,27,26,26,26,26,26,26,26,26,26,25,25,25,25,25,25,24,24,24,24,24,23,23,23,22,22,22,22,21,21,21,20,20,19,19,19,18,18,17,17,16,16,16,15,15,14,14,13,13,12,12,12,11,11,10,10,10,9,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,26,26,26,26,26,26,26,26,25,25,25,25,25,25,24,24,24,24,24,24,23,23,23,23,22,22,22,21,21,21,20,20,20,19,19,19,18,18,17,17,16,16,16,15,15,14,14,13,13,12,12,12,11,11,11,10,10,10,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,5,26,26,26,26,26,26,26,25,25,25,25,25,25,24,24,24,24,24,24,23,23,23,23,22,22,22,21,21,21,21,20,20,20,19,19,18,18,18,17,17,16,16,16,15,15,14,14,13,13,13,12,12,11,11,11,10,10,10,10,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,26,26,26,26,26,25,25,25,25,25,25,25,24,24,24,24,24,24,23,23,23,23,22,22,22,22,21,21,21,20,20,20,19,19,19,18,18,18,17,17,16,16,16,15,15,14,14,13,13,13,12,12,12,11,11,11,10,10,10,9,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,6,6,5,5,5,5,26,26,26,26,25,25,25,25,25,25,25,24,24,24,24,24,24,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,19,19,19,18,18,17,17,17,16,16,16,15,15,14,14,14,13,13,12,12,12,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,6,6,5,5,5,26,26,25,25,25,25,25,25,25,25,24,24,24,24,24,24,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,19,19,19,18,18,18,17,17,17,16,16,16,15,15,14,14,14,13,13,13,12,12,12,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,7,7,7,7,7,6,6,6,6,6,6,6,6,5,26,25,25,25,25,25,25,25,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,19,19,19,18,18,18,17,17,17,16,16,16,15,15,14,14,14,13,13,13,12,12,12,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,6,6,6,25,25,25,25,25,25,25,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,19,19,19,19,18,18,18,17,17,17,16,16,16,15,15,14,14,14,13,13,13,12,12,12,12,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,6,6,25,25,25,25,25,25,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,21,21,21,21,20,20,20,20,19,19,19,18,18,18,18,17,17,17,16,16,16,15,15,14,14,14,13,13,13,13,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,6,25,25,25,25,25,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,22,21,21,21,21,20,20,20,20,19,19,19,18,18,18,17,17,17,16,16,16,16,15,15,15,14,14,14,13,13,13,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,6,25,25,25,25,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,22,21,21,21,21,20,20,20,20,19,19,19,19,18,18,18,17,17,17,16,16,16,16,15,15,15,14,14,14,13,13,13,12,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,6,6,6,25,25,24,24,24,24,24,24,24,24,23,23,23,23,23,22,22,22,22,22,21,21,21,21,21,20,20,20,20,19,19,19,18,18,18,18,17,17,17,16,16,16,16,15,15,15,14,14,14,13,13,13,13,12,12,12,11,11,11,11,10,10,10,10,10,9,9,9,9,9,8,8,8,8,8,8,7,7,7,7,7,7,7,6,25,24,24,24,24,24,24,24,24,23,23,23,23,23,23,22,22,22,22,22,21,21,21,21,20,20,20,20,19,19,19,19,18,18,18,18,17,17,17,16,16,16,16,15,15,15,14,14,14,13,13,13,13,12,12,12,12,11,11,11,11,10,10,10,10,9,9,9,9,9,8,8,8,8,8,8,8,7,7,7,7,7,7,7,24,24,24,24,24,24,24,24,23,23,23,23,23,23,22,22,22,22,22,21,21,21,21,21,20,20,20,20,19,19,19,19,18,18,18,18,17,17,17,16,16,16,16,15,15,15,14,14,14,13,13,13,13,12,12,12,12,11,11,11,11,10,10,10,10,10,9,9,9,9,9,8,8,8,8,8,8,8,7,7,7,7,7,7,};

int distance_lut(int x, int y){return (int)distance[x + screenHeight * y];}
int angle_lut(int x, int y){return (int)(angle[x + screenHeight * y] * -1);}