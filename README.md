# stitchbuzz
tools for stitching stringmol trial information together

A conpop run produces the following:

-----------------------------------
splitstory.dat:

This file contains a list of all the divisions that occur. It should be possible to see the ancestry of the container-of-containers in this file.

-----------------------------------
popdy files:

a popdy file is produced for each `lifetime' in each container - i.e. from when a population is seeded into a container until when that population goes extinct. 

A line in a popdy file looks like this:

1000190000,3,26

each number represents

TIME,SPP,COUNT

TIME is relative to the start of the whole simulation
SPP is the species number. <check whether this numbering restarts on division - hopefully it doesn't!>
COUNT is the number of individuals of a species present in the container at time TIME
