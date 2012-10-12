public class AdditionGame {

	public int getMaximumPoints(int A, int B, int C, int N) {
		int num = 0;
		int points[] = new int[3];
		
		points[0] = A;
		points[1] = B;
		points[2] = C;
		
		for(int i=0; i<N; i++){
			int max = Math.max(points[0], Math.max(points[1], points[2]));
			if(max == 0) continue;
			num += max;
			for(int j=0; j<3; j++)
				if(points[j] == max){
					points[j]--;
					break;
				}
			
		}
		return num;
	}

}
