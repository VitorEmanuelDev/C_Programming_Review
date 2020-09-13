//Class related to the Student.java class. Program that implements the ,merge sort agorithm

public class MergeSortGrades {
	
	public static void main(String[] args) {
				
		Student students[] = {
				new Student("Renae", 70),
				new Student("Waleed", 86),
				new Student("Luna", 89),
				new Student("Rafael", 92),
				new Student("Leonardo", 73),
				new Student("Akash", 78),
				new Student("Pogba", 71),
				new Student("Luka", 79),
				new Student("Fatou", 82),
				new Student("Gabriela", 94),
				new Student("Ahmed", 80),
				new Student("Sophia", 84),
				new Student("Park", 90),
			
		};
		
		sort(students, 0, students.length);
		
		for(Student student : students) {
			
			System.out.println(student.getName() + " .............." + student.getGrade());
			
		}
	}
		
	
	private static void sort(Student[] students, int start, int end) {
		
		int half = end - start;
		
		if(half > 1) {
			
			int middle = (start + end) / 2;
			
			sort(students, start, middle);
			sort(students, middle, end);
			merge(students, start , middle, end);	
		
		}
			
	}

	
	private static Student[] merge(Student[] students, int start, int middle, int end) {
		

		Student[] mergedGroups = new Student[end - start];
		
		int current = 0;
		int current1 = start;
		int current2 = middle;
		
		while(current1 < middle && current2 < end) {
        
			Student student1 = students[current1];
			Student student2 = students[current2];			
			
			if(student1.getGrade() < student2.getGrade()) {
				
				mergedGroups[current] = student1;
				current1++;
				
			} else {
				
				mergedGroups[current] = student2;
				current2++;
				
			}
			
			current++;
				
		}
		
		//loops to get remaining elements 
		while(current1 < middle) {
			
			mergedGroups[current] = students[current1];
			current1++;
			current++;
			
		}
		
		while(current2 < end) {
			
			mergedGroups[current] = students[current2];
			current2++;
			current++;
				
		}
		
		for(int counter = 0; counter < current; counter++) {
			
			students[start + counter] = mergedGroups[counter];
			
		}
		
		return students;
		
	}

}
