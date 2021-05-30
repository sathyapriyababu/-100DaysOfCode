// Java program to Count total sub-array
// which start and end with same element

public class Main {

	// function to find total sub-array which
	// start and end with same element
	public static void cntArray(int A[], int N)
	{
		// initialize result with 0
		int result = 0;

		// array to count frequency of 1 to N
		int[] frequency = new int[N + 1];

		for (int i = 0; i < N; i++) {
			// update frequency of A[i]
			frequency[A[i]]++;
		}

		for (int i = 1; i <= N; i++) {
			int frequency_of_i = frequency[i];

			// update result with sub-array
			// contributed by number i
			result += ((frequency_of_i)
					* (frequency_of_i + 1))
					/ 2;
		}

		// print the result
		System.out.println(result);
	}

	// Driver code
	public static void main(String[] args)
	{

		int[] A = { 1, 5, 6, 1, 9, 5,
					8, 10, 8, 9 };
		int N = A.length;
		cntArray(A, N);
	}
}
