import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

public class FoxSequenceTest {

    protected FoxSequence solution;

    @Before
    public void setUp() {
        solution = new FoxSequence();
    }

    @Test
    public void testCase0() {
        int[] seq = new int[]{1, 3, 5, 7, 5, 3, 1, 1, 1, 3, 5, 7, 5, 3, 1};

        String expected = "YES";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    @Test(timeout = 2000)
    public void testCase1() {
        int[] seq = new int[]{1, 2, 3, 4, 5, 4, 3, 2, 2, 2, 3, 4, 5, 6, 4};

        String expected = "YES";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    @Test
    public void testCase2() {
        int[] seq = new int[]{3, 6, 9, 1, 9, 5, 1};

        String expected = "YES";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    @Test(timeout = 2000)
    public void testCase3() {
        int[] seq = new int[]{1, 2, 3, 2, 1, 2, 3, 2, 1, 2, 3, 2, 1};

        String expected = "NO";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    @Test(timeout = 2000)
    public void testCase4() {
        int[] seq = new int[]{1, 3, 4, 3, 1, 1, 1, 1, 3, 4, 3, 1};

        String expected = "NO";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    @Test
    public void testCase5() {
        int[] seq = new int[]{1, 2, 3, 2, 3};

        String expected = "NO";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

    
    @Test
    public void testCase6() {
        int[] seq = new int[]{0,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1};

        String expected = "YES";
        String actual = solution.isValid(seq);

        Assert.assertEquals(expected, actual);
    }

}
