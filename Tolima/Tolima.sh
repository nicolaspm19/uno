#!/bin/bash
mkdir Tolima
cd Tolima
cp ../DatosTolima.dat .
cp /NicolasPena_Hw1/DatosTolima.dat .
NicolasPena_Hw1/Tolima/DatosTolima.dat

sed -i -- 's/Year//g' DatosTolima.dat
sed -i -- 's/2006//g' DatosTolima.dat
sed -i -- 's/2007//g' DatosTolima.dat
sed -i -- 's/2008//g' DatosTolima.dat
sed -i -- 's/2009//g' DatosTolima.dat
sed -i -- 's/2010//g' DatosTolima.dat
sed -i -- 's/2011//g' DatosTolima.dat
sed -i -- 's/2012//g' DatosTolima.dat

awk '/March/{print $4,$6}' DatosTolima.dat > DatosMarzo.txt
awk '{print $4,$6}' DatosTolima.dat > GRF_vs_EQ.txt
sed -i '1d' GRF_vs_EQ.txt

python PlotsTolima.py

rm DatosTolima.dat
