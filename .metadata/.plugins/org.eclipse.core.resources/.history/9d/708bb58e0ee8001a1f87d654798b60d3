//class related to the Item class. the merge sort assumes that the lists are already ordered

public class MergeSortGrades {
	
	public static void main(String[] args) {
				
		Student studentsA[] = {
				new Student("Renae", 70),
				new Student("Leonardo", 73),
				new Student("Akash", 79),
				new Student("Ahmed", 80),
				new Student("Sophia", 84),
				new Student("Park", 90)
				
		};
		
		Student studentsB[] = {
				new Student("Pogba", 71),
				new Student("Luka", 79),
				new Student("Fatou", 82),
				new Student("Waleed", 86),
				new Student("Luna", 89),
				new Student("Rafael", 92),
				new Student("Gabriela", 94)
			
		};
		
		Student mergedGroups[] = mergeSort(studentsA, studentsB);
		
		for(Student student : mergedGroups) {
			
			System.out.println(student.getName() + " .............." + student.getGrade());
			
		}
		
	
	}
	
	private static Student[] mergeSort(Student[] studentsA, Student[] studentsB) {
		
		int mergedGroupSize = studentsA.length + studentsB.length;
		Student[] mergedGroups = new Student[mergedGroupSize];
		
		int currentStudentA = 0;
		int currentStudentB = 0;
		int currentStudent = 0;
		
		//there's a bug I still need to fix
		while(currentStudentA < studentsA.length && currentStudentB < studentsB.length) {
        
			Student student1 = studentsA[currentStudentA];
			Student student2 = studentsB[currentStudentB];			
			
			if(student1.getGrade() < student2.getGrade()) {
				
				mergedGroups[currentStudent] = student1;
				currentStudentA++;
				
			} else {
				
				mergedGroups[currentStudent] = student2;
				currentStudentB++;
				
			}
			
			currentStudent++;
				
		}
		
		while(currentStudentA < studentsA.length) {
			
			mergedGroups[currentStudent] = studentsA[currentStudentA];
			currentStudent++;
			currentStudentA++;
			
		}
		
		while(currentStudentB < studentsB.length) {
			
			mergedGroups[currentStudent] = studentsB[currentStudentB];
			currentStudent++;
			currentStudentB++;
			
		}
			
		return mergedGroups;
		
	}

}
