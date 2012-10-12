import java.util.ArrayList;

public class FoxSequence {
	public String isValid(int[] seq) {
		int[] fu = new int[seq.length-1];
		
		for(int i=1; i<seq.length; i++)
			fu[i-1] = seq[i] - seq[i-1];
		
		ArrayList<Integer> ar = new ArrayList<Integer>();
		
		for(int i=0; i<fu.length-1; i++){
			if(0 <fu[i] * fu[i+1] )continue;
			if(fu[i] == fu[i+1]) continue;
			ar.add(i);
		}
		
		if(ar.size() == 3)
			if(0 < fu[ar.get(0)])
				if(fu[ar.get(1)] < 0)
					if(0 < fu[ar.get(2)])
						if(fu[fu.length-1] < 0)
							if(check3(ar,fu))
								return "YES";
		
		if(ar.size() == 4)
			if(0 < fu[ar.get(0)])
				if(fu[ar.get(1)] < 0)
					if(fu[ar.get(2)] == 0)
						if(0 < fu[ar.get(3)])
							if(fu[fu.length-1] < 0)
								if(check4(ar,fu))
									return "YES";
		return "NO";
	}

	private boolean check4(ArrayList<Integer> ar, int[] fu) {
		for(int i=0; i <= ar.get(0); i++)
			if(fu[0] != fu[i])
				return false;
		
		for(int i=ar.get(0)+1; i<= ar.get(1); i++)
			if(fu[ar.get(0)+1] != fu[i])
				return false;
		
		for(int i=ar.get(1)+1; i<= ar.get(2); i++)
			if(fu[ar.get(1)+1] != fu[i])
				return false;
		
		for(int i=ar.get(2)+1; i<= ar.get(3); i++)
			if(fu[ar.get(2)+1] != fu[i])
				return false;
		
		for(int i=ar.get(3)+1; i<= fu.length-1; i++)
			if(fu[ar.get(3)+1] != fu[i])
				return false;

		return true;
	}

	private boolean check3(ArrayList<Integer> ar,int[] fu) {
		for(int i=0; i <= ar.get(0); i++)
			if(fu[0] != fu[i])
				return false;
		
		for(int i=ar.get(0)+1; i<= ar.get(1); i++)
			if(fu[ar.get(0)+1] != fu[i])
				return false;
		
		for(int i=ar.get(1)+1; i<= ar.get(2); i++)
			if(fu[ar.get(1)+1] != fu[i])
				return false;
		
		for(int i=ar.get(2)+1; i<= fu.length-1; i++)
			if(fu[ar.get(2)+1] != fu[i])
				return false;

		return true;
	}
}