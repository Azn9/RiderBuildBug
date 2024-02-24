# POC Rider Bug
This repository contains an example of an issue with Rider compilation between projects.

# How to build?
1. Install cmake if you don't have it
2. Clone the project
3. Run `cmake build .` on the project directory
4. Open the `Test.sln` file with Rider
5. Build and run the project (). The console should display the following:
```
Hello, World!
B
C2
C
```
6. Open the `B.cpp` file found in the project "B" and edit the 8th line:
```diff
-    std::cout << "B\n";
+    std::cout << "Bzqsd\n";
```
7. Build and run the project (). The console will still display the following:
```
Hello, World!
B                 <----- Error, we edited this line!
C2
C
```

8. (Optional) Do some edits on the `C.cpp` file, the same issue will arise.
9. (Optional) Do the same steps on Visual Studio, it will works as intended.
