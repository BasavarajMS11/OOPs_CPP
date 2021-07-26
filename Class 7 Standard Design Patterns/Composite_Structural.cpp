//Demo7:  Composite Pattern (Structural Pattern)

#include<iostream>
#include<vector>

using namespace std;
class Employee{
public:
    string name;
    string dept;
    int salary;
    vector<Employee> subordinates;
    Employee(string n, string d, int s){
    name=n;
    dept=d;
    salary=s;
    }
    void printEmployee(){
    cout<<name<<":"<<dept<<":"<<salary<<endl;
    }
    void addEmployee(Employee e){
    subordinates.push_back(e);
    }
    void removeEmployee(){
    subordinates.pop_back();
    }
    //vector<Employee> v
    void printSubordinates(vector<Employee> v){
    vector<Employee>::iterator it;
    for(it=v.begin();it!=v.end(); it++){
        it->printEmployee();
    }
    }
   // vector<Employee>

};
/*

int main(){
    Employee chairman("Sagar Kulkarni","KLESOFT",110000);
    Employee CEO("Rajaram Joshi","CEO",100000);
    Employee projMgr("Nitin Verma","a",75000);
    Employee projMgr1("Revathi Gudi","b",75000);
    Employee projMgr2("Sadaf Mulla","c",75000);

    chairman.printEmployee();
    cout<<"--------------------------------------"<<endl;
//    CEO.addEmployee(e1);
    CEO.addEmployee(projMgr);
    CEO.addEmployee(projMgr1);
    CEO.addEmployee(projMgr2);

    Employee CEO1("Rahul","CEO",100000);
    Employee CEO2("Soumitra","CEO",100000);

    //CEO1
    Employee projMgr3("Prajwal","a",75000);
    Employee projMgr4("Pratiksha","b",75000);
    Employee projMgr5("Priyanka","c",75000);
    Employee projMgr6("Ritbik","d",75000);
    Employee projMgr12("Nitish","e",75000);
    CEO1.addEmployee(projMgr3);
    CEO1.addEmployee(projMgr4);
    CEO1.addEmployee(projMgr5);
    CEO1.addEmployee(projMgr6);
    CEO1.addEmployee(projMgr12);
    //CEO2
    Employee projMgr7("Riddhi","a",75000);
    Employee projMgr8("Ramanath","b",75000);
    Employee projMgr9("Samay","c",75000);
    Employee projMgr10("Shefali","d",75000);
    Employee projMgr11("Shashi Prakash","e",85000);
    CEO2.addEmployee(projMgr7);
    CEO2.addEmployee(projMgr8);
    CEO2.addEmployee(projMgr9);
    CEO2.addEmployee(projMgr10);
    CEO2.addEmployee(projMgr11);
    cout<<"CEO"<<endl;
    CEO.printEmployee();
    CEO.printSubordinates(CEO.subordinates);
    cout<<"--------------------------------------"<<endl;
    cout<<"CEO1"<<endl;
    CEO1.printEmployee();
    CEO1.printSubordinates(CEO1.subordinates);
    cout<<"--------------------------------------"<<endl;
    cout<<"CEO2"<<endl;
    CEO2.printEmployee();
    CEO2.printSubordinates(CEO2.subordinates);
    cout<<"--------------------------------------"<<endl;

    Employee projCoordinator("Nikhil","Software",85000);
    Employee developer1("Nisha Rao","software",65000);
    Employee developer2("Pooja Kher","software",65000);
    Employee developer3("Poorna","software",65000);
    Employee developer4("Rashmi","software",65000);
    projCoordinator.addEmployee(developer1);
    projCoordinator.addEmployee(developer2);
    projCoordinator.addEmployee(developer3);
    projCoordinator.addEmployee(developer4);
    cout<<"Project Coordinator"<<endl;
    projCoordinator.printEmployee();
    cout<<"Project Coordinator subordinates"<<endl;
    projCoordinator.printSubordinates(projCoordinator.subordinates);
return 0;
}*/
