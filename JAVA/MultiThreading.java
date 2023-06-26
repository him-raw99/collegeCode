public class MultithreadingExample {

    public static void main(String[] args) {
        Thread thread1 = new NumberPrinterThread("Thread 1");
        Thread thread2 = new NumberPrinterThread("Thread 2");

        thread1.start();
        thread2.start();
    }

    private static class NumberPrinterThread extends Thread {
        private final String threadName;

        public NumberPrinterThread(String threadName) {
            this.threadName = threadName;
        }

        @Override
        public void run() {
            for (int i = 1; i <= 10; i++) {
                System.out.println(threadName + ": " + i);
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
