roll_no=input("Enter the roll number:")
marks_pf=float(input("Enter the marks obtained in Programming fundamental(out of 100):"))
marks_ic=float(input("Enter the marks obtained in Introduction to computing(out of 100):"))
marks_cg=float(input("Enter the marks obtained in Computer Graphics(out of 100):"))
total_marks=marks_pf+marks_ic+marks_cg
average_marks=total_marks/3
percentage=(total_marks/300)*100
print("\n Student roll no:",roll_no )
print("Marks_pfrks in Programming fundamental:", marks_pf)
print("Marks in Introduction to computing:", marks_pf)
print("Marks in Computer Graphics:", marks_pf)
print("Total marks:",total_marks)
print("Average marks:",average_marks)
print("percentage",percentage)